#include <stdlib.h>
#include <stdio.h>

#define TAM 7
#define LIN 5
#define COL 5

int main()
{
	// int* vetor;
	// int** matriz;
	int vetor[10] = {0};
	int* matriz;
	printf("Comecando o programa\n");
	int i, j;

	// vetor = (int*) calloc(TAM, sizeof(int));


	// matriz = (int**) malloc(LIN * sizeof(int*));

	// for (i = 0; i < LIN; i++)
	// 	matriz[i] = (int*) malloc(COL * sizeof(int));


	matriz = (int*) malloc(LIN * COL * sizeof(int));

	printf("Endereco de memoria apontada por vetor: %p\n", matriz);
	printf("Endereco onde o ponteiro esta: %p\n", &matriz);

	printf("Valores do matriz antes da leitura: \n");

	//Antes da leitura
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
			printf("%d ", matriz[i * LIN + j]);
		printf("\n");
	}

	printf("\n");

	printf("Lendo os dados:\n");

	//A leitura
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
			scanf("%d", &matriz[i * LIN + j]);
	}

	printf("Valores depois da leitura:\n");

	//Depois da leitura
	for(i = 0; i < LIN; i++)
	{
		for(j = 0; j < COL; j++)
			printf("%d ", matriz[i * LIN + j]);
		printf("\n");
	}

	
	return 0;
}