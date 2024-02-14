#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

// Funções
void grade_result (int x);
float sentence_count (string str);
float word_count (string str);
float letter_count (string str);
int coleman_index (string str);

int main (void)
{
    // Input do usuário
    string user_input, points;
    user_input = get_string("Text: ");

    // Printar o resultado para o usuário
    grade_result(coleman_index(user_input));

    return 0;
}

// Criar função que vai calcular quantas letras, palavras e sentenças tem um texto
// Contar letras
float letter_count (string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isalpha(str[i]))
            count++;
    }

    return count / word_count(str) * 100.0;
}

// Contar Sentenças
float sentence_count (string str)
{
    int count = 0;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == '.' || str[i] == '?' || str[i] == '!')
            count++;
    }

    return count / word_count(str) * 100.0;
}


// Contar palavras
float word_count (string str)
{
    int count = 1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(isblank(str[i]))
            count++;
    }

    return count;
}

// Calcular o algoritmo junto com a média de letras e sentenças por 100 palavras
int coleman_index (string str)
{
    float letter, sentence;
    int index = 0;

    letter = letter_count(str);
    sentence = sentence_count(str);

    index = (int) round(0.0588 * letter - 0.296 * sentence - 15.8);
    return index;
}

void grade_result (int x)
{
    if(x < 1)
        printf("Before Grade 1\n");
    else if(x >= 1 && x <= 16)
        printf("Grade %d\n", x);
    else
        printf("Grade 16+\n");

    return;
}

