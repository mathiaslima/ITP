#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int campo[12][12] = {{0}}; //Localização das bombas
char exibicao[10][10]; //O que vai ser exibido para o usuário

int checa_bomba(int lin, int col)
{
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

int main()
{
	
	int i, j, jog, lin, col;
	srand(time(NULL));
	
	//Preenche o campo aleatoriamente com 0 e 1 e preenche com '*' o que será exibido para o usuário
	for (i = 1; i <= 10; ++i)
	{
		for (j = 1; j <= 10; ++j)
		{
			campo[i][j] = rand() % 2;
			exibicao[i][j] = '*';
		}
	}

	
	//Executa o jogo
	do
	{
		system("clear");

		//Imprime o campo para o usuário
		for (i = 1; i <= 10; ++i)
		{
			for (j = 1; j <= 10; ++j)
			{
				printf("%c ", exibicao[i][j]);
			}
			printf("\n");
		}

		printf("Insira o número da linha e da coluna, respectivamente: \n");
		scanf("%d %d", &lin, &col); //Lê as coordenadas

		//Verifica se há bomba
		if (campo[lin][col]) //Se sim, explode e encerra o jogo
		{
			printf("BUUM\n");
			break;
		}
		else
		{
			checa_bomba(lin, col); //Se não, checa quantas bombas existem ao redor
		}

	}while(1);



	return 0;
}

