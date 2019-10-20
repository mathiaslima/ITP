#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main()
{

	FILE* arq = fopen("dados.txt", "r");

	char nome[100][100], classe[100][100];
	char linha[1000], tail[100];
	int str[100], dex[100], wis[100], inte[100], con[100], cha[100];
	int i = 0, j, k, qtd;
	int soma, maior_soma = 0;
	int mais_poderoso, totwis = 0;
	int mstr, mdex, mwis, minte, mcon, mcha;
	mstr = mdex = mwis = minte = mcon = mcha = 0;

	//Testa se a abertura deu certo
	if (arq == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		//Ignora as duas primeiras linhas
		fgets(linha, 1000, arq);
		fgets(linha, 1000, arq);

		while(fgets(linha, 1000, arq) != NULL)
		{
			//Le o nome do personagem
			sscanf(linha, " %s", nome[i]); 

			//Pegando o resto das informacoes da linha
			for(k = strlen(nome[i]), j = 0; linha[k] != '\0'; k++, j++) 
                tail[j] = linha[k];

            tail[j] = '\0';

            //Guardando as informacoes de classe e atributos
			sscanf(tail, " %s %d %d %d %d %d %d", classe[i], &str[i], &dex[i], &wis[i], &inte[i], &con[i], &cha[i]);
			i++;
		}

		qtd = i;

		printf("----------------- D&D DO KAYO ----------------\n");

		printf("Total de personagens cadastrados: %d\n\n", qtd);

		//Verifica qual o mais poderoso
		for (i = 0; i < qtd; ++i)
		{
			soma = str[i] + dex[i] + wis[i] + inte[i] + con[i] + cha[i];
			if (soma > maior_soma) 
			{
				maior_soma = soma;
				mais_poderoso = i;
			}	
		}
		printf("Personagem mais poderoso: %s\nTotal dos seus atributos: %d\n\n", nome[mais_poderoso], maior_soma);

		//Calcula o total de sabedoria
		for (i = 0; i < qtd; ++i)
		{
			totwis += wis[i];
		}
		printf("Total de sabedoria de todos os personagens: %d\n\n", totwis);

		printf(">> TOP ATRIBUTOS <<\n");

		printf(">> Força:\n");
		for (i = 0; i < qtd; ++i)
			if (str[i] > mstr) mstr = str[i];
		for (i = 0; i < qtd; ++i)
			if (str[i] == mstr) printf("%s - %d\n\n", nome[i], mstr);

		printf(">> Destreza:\n");
		for (i = 0; i < qtd; ++i)
			if (dex[i] > mdex) mdex = dex[i];
		for (i = 0; i < qtd; ++i)
			if (dex[i] == mdex) printf("%s - %d\n\n", nome[i], mdex);

		printf(">> Sabedoria:\n");
		for (i = 0; i < qtd; ++i)
			if (wis[i] > mwis) mwis = wis[i];
		for (i = 0; i < qtd; ++i)
			if (wis[i] == mwis) printf("%s - %d\n\n", nome[i], mwis);

		printf(">> Inteligencia:\n");
		for (i = 0; i < qtd; ++i)
			if (inte[i] > minte) minte = inte[i];
		for (i = 0; i < qtd; ++i)
			if (inte[i] == minte) printf("%s - %d\n\n", nome[i], minte);

		printf(">> Constituiçao:\n");
		for (i = 0; i < qtd; ++i)
			if (con[i] > mcon) mcon = con[i];
		for (i = 0; i < qtd; ++i)
			if (con[i] == mcon) printf("%s - %d\n\n", nome[i], mcon); 

		printf(">> Carisma:\n");
		for (i = 0; i < qtd; ++i)
			if (cha[i] > mcha) mcha = cha[i];
		for (i = 0; i < qtd; ++i)
			if (cha[i] == mcha) printf("%s - %d\n\n", nome[i], mcha);

		fclose(arq);
	}

	
	return 0;
}