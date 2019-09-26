## Questão 1
Enquanto aprendia a escrever, o Predador teve muitas
dificuldades em aprender os símbolos humanos e como organizá-los em palavras.
Enquanto arrancava uma espinha dorsal, crânios e outros tipos de troféus, ele
decidiu analisar o que acontecia, e fazer um programa que o ajudasse a consertar
os seus problemas gramaticais.
O que ele percebeu é que normalmente ele confudia uma quantidade de
letras, e a frase ficava confusa porque ele as trocava. Por exemplo, quando ele
queria escrever “Perigo”, ele trocou P com U, E com M e R com B, e escrever
“Umbigo”. Foi uma semana movimentada para o Predador....
Escreva um programa que receberá um inteiro L representando quantas
letras o Predador confunde, seguido de L pares de letras com as duas letras que o
Predados troca ao escrever a mensagem. Após isso seu programa receberá uma
linha contendo a mensagem (apenas letras maiúsculas e espaços em branco) do
Predador, e deve imprimir a versão traduzida da mensagem. O Predador só
confunde as letras que forem informadas no programa, as que não forem ele
escreve normalmente.

## Questão 2
No mundo de One Piece, a Marinha e o Governo Mundial
sempre estão em dificuldades para monitorar os piratas mais fortes da Grand Line.
Para facilitar a tarefa, eles dividem as regiões de monitoramento em grandes maps
quadrados 8x8. Para cada área, eles colocam equipamentos para monitorar
pequenas partes da região. Cada equipamento cobre uma área 2x2 do mapa. Para
a Marinha, desde que não exista mais de um pirata na categoria Supernova em umaregião dessas, não há motivos para enviar as frotas ao combate, sendo necessário
apenas monitorar seus movimentos.
Faça um programa para verificar se a Marinha vai precisar mandar suas
frotas de combate ou não! Faça um programa que receberá um mapa no seguinte
formato:
- -​ - *​ ​ * -​ - -
- *​ ​ - -​ ​ - -​ ​ - -
* -​ ​ - -​ ​ - *​ ​ - -
- -​ ​ * -​ ​ - -​ ​ - -
- *​ ​ - -​ ​ * -​ ​ - -
- -​ ​ - -​ ​ - -​ ​ - -
- -​ ​ - -​ ​ - -​ - -
- -​ ​ - -​ ​ - -​ - -
Onde os traços ​ (-) ​ representam águas despovoadas ou com piratas normais,
e os asteriscos ​ (\*) representam piratas Supernova. Seu programa deve verificar se,
dentro desse mapa 8x8, existe algum bloco de terreno com mais de um supernova.
Cada bloco é uma parte 2x2 do mapa, e não existem blocos formados pela
interseção de outros dois.