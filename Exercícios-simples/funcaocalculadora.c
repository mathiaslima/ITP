#include <stdio.h>

int adicao (int a, int b)
{
	int soma;
	soma = a + b;
	printf("O resultado da operacao e %d\n", soma);

	return soma;
}
int subtracao (int a, int b)
{
	int sub;
	sub = a - b;
	printf("O resultado da operacao e %d\n", sub);

	return sub;
}
int multiplicacao (int a, int b)
{
	int mult;
	mult = a * b;
	printf("O resultado da operacao e %d\n", mult);

	return mult;
}
int divisao (int a, int b)
{
	int div;
	if (b == 0)
	{
		printf("Nao e possivel dividir por 0\n");
	}
	else
	{
		div = a / b;
		printf("O resultado da operacao e %d\n", div);

	}
	return div;
	
}

int main()
{
	int op, num1, num2, resultado;

	printf("Digite o primeiro numero: \n");
	scanf("%d", &num1);
	printf("Digite o segundo numero: \n");
	scanf("%d", &num2);
	printf("Digite a operacao desejada: \n");
	scanf("%d", &op);

	switch(op)
	{
		case 1:
			resultado = adicao(num1, num2);
			break;

		case 2:
			resultado = subtracao(num1, num2);
			break;

		case 3:
			resultado = multiplicacao(num1, num2);
			break;

		case 4:
			resultado = divisao(num1, num2);
			break;

		default: printf("Operacao invalida\n");
	}


	return 0;
}