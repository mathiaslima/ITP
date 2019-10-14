#include <stdio.h>

int conta_vogais(FILE* arquivo)
{
	int cont = 0;
	char palavra[100];
	while(fscanf(arquivo, " %s", palavra) != EOF)
	{
		switch(palavra[0])
		{
			case 'A':
			case 'a':
			case 'E':
			case 'e':
			case 'I':
			case 'i':
			case 'O':
			case 'o':
			case 'U':
			case 'u':
				cont++;
				break;
		}
	}

	return cont;
}
int main()
{
	FILE* arquivo = fopen("poesia.txt", "r");
	int cont = 0;


	if (arquivo == NULL) 
		printf("Erro na abertura do arquivo!\n");

	else
	{
		cont = conta_vogais(arquivo);
		printf("Existem %d palavras comecando com vogais\n", cont);
		fclose(arquivo);
	}


	return 0;
}