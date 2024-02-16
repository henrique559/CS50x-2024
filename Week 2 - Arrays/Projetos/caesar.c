#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

string enchiper (string plaintext, int key);
int main(int argc, string argv[])
{
    int key = 0;

    // Receber a 'chave' via parametro no CLI
    // Fazer recusar numeros negativos
    if(argc == 2 && isdigit(*argv[1]))
        key = atoi(argv[1]);
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    string plain_text = get_string("plaintext: ");
    printf("ciphertext: %s\n", enchiper(plain_text, key));

    return 0;

}

string enchiper (string plaintext, int key)
{
    // Arrumar  texto que recebe
    for(int i = 0; plaintext[i] != '\0'; i++)
    {
        if(isalpha(plaintext[i]))
        {
            if(islower(plaintext[i]))
                plaintext[i] = ((((plaintext[i] - 'a') + key) % 26) + 'a');

            if(isupper(plaintext[i]))
                plaintext[i] = ((((plaintext[i] - 'A') + key) % 26) + 'A');

        }
    }


    return plaintext;
}

// Converter ASCII para o index de um alfabeto
// Usar a formula para criptografar
// Transformar em ASCII novamente
