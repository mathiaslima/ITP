## Questão 1

O primeiro passo para romper a barreira defensiva de Thanos é descobrir o código que desabilita o escudo projetado em torno da base. Nem as artes mística de Kamar-Taj foram capaz de transpor essa barreira. Para que Dr. Estranho consiga abrir portais e enviar o esquadrão da lapada nas tropas inimigas, é necessário decodificar o padrão de criptografia e desligar a barreira!

Tony Stark, Reed Richards e Bruce Banner estão trabalhando na decodificação da senha e observaram que a chave é passada pelas forças de defesa a partir de mensagens de texto. Analisando o código, eles perceberam o seguinte padrão:

Quando o tamanho da palavra é par, a primeira letra da mensagem faz parte da chave

Quando o tamanho da palavra é impar, a letra do meio da palavra faz parte da chave

Mas no exato momento que Stark ia codificar um programa para decifrar as chaves nas mensagens dos vilões, a base foi invadida! Ele deixou que vocês implementassem a função ​ algoritmoStark ​ do código principal. Essa função deverá:

- Ler os dados dos arquivos stark.txt

- Verificar todas as palavras da mensagem, e montar a chave secreta

OBS​ : A chave tem no máximo 100 caracteres, o que significa que a mensagem do arquivo tem no máximo 100 palavras. Nenhuma palavra individual na mensagem terá mais de 100 letras.

## Questão 2

Enquanto o time de cientistas trabalha na decodificação da mensagem, o Capitão América tenta traçar a melhor estratégia de ataque à base de Thanos. O objetivo é teletransportar os heróis mais durões para um combate direto com os membros da Guarda Negra de Thanos!

O problema tem sido localizar esses membros: Visão tentou fazer leituras de energia e calor, mas o escudo da base impedia qualquer tipo de escaneamento por sensor. Após algumas tentativas, percebeu-se que a medida mais aproximada era dada pelos sentidos do Demolidor, que conseguiu mapear através dos sons no acampamento onde cada um dos poderosos aliados de Thanos estavam localizados!

O Demolidor consegue realizar a detecção através da intensidade de som que os barulhentos asseclas de Thanos fazem. Porém como eles estão em constante movimento, é necessário um auxílio computacional para calcular, no momento exato do ataque, em queposições cada um dos vilões estarão. Para isso, você ajudará construindo a função
daredevilMap​ chamada no programa principal!

Essa função funcionará da seguinte forma:

- Lerá as informações contidas no arquivo daredevil.txt. Esse arquivo possui dois inteiros na primeira linha, contendo as dimensões do mapa que o Demolidor escaneou com seus sentidos (linhas, colunas). Os próximos linhas x colunas números representam a intensidade de som que o Demolidor percebeu

- A função deve verificar cada posição e encontrar um pico de som, ou seja, uma posição em que o valor é maior do que todos os vizinhos!

- Os picos podem estar em qualquer posição, inclusive nas bordas!

- A função irá retornar uma lista de alvos contendo as posições de todos os picos encontrados, bem como a quantidade de posições que deverá ser atacada (por referência).

## Questão 3

Com o código do escudo descoberto e o mapa do Demolidor, Nick Fury deverá dar início à estratégia transmitindo as informações para os principais times (X-Men, Vingadores, Quarteto Fantástico, Deadpool e os miquinhos amestrados), de forma que eles possam repassar as informações a todos e sincronizarem seus ataques.

Para isso, o diretor da SHIELD precisa que você crie um programa que gere um arquivo de texto no seguinte formato:

Senha do escudo:​ SENHA DECODIFICADA

Quantidade de alvos:​ QUANTIDADE ENCONTRADA

Localização de alvo 1: (​ X ​ 1,​ Y​ 1​ )

Localização de alvo 2: (​ X ​ 2​ , Y​ 2​ )

...

Localização de alvo N: (​ X ​ N​ , Y​ N​ )
