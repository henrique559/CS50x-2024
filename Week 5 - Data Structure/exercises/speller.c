// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>


#include "dictionary.h"
long WordsCount = 0;

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 416;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);
    node *cursor = table[index];

    while(cursor != NULL)
    {
        if(strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }
        cursor = cursor->next;

    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{

    unsigned int num = 0;
    for(int i = 0; i < strlen(word); i++)
    {
        num += tolower(word[i]);
    }

    return (num % N);

}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{

  //Abrir dictionary com FILES
    char loadword[LENGTH];
    int index;

    FILE *source = fopen(dictionary, "r");

    if(source == NULL)
        return false;

        // Ler palavras do arquivo de cada vez com FSCANF e guardando em uma string
    while(fscanf(source, "%s", loadword) != EOF)
    {
        // Criar um node com malloc
        node *hash_node = malloc(sizeof(node));
        if(hash_node == NULL)
        {
            free(hash_node);
            return false;

        }

        // copiar a string dentro do node com strcpy
        WordsCount++;
        strcpy(hash_node->word, loadword);
        hash_node->next = NULL;


        // Usar hash function para determinar a index da palavra na array da hash table
        index = hash(hash_node->word);

        // Inserir o node no index certo da hash table
        if(table[index] == NULL)
        {
            table[index] = hash_node;
        }
        else
        {
            hash_node->next = table[index];
            table[index] = hash_node;

        }


    }
    // Close the dictionary file
    fclose(source);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    return WordsCount;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for(int i = 0; i < N; i++)
    {
        node *head = table[i];
        node *cursor = head;
        node *tmp = NULL;

        while(cursor != NULL)
        {

            cursor = cursor->next;
            tmp = cursor;
            free(tmp);
        }
        free(cursor);
    }

    return true;
}
