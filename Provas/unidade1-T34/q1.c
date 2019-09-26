#include <stdio.h>

int main()
{
	char mensagem[5000];
	int apareceu[27];
	char letra;
	int c, tam, ok = 1, i = 0;

	//Le a mensagem
	do
	{
		scanf("%c", &mensagem[i]);
		i++;

	}while(mensagem[i - 1] != '\n');

	//Armazena o tamanho da mensagem
	tam = (i - 1); 


	//Percorre o vetor mensagem e identifica as letras que apareceram
	for (i = 0; i < tam; ++i)
	{
		if (mensagem[i] != ' ')
		{
			if (mensagem[i] >= 97) mensagem[i] -= 32;
			apareceu[mensagem[i] - 65] = 1;
		}
			
		
	}

	//Le a quantidade de chutes
	scanf("%d", &c);

	//Le os chutes dos minino
	for (i = 0; i < c; ++i)
	{
		scanf(" %c", &letra);
		//Checa se a letra existe na mensagem
		if (apareceu[letra - 65]) apareceu[letra - 65] = 0;
			//Se sim, o vetor naquela posição recebe 0
		
	}

	//Checa se o vetor apareceu está todo zerado
	for (i = 0; i < 27; ++i)
	{
		if (apareceu[i]) ok = 0;
	}
	

	//Imprime a saída
	if (ok) printf("Bucho Cheio!\n");
	else printf("Cabeças vão rolar\n");

	return 0;
}