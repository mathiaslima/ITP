#include <stdio.h>

int main()
{
	int m, n, i, j, soma = 0, maior_soma = 0, indice_maior = 0;

	printf("Digite o número de colunas e linhas da matriz:\n");

	scanf("%d %d", &m, &n);

	int bin[m][n];

	printf("Digite os valores da matriz binária (somente 0 e 1):\n");

	for (i = 0; i < m; ++i)
	{
		for (j = 0; j < n; ++j)
		{
			scanf("%d", &bin[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		soma = 0;
		for (j = 0; j < n; ++j)
		{
			soma += bin[i][j];
		}

		if (soma > maior_soma)
		{
			maior_soma = soma;
			indice_maior = i;
		}
	}

	printf("Linha com maior quantidade de 1 (%d): %d\n", maior_soma, indice_maior + 1);
	
	soma = maior_soma = indice_maior = 0;

	for (i = 0; i < n; i++)
	{
		soma = 0;
		for (j = 0; j < m; ++j)
		{
			soma += bin[j][i];
		}

		if (soma > maior_soma)
		{
			maior_soma = soma;
			indice_maior = i;

		}
	}

	printf("Coluna com maior quantidade de 1 (%d): %d\n", maior_soma, indice_maior + 1);

	return 0;
}