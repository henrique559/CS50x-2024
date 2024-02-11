#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

// Criar array com as letras e pontos

int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8 , 4, 10};

char *point_calculator (char *p1, char *p2);
char *tollower (char *s);
int main (void)
{
    // Criar variáveis para armazenar strings dos usuários e os pontos.
    string player_1, player_2;
    int total_score = 0;

    // Criar input para os dois usuários
    // Transformar a string em letras minúsculas
    player_1 = tollower(get_string("Player 1: "));
    player_2 = tollower(get_string("Player 2: "));

    // Mostrar o vencedor
    printf("%s\n", point_calculator(player_1, player_2));

    return 0;
}


char *tollower (char *s)
{
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
    }

    return s;
}
// Calcular os pontos
char *point_calculator (char *p1, char *p2)
{
    int point_1 = 0, point_2 = 0;

    for(int i = 0; p1[i] != '\0'; i++)
    {
        if(ispunct(p1[i]))
            point_1 += 0;
        else
            point_1 += points[p1[i] - 'a'];
    }

    for(int i = 0; p2[i] != '\0'; i++)
    {
        if(ispunct(p2[i]))
            point_2 += 0;
        else
            point_2 += points[p2[i] - 'a'];
    }

    if(point_1 > point_2)
        return "Player 1 wins!";
    else if(point_1 < point_2)
        return "Player 2 wins!";
    else
        return "Tie!";
}

