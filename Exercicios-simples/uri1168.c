#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int calculaQtd(char* val)
{
	int soma = 0;
	unsigned int i;
	for (i = 0; i < strlen(val); i++)
		switch(val[i])
		{
			case '1':
				soma += 2;
				break;
			case '2':
			case '3':
			case '5':
				soma += 5;
				break;
			case '4':
				soma += 4;
				break;
			case '6':
			case '9':
			case '0':
				soma += 6;
				break;
			case '7':
				soma += 3;
				break;
			case '8':
				soma += 7;
				break;	
		}
	
	return soma;
}

int main()
{
	int n, i, leds;
	char* valor;
	unsigned long long int tam;

	tam = (int)pow(10, 100);

	valor = malloc(tam * sizeof(char));
	
	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf("%s", valor);
		leds = calculaQtd(valor);
		printf("%d leds\n", leds);
	}

	return 0;
}