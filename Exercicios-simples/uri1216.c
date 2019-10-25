#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char nome[1000];
	int dist = 0, soma = 0, cont = 0;
	double media;

	while(scanf(" %[^\n]s", nome) != EOF)
	{
		scanf("%d", &dist);
		soma += dist;
		cont++;
	}
	
	media = (double)soma/cont;
	printf("%.1lf\n", media);

	return 0;
}


