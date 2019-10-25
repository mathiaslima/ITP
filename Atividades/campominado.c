#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int campo[10][10] = {{0}}; // Localização das bombas
char exibicao[11][11]; // O que vai ser exibido para o usuário

int checa_bomba (int, int);
void prepara_campo (void);
void prepara_exibicao (void);

int
main (void)
{
	srand(time(NULL));

    prepara_campo();
    prepara_exibicao();

	// Executa o jogo
	do
	{
		system("clear");

		// Imprime o campo para o usuário
        int i, j;
		for (i = 0; i < 11; ++i)
		{
			for (j = 0; j < 11; ++j)
				printf("%c ", exibicao[i][j]);
			printf("\n");
		}
        
        // Lê as coordenadas
        int jog, lin, col;
		printf("Insira o número da linha e da coluna, respectivamente: \n");
		scanf("%d %d", &lin, &col); 

		// Verifica se há bomba
		if (campo[lin][col]) // Se sim, explode e encerra o jogo
		{
			printf("BUUM\n");
			break;
		}
		else
			checa_bomba(lin, col); // Se não, checa quantas bombas existem ao redor

	} while(1);

	return 0;
}

void
prepara_exibicao()
{
    int i, j;
    // Preenche as bordas esquerda e superior da matriz de exibição com suas coordenadas correspondentes 
    exibicao[0][0] = ' ';
    char buffer[1];
    for (i = 1; i < 11; ++i)
    {
        sprintf(buffer, "%d", i-1); // converte o (int) i-1 para (char*) em decimal (%d) e o resultado é armazenado em buffer
        exibicao[i][0] = buffer[0];
    }
    for (j = 1; j < 11; ++j)
    {
        sprintf(buffer, "%d", j-1);
        exibicao[0][j] = buffer[0];
    }
    // Preenche o resto da matriz de exibição
    for (i = 1; i < 11; ++i)
		for (j = 1; j < 11; ++j)
			exibicao[i][j] = '*';
}

void
prepara_campo()
{
    int i, j;
	// Preenche o campo aleatoriamente com 0 e 1 e preenche com '*' o que será exibido para o usuário
	for (i = 0; i < 10; ++i)
		for (j = 0; j < 10; ++j)
			campo[i][j] = rand() % 2;
}

int
checa_bomba (int lin, int col)
{
    lin++;
    col++;
	int i, j, qtd = 0;

	for (i = lin - 1; i <= lin + 1; ++i)
	{
		for (j = col - 1; j <= col + 1; ++j)
		{
			qtd += campo[i][j];
		}
	}

	printf("Há %d bombas ao redor\n", qtd);
	exibicao[lin][col] = qtd + '0'; //Troca o '*' pela quantidade de bombas ao redor
}
