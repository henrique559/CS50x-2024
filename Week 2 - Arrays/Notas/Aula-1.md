# Week 2 - Arrays

## Compiladores
Um compilador é utilizado para transformar "source code" em linguagem de maquina para que o computador consiga rodar o seu programa.
> Compilador utilizado pelo curso: clang


Um compilador trabalha em 4 etapas:
- Pré-processing: O Compilador reconhece bibliotecas e funções definidas pelo usuário
```c
#define <stdio.h>
int funcaoexemplo (string teste);
```
- Compiling: Transforma o código de C para Assembly
- Assembling: Transforma o seu código de Assembly para codigo binário
- Linking: Localiza bibliotecas e códigos com funções utilizadas no seu programa procurando pelo seu HD/SSD e junta os códigos binários de todos os programas.

## Debugging
Métodos para resolver erros semânticos (Erros de lógica) no seu seu código.
- `Printf()`: Método que utiliza a função printf para ver a funcionalidade do seu código com a finalidade
de descobrir onde está o erro.
- `Debugger`: Método utilizado em IDE's onde você pode selecionar qual parte do programa você deseja analisar de forma manual
por exemplo: ver passo a passo da execução de um for loop possibilitando ver com eficiência oque está acontecendo com o seu código
e manipulação das variáveis em tempo real.
- `Rubber Duck Debugging`: Método no qual você utiliza um objeto inanimado para verbalizar o funcionamento do seu código, é excelente para
verificar erros.

## Memoria
Uma memória RAM tem uma quantidade certa de espaço (Normalmente 8GB ou 4GB), porém, cada espaço é representado em bilhões ou trilhões de bytes, esses bytes servem para armazenar dados (int, float, char etc...) e cada 1 byte tem um endereço que aponta a localização para esse mesmo byte ser indentificado por softwares ou por até mesmo pelo programador utilizando ponteiros.

![Uploading image.png…]()

Variáveis utilizam uma quantidade finita de espaço alocado na memória RAM do computador

Por exemplo: um valor de tipo Int pode ocupar apenas 4 bytes na mémoria, por outro lado um valor de tipo String pode ocupar N bytes na mémoria, dependendo da quantidade de letras (chars)inseridas pelo usuário.
Exemplo:
```c
#include <stdio.h>

int main (void)
{
  int score1 = 72;
  int score2 = 73;
  int score3 = 33;

  printf("Average: %f\n", (float) (score1 + score2 + score3) / 3);
} 
```
> score.c

As variáveis declaradas no código acima ficam armazenadas na mémoria RAM dessa forma:

![image](https://github.com/henrique559/CS50x-2024/assets/145483144/22bd470a-e68d-4b89-9ecb-ee5c106c1ff7)

Onde temos a quantidade de bytes alocado dependendo do tipo do valor, o valor da varíavel em bits, o nome da variável e o endereço dela


## Arrays
todo

