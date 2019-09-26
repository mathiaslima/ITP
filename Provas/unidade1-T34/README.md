## Questão 1
Um dos jogos favoritos das crianças de Westeros é o jogo da
forca, onde existe uma mensagem secreta, e os participantes devem adivinhar qual
é essa mensagem chutando letras que podem ou não estar na mensagem. Caso
eles consigam adivinhar a palavra, a criança que pensou ela é alimentada para
Drogon. Caso contrário, todos os participantes que estavam tentando adivinhar tem
suas cabeças cortadas pelo exército Lannister. Em Game of Thrones, todos
perdem.
Faça um programa para o grande Meistre que simule uma partida do jogo de
forca. Seu programa receberá uma mensagem em uma linha. A mensagem só
conterá letras (A até Z, a até z) e espaços em brancos. Logo após isso, será
informado um inteiro C contendo a quantidade de chutes, seguido de C letras
maiúsculas, com as tentativas realizadas. Seu programa deve imprimir “Bucho
cheio!” se os participantes acertarem a palavra e “Cabeças vão rolar” caso eles não
consigam adivinhar.

## Questão 2
Um mestre da espionagem brasileira, Lagartixa Fluida é
especialista em atravessar terrenos inimigos sem ser detectado. Um dos motivos do
seu sucesso é a preparação: Lagartixa sempre estuda o território e a posição dos
guardas antes de realizar uma operação de infiltração. Para facilitar a vida dele na
próxima missão, ele resolveu que um programa de computador cairia bem!
Escreva um programa que lerá um mapa 6x6 de caracteres, no seguinte
formato:

v * * * < *
* * * * * *
* ^ * * > *
* * * * * *
* * * * ^ *
* * * * * *

Onde:

* - locais livres para ele andar
> - um soldado olhando para o leste
< - um soldado olhando para o oeste^ - um soldado olhando para o norte
v - um soldado olhando para o sul

Após essa leitura, seu programa lerá um inteiro M, que indica a quantidade
de movimentos que Lagartixa fará na simulação, seguido de M letras:

D - anda para o leste
E - anda para o oeste
C - anda para o norte
B - anda para o sul

Seu programa deve imprimir as seguintes mensagens de acordo com essas
movimentações: “Movimento Invalido” se Lagartixa sair do mapa, “Freeze!” se
lagartixa for visto por um guarda e “Like a Ninja...” se ele realizar todos os
movimentos sem ser detectado. Todos os guardas usam um grau 10 de miopia em
cada olho, de forma que eles só vêem Lagartixa se ele ficar bem na frente deles!