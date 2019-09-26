## Questão 1
Severino Bond entrou em uma bela enrascada. Enquanto tomava sua
Catuaba (batida, não mexida), ele foi cercado por vários agentes da organização secreta
Bandidos Armados e Destemidos (B.A.D.). Para ter alguma chance de escapar, Bond tem
que mandar mensagens secretas para o cientista chefe da ABIN, Ç.
A mensagem de Bond será impressa em um jornal como um texto normal contendo
apenas letras (A até Z, a até z). Para que Ç entenda a mensagem, ele utilizará um padrão
ultrasecreto: cada vogal na mensagem aparecerá o mesmo número de vezes. Ç precisa
agora que você faça o programa que leia uma mensagem e determine se ela é uma
mensagem normal do jornal ou uma mensagem secreta de Bond!
A entrada conterá um inteiro T que representa o tamanho (em letras) da mensagem
de teste. Em seguida, virão T letras que representam a mensagem. Seu programa deve
ignorar espaços em branco e quebras de linha, e imprimir “Mensagem secreta!” caso seja
uma mensagem no padrão de codificação esperado, ou “Mensagem normal.” caso
contrário.

## Questão 2
Indiana Jones sempre está a procura de novos artefatos para praticar
apropriação cultural indevida. Normalmente, o trabalho dele envolve explorar labirintos
subterrâneos, onde nem sempre é garantido uma saída! Sua missão é ajudar o Indy com
um programa que, dado um labirinto, verifique se ele consegue escapar ou se ficará para
sempre perdido na escuridão...
Seu programa lerá um labirinto 5x5, representado por um conjunto de caracteres:
* ​ - representa uma parede
I -​ ponto inicial da trajetória de Indiana
F​ - destino final com a saída do labirinto
>​ - caminho para o leste
<​ - caminho para o oeste
^ ​ - caminho para o norte
v ​ - caminho para o sul
Se as setas de caminho levam Indiana Jones do ponto I até o F, seu programa deve
imprimir a mensagem “Escapou em N passos”, onde N é a quantidade de movimentos que
Indiana fez. Se o caminho não levar de I até F, então o programa deve imprimir “Lost in the
Darkness...”.