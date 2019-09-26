#include <stdio.h>

#define TAM 3

int main()
{
	//Definir matrizes
	int mat1[TAM][TAM] = {{0}};
	int mat2[TAM][TAM];
	int resultado[TAM][TAM];
	int i, j;

	//Leitura
	printf("Digite a primeira matriz\n");

	for (i = 0; i < TAM; ++i)
	{
		for (j = 0; j < TAM; ++j)
		{
			scanf("%d", &mat1[i][j]);
		}
	}

	printf("Digite a segunda matriz\n");

	for (i = 0; i < TAM; ++i)
	{
		for (j = 0; j < TAM; ++j)
		{
			scanf("%d", &mat2[i][j]);
		}
	}

	//Operacao soma de matrizes
	for (i = 0; i < TAM; ++i)
	{
		for (j = 0; j < TAM; ++j)
		{
			resultado[i][j] = mat1[i][j] + mat2[i][j];
		}
	}

	//Escrita
	for (i = 0; i < TAM; ++i)
	{
		for (j = 0; j < TAM; ++j)
		{
			printf("%d ", resultado[i][j]);
		}
		printf("\n");
	}

	return 0;
}