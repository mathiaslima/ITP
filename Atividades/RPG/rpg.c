#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void conta_personagens()
{
	FILE* arq = fopen("dados.txt", "r");
	int qtd = 0;
	char linha[1000], nome[100];

	if (arq == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		while(fgets(linha, 1000, arq) != NULL)
		{
			sscanf(linha, "%s", nome);
			qtd++;
		}

		qtd -= 2;
	}

	printf("Quantidade de personagens cadastrados: %d\n", qtd);
}

void mais_poderoso()
{
	FILE* arq = fopen("dados.txt", "r");
	char nome[100], classe[100];
	char linha[1000];
	int str, dex, wis, inte, con, cha;
	int soma = 0;


	if (arq == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		while(fgets(linha, 1000, arq) != NULL)
		{
			sscanf(linha, "%s", nome);
			if (nome != "Personagem")
			{
				sscanf(linha, "%s %d %d %d %d %d %d", classe )
			}
		}
	}

}

int main()
{
	conta_personagens();
	mais_poderoso();

	
	return 0;
}