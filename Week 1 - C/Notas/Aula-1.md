# Semana 1

## Linguagem C

Nessa semana foi apresentado a linguagem de programação C.

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
Int - `4 Bytes`

Formatação: `%d ou %i`


Long - `8 Bytes`

Formatação: `%ld`

Tipos de ponto flutuante:
Float - `8 Bytes`

Formatação:` %f`


Double - `8 Bytes (Mais precisão)`

Formatação: `%lf`

Caracteres:
Char - `1 Byte`

Formatação: `%c`

Outros:
Unsigned - Utilizado para descartar os números negativos. tipo de formatação: `%u+tipo`

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

sintaxe: `printf("teste");`

Scanf(); - Lê input do usuário e armazena em alguma variável

sintaxe: `scanf("%tipof", &variavel);`

## Operadores 

- Aritmética `+ - * / %`
- Boolean `true false 0 1`, any number > 0 is true
- Logico `&& (AND) || (OR)`
- Not `!x`
- Relacional `< > <= >=`
- Equalidade `==`
- Inequalidade `!==`

## Estrutura de condição e repetição
Estrutura de condição serve para controlar o fluxo do programa.

sintaxe if/else:
if(condição)

  instrução

else 

  instrução


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

sintaxe for loop:

for(inicialização;condição;incremento)

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


