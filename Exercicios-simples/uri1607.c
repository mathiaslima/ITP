#include <stdio.h>
#include <string.h>

int transforma_string(char* A, char* B)
{
	int i, tam;
	int cont = 0;
	tam = strlen(A);


	for (i = 0; i < tam; ++i)
	{
		while(A[i] != B[i])
		{
			if (A[i] == 'z') A[i] = 'a';
			else A[i] += 1;
			cont++;
		}

	}

	return cont;
}

int main()
{
	char A[10000], B[10000];
	int t, i, qtd;

	scanf("%d", &t);

	for (i = 0; i < t; ++i)
	{
		scanf(" %s %s", A, B);
		qtd = transforma_string(A, B);
		printf("%d\n", qtd);
	}


	return 0;
}