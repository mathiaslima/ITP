#include <stdio.h>

void classifica (float imc)
{
	if (imc < 18.5)
	{
		printf("Abaixo do peso\n");
	}
	else if (imc >= 18.5 && imc <= 25)
	{
		printf("Peso normal\n");
	}
	else if (imc > 25 && imc <= 30)
	{
		printf("Acima do peso\n");
	}
	else
	{
		printf("Obeso\n");
	}
}

int main()
{
	float altura, peso, imc;

	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	printf("Digite seu peso: \n");
	scanf("%f", &peso);

	imc = peso / (altura * altura);

	classifica(imc);


	return 0;
}