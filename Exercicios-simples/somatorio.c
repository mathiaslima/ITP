#include<stdio.h>

int main()
{
	int numero, soma;

	soma = 0;

	scanf("%d", &numero);

	while(numero > 0)
	{
		soma += numero;
		scanf("%d", &numero);
	}

	printf("Soma deu (ruim): %d\n", soma);

	return 0;
}