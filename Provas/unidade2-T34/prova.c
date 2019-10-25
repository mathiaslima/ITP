#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void juntando_pecas(char* mens)
{
	FILE* arq = fopen("pistas1.txt", "r");

	char chave;
	char palavra[52];
	int n, i;

	//Inicializando a string
	memset(mens, '\0', 1000*sizeof(char));

	if(arq == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		//Le o inteiro que representa a letra
		fscanf(arq, "%d", &n);

		//Converte pra letra
		chave = 97 + n; 

		//Le cada palavra ate o final do arquivo
		while(fscanf(arq, "%s", palavra) != EOF)
		{
			//Checa se começa com a letra (maiuscula ou minuscula)
			if (palavra[0] == chave || palavra[0] == (chave - 23))
				{
					//Adiciona na string mens
					strcat(mens, palavra);
					strcat(mens, " "); 
				}	
		}

		fclose(arq);
	}
}

int* decodifica(char* mens, int* tam)
{
	int i, j = 0, tam_m;
	int* codes;

	tam_m = strlen(mens);

	codes = calloc(tam_m, sizeof(int));


	for (i = 0; i <= tam_m; i+=2)
	{
		if(mens[i] >= 65 && mens[i] <= 90) 
		{
			codes[j] = mens[i] - 65;
			j++;
		}
		else if (mens[i] >= 97 && mens[i] <= 122)
		{
			codes[j] = mens[i] - 97;
			j++;
		}
	}

	*tam = j;

	return codes;
}

void resposta_enigma(int* codes, int tam, char* mens)
{
	FILE* arq = fopen("riddle.txt", "w");

	if(arq == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		int i;

		fprintf(arq, "Resposta do enigma\n");
		fprintf(arq, "Mensagem: %s\n", mens);
		fprintf(arq, "Codigo do cofre: ");

		for (i = 0; i < tam; ++i)
			fprintf(arq, "%d ", codes[i]);

		fprintf(arq, "\n");

		fclose(arq);
	}
}

int main(){
    char mensagem[1000];
    int* codes;
    int i, tam;

    juntando_pecas(mensagem);

    codes = decodifica(mensagem, &tam);

    resposta_enigma(codes, tam, mensagem);

    return 0;
}
