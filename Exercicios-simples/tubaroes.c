#include <stdio.h>

int main()
{
	//O que eu vou definir/salvar/armazenar
	/*
		- Um inteiro para guardar quantidade de fotos
		- Um inteiro para fazer a leitura de cada foto
		- Um vetor para marcar quais tubaroes apareceram
		- Um inteiro para contar quantas especies diferentes
	*/
	int quantidade, foto, i, especies = 0;
	int apareceu[15] = {0};


	//Sequencia de passos logicos 
	/*
		- Lendo as entradas
		---> Le a quantidade de fotos
		---> Le cada foto
		- Para cada foto que eu ler:
		---> Testar se o tubarao da foto ja apareceu ou nao
		----> Se ele nao apareceu:
		------> Conta mais uma especie diferente
		------> Diz que essa especie da foto apareceu
		

	*/
	scanf("%d", &quantidade);

	for (i = 0; i < quantidade; ++i)
	{
		scanf("%d", &foto);

		if (apareceu[foto] == 0)
		{
			especies++;
			apareceu[foto] = 1;
		}
	}

	//Qual a minha saida
	/*
	- Imprime a saida do programa
		---> Quantas especies diferentes teve
		---> A lista das especies
	*/
	printf("%d espécies diferentes.\n", especies);

	for (i = 1; i <= 14; ++i)
	{
		if (apareceu[i] == 1)
		{
			switch(i)
			{
				case 1: printf("Tubarão Branco\n"); break;
				case 2: printf("Tubarão Martelo\n"); break;
				case 3: printf("Tubarão Touro\n"); break;
				case 4: printf("Tubarão Baleia\n"); break;
				case 5: printf("Tubarão Lixa\n"); break;
				case 6: printf("Tubarão Frade\n"); break;
				case 7: printf("Tubarão Tigre\n"); break;
				case 8: printf("Tubarão Cabeça-chata\n"); break;
				case 9: printf("Tubarão Serra\n"); break;
				case 10: printf("Tubarão de Pontas Negras\n"); break;
				case 11: printf("Tubarão Raposa\n"); break;
				case 12: printf("Tubarão Mako\n"); break;
				case 13: printf("Tubarão Bruxa\n"); break;
				case 14: printf("Tubarão Azul\n"); break;
			}
		}
	}

	return 0;
}