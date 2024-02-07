# Semana 1

## Linguagem C

Nessa semana foi apresentado a linguagem de programação C
Hello world em C:
```c
#include <stdio.h>

int main(void)
{
  printf("Hello, World");
}
```

## Variaveis
Variáveis servem para guardar valores na memória.

Tipos Inteiros:
Short - 2 Bytes, tipo de formatação: %sd
Int - 4 Bytes, tipo de formatação: %d ou %i
Long - 8 Bytes, tipo de formatação: %ld 

Tipos de ponto flutuante:
Float - 8 Bytes, tipo de formatação: %f
Double - 8 Bytes (Mais precisão), tipo de formatação: %lf

Caracteres:
Char - 1 Byte, tipo de formatação: %c;

Outros:
Unsigned - Utilizado para descartar os números negativos. tipo de formatação: %u+tipo
Signed - Utilizado para utilizar números negativos. (Meio desnecessário)

Váriaveis podem ser atribuidas utilizando o operador '='
ex:
```c
int numero = 10;
```

## Input/Output

Input - Dados inseridos pelo mouse/teclado
Output - Dados apresentados na tela

Printf(); - Insere uma string no Output
sintaxe: printf("teste");

Scanf(); - Lê input do usuário e armazena na

## Estrutura de condição e repetição
Estrutura de condição serve para controlar o fluxo do programa.

sintaxe if/else:
if(condição)
{
  instrução
}
else 
{
  instrução
}

else if (condição) => aninhamento de if/elses

ex: Um programa que calcula se o número inserido pelo usuário é maior ou igual a zero.
```c
if(num > 0)
{
  printf("esse número é maior que zero");
}
else
{
  printf("esse número é igual a zero");
}
```

Estrutura de repetição serve para repetir instruções em um determinado n° de vezes ou caso uma repetição seja verdadeira.

sintaxe while loop:
while(condição)
{
  instruções
  incremento
}

sintaxe for loop:
for(inicialização;condição;incremento)
{
  instruções;
}

ex: Um programa que repete a string "Olá" 10 vezes na tela.

```c
n = 0;
while(n > 10)
{
  printf("Olá\n");
  n++;
}
```

## Funções
todo 

## Truncation
todo

## Integer Overflow
todo

## Float-Point Imprecision
todo


