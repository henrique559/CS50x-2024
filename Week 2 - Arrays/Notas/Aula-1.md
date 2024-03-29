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

![image](https://github.com/henrique559/CS50x-2024/assets/145483144/b4bf3dbe-288e-42cc-90d3-5e0f12d598bc)

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

Array é um tipo de estrutura de dados que aloca valores na memória ram de forma sequencial dependendo do tamanho declarado pelo usuário e do tipo da variável. 

por exemplo: um array do tipo int com 4 números terá 4 espaços de 4 bytes cada alocados na memória, ou um array de chars (strings) escrito "Hello" terá 5 espaços na memória com cada letra representando 1 byte.

Definição de uma Array: `int numero[4]` <- Toda array começa pelo zero, ou seja, o valor na verdade é N-1, declarei 4 porém o valor será 5
```c
#include <stdio.h>
#define N 3

int main(void)
{
  int scores[N];

  for(int i = 0; i < N; i++)
      scores[i] = get_int("Score: ");

  printf("Average: %f\n, (scores[0] + scores[1] + scores[2]) / (float) N);
}
```
> score.c

Array é um tipo de referência, ou seja, os valores alocados na memória estão no heap (onde tipos de referencia vivem) porque o software trabalha apenas com a referência do primeiro valor de uma array, não os valores de toda a array.
(&array[0] == int array[3])

## Strings

Strings são simplesmente uma array de caracteres que contém um caractere final chamado '\0' ou NUL que diz onde a string vai acabar, o tamanho de toda string é N+1 (Onde N é o número inserido pelo usuário e +1 é o caractere '\0')

Todo caractere na verdade é um número int que representa um número na tabela ASCII.
> char str[] = "Teste123";

Duas strings podem ser armazenadas na mesma variável utilizando `matrizes`.

> char str[1\][4+1\] = {"Oi", "Ola"} // 1 - qntd de strings (2 strings) | 9+1 - qntd de caracteres + '\0'

exemplo: lenght.c 
```c

int main (void)
{
  string name = get_string("Name: ");

  int n = 0;
  while (name[n] != '\0')
    n++;
}

```

exemplo: uppercase.c

```c
int main (void)
{
    string s = get_string("Before: ");

    int i = 0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;

        i++;
    }
    printf("After: %s\n", s);
}

}
```

## Command-Line Arguments

É Possível enviar dados através de argumentos na linha de comando do linux para algum programa em C adicionando paramêtros na 
função main do seu programa.
- Modificar `int main (void)` para `int main(int argc, string argv[]`
- Onde int argc significa: argument count (quantas palavras o usuário digitou)
- Onde string argv[] significa: argument vector (string que o usuário digitou na posição argc)

>greet.c
```c
int main (int argc, string argv[])
{
  if( argc == 2)
    printf("hello, %s\n", argv[1]); // O '1' na array significa para retornar o segundo valor inserido na linha de comando (seu nome)
else
    printf("hello, world");
}
```

## Cryptography

Criptografia é a arte de enviar dados de forma segura em qualquer tipo de formato de arquivo utilizando encriptação para
misturar informações onde só é possível saber oque é quem digitou e quem vai receber a mensagem.
- `plaintext` - texto normal.
- `cipher` - algoritmo para criptografar sua mensagem
- `ciphertext` - o seu texto criptografado

> exemplo: ceaser cypher e ROF13
