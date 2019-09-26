#include <stdio.h>

#define AZUL 2
#define GOL 3

int main()
{
	int m1[AZUL][GOL], m2[GOL][AZUL];
	int res[AZUL][AZUL];
	int i, j, k;

	//Leitura
	printf("Digimon 1\n");

	for (i = 0; i < AZUL; ++i)
	{
		for (j = 0; j < GOL; ++j)
		{
			scanf("%d", &m1[i][j]);
		}
	}

	printf("Cowboy Bebop\n");

	for (i = 0; i < GOL; ++i)
	{
		for (j = 0; j < AZUL; ++j)
		{
			scanf("%d", &m2[i][j]);
		}
	}

	//Operacao
	for (i = 0; i < AZUL; ++i)
	{
		for (j = 0; j < AZUL; ++j)
		{
			res[i][j] = 0;
			for (k = 0; k < GOL; ++k)
			{
				res[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}

	//Impressao

	printf("Shurato\n");

	for (i = 0; i < AZUL; ++i)
	{
		for (j = 0; j < AZUL; ++j)
		{
			printf("%4d ", res[i][j]);
		}
		printf("\n");
	}

	return 0;
}