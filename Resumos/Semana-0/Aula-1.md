# CS50 - Semana 0

Na aula da semana 0 foi apresentado o conteúdo básico para entender representações nos computadores, como números, letras, fotos entre outros,
como também o conceito de 'algoritmo', por fim foi apresentado a 'linguagem' de programação Scratch, famosa por ser visual e ensinar conceitos de programação de 
forma mais amigável.

## Representação de números (Binário e Hexadecimal)
O Computador apenas entende 0 e 1 (que na verdade não são os números em si, apenas uma abstração para representar ligado e desligado) porque toda a sua arquitetura
opera com transistores que tem apenas dois estados: ligado e desligado, portanto, com o objetivo de representar esses dois estados, foi utilizado a notação bináriaque nada mais é uma forma de contar números diferente da forma convencional.
Normalmente, utilizamos a notação unária, que é o famoso 'contar nos dedos' e utilizando ela conseguimos contar somente até 10 utilizando duas mãos, porém, na notação binária podemos contar até 1024 nas 10 mãos, isso porque binários são uma forma muito mais eficiente de contar algo.

Pense em uma lampada que tem dois estados: ligado e desligado, e pense que cada lampada da esquerda para direita representa o 2 com potência de N (onde N representa a posição do número) e a posição das lampadas começa no 0.

|1: ligado    |   2^3    2^2   2^1   2^0  |   < -Representa o N° Posição.

|0: desligado |   0      0     0     0    |  (Se estiver zero você não soma, porém se estiver um você faz 2^ Posição e terá esse valor)

Ou seja, se fosse 0001 teriamos somente o número 1, porém, se fosse o número 0010, teriamos o número 2, agora se você fazer 0011, terá o número 3, porque o 
agora você pode somar os dois valores, por fim, o número 1111 seria o 8, porque o resultado da soma de todas as potências dos números ligados seria o 8.

O Número Hexadecimal é a mesma fórmula, porém realizando a potência de 16, em vez de 2, entretanto você lida com os números de forma diferente, onde apartir do 10 os números começam a ser contados por letras, ou seja:
1 ao 9 - normal.          (Termina no 15 porque sempre começa com o zero)

|10 - A  |   13 - D

|11 - B  |   14 - E

|12 - C  |   15 - F

Um byte representa 8 bits porque apenas 1 bit é um valor muito pequeno, 8 bits representa 255 (lembre-se, começa com o 0 sempre), um valor que já é possível 
ser utilizado porque tem espaço suficiente para realizar coisas.

## Representação de letras, cores e fotos
No inicio de tudo, todas as letras eram representadas por binários utilizando o padrão ASCII, no qual colocava um número binário representado cada letra,
por exemplo a letra 'a' representa o número 65 e a letra 'A' o número 97, é basicamente isso e é muito sobre decorar essas coisas.
Porém, nasceu a necessidade de representar letras de outros tipos como kanji japoneses, letras chinesas, arabes, etc... e com isso surgiu o Unicode, que 
diferente do ASCII não realiza por binários, e sim por tipos de formatação como UTF-8, no qual não entrarei em profundidade aqui, mas o Unicode consegue 
representar caracteres e emojis utilizando números hexadecimais de forma similar ao ASCII.

Cores no computador são representada com três tipos: Vermelho, Verde e Azul, cada pixel na tela do seu computador é um conjunto de binarios que representa
um pouco dessas 3 cores misturadas para que no final saia a cor desejada.
cada tipo tem o valor de 1 byte (8 bits), que variam de 0 a 255 bits, quanto menor, mais fraca essa cor será, quanto maior, mais forte será, ou seja, o conjunto de 1 pixel (RGB) tem 24 bits, e os 3 representa uma quantidade certa de cor, que combinando sai outras cores diferentes.

Imagens são compostas por vários pixels onde cada um byte e representa uma cor utilizando o RGB

## Algoritmos
Algoritmo é um tipo de instrução escrita de forma que seja um 'passo-a-passo' para resolver um problema de forma muito precisa, e essa é a forma que os humanos
descobriram para manter uma comunicação com computadores que só entendem 0 e 1, utilizando um tipo de linguagem que seja mais clara e entendivel, e assim surgiu
as linguagens de programação, que tem como objetivo resolver problemas utilizando o computador, resolver problemas em um computador apesar de parecer intuitivo
consegue ser muito complicado por ser algo que precisa ser MUITO preciso para que o computador consiga interpretar de forma correta, se não pode ocorrer erros 
de sintaxe (quanto algo está escrito errado) ou semantica (quando o computador faz algo diferente do que foi colocado no algoritmo).

Algoritmos precisam ser eficientes e chegar na solução de algo de forma rápida e estruturada, assim chegamos na parte onde é preciso raciocinar e procurar a 
melhor forma de resolver aquilo, algo todos precisam saber é que todo problema pode ser eficiente se o problema for cortado pela metade.
por exemplo:
Você precisa encontrar o número de um tal de 'Carlinhos' numa lista enorme de contatos, oque o seu aplicativo de contatos faz?
Por baixo dos panos nada mais é um algoritmo que pesquisa a lista começando pela metade, dividindo e conquistando para poder chegar da forma mais rápida
no resultado.

## Scratch
Foi introduzido para gente uma 'linguagem' de programação visual chamada 'Scratch', que foi criada pelo MIT para ensinar conceitos de linguagens de programação 
de forma menos abstrata e fácil para ajudar iniciantes a começar no mundo da programação, lá você pode aprender sobre estrutura de condições, estrutura de 
repetição, variaveis, funções, etc... 
Como projeto da 'problem set 0', criei um jogo simples baseado na franquia 'TOUHOU' que é um jogo de nave bullet hell japonês bem díficil, gostei bastante
do resultado e acredito que melhorei bastante a minha habilidade de criar coisas e resolver problemas por meio da programação, algo que eu me incomodava um pouco 
porque estava no famoso tutorial hell, aprendia somente a sintaxe mas não conseguia aplicar em nada, enfim, achei muito divertido mexer com o scratch.
