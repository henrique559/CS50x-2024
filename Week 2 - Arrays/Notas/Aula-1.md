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
Variáveis utilizam uma quantidade finita de espaço alocado na memória RAM do computador
> Por exemplo: um valor de tipo Int pode ocupar apenas 4 bytes na mémoria.
> Por outro lado: um valor de tipo String pode ocupar N bytes na mémoria, dependendo da quantidade de letras (chars)
inseridas pelo usuário.

![image](https://github.com/henrique559/CS50x-2024/assets/145483144/8061842d-2067-4015-a542-7cfa93be3b5b)
> Imagem de uma memória ram Real





## Arrays
todo

