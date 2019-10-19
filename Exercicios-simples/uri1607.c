#include <stdio.h>
#include <string.h>

int transforma_string(char* A, char* B)
{
	int i, tam;
	int qtd = 0;
	tam = strlen(A);


	for (i = 0; i < tam; ++i)
	{
		if (A[i] < B[i])
		{
			qtd += B[i] - A[i];
			A[i] += qtd;
		}
		else if (B[i] < A[i])
		{
			qtd += B[i] - A[i] + 26;
			A[i] += qtd;
		}
	}

	return qtd;
}

int main()
{
	char A[10002], B[10002];
	int t, i, qtd;

	scanf("%d", &t);

	for (i = 0; i < t; ++i)
	{
		scanf(" %s %s", A, B); //Le as duas strings
		qtd = transforma_string(A, B); //Faz a transformacao e retorna a quantidade de operacoes
		printf("%d\n", qtd);
	}

	return 0;
}