#include <stdio.h>
#include <stdlib.h>

int	tamanhoString(char* string)
{
	int i;

	i = 0;

	while(string[i] != '\0')
		i++;

	return i;
}

char* concatenaString(char* s1, char* s2)
{
	int i, j;
	char* aux;

	aux = malloc(sizeof(char)*tamanhoString(s1)*tamanhoString(s2) + 1);

	for(i = 0; i < tamanhoString(s1); i++)
		aux[i] = s1[i];

	for(j = 0; j < tamanhoString(s2); j++, i++)
		aux[i] = s2[j];

	aux[i] = '\0';

	return aux;
}
void converteMaiusc(char* s1)
{
	int i;

	for(i = 0; i < tamanhoString(s1); i++)
		if(s1[i] >= 97 && s1[i] <= 122)
			s1[i] -= 32;
}

int comparaString(char* s1, char* s2)
{
	int tam1, tam2;

	tam1 = tamanhoString(s1);
	tam2 = tamanhoString(s2);

	//Jeito certo: copiando duas auxs
	// copiaString(s1, aux1);
	// copiaString(s2, aux2);

	converteMaiusc(s1);
	converteMaiusc(s2);

	if (tam1 < tam2)
	{
		for(i = 0; i < tam1; i++)
		{
			if(s1[i] > s2[i])
				return -1;
			else if(s1[i] > s2[i])
				return 1;
		}

		return -1;
	}
	else if (tam1 > tam2)
	{
		for(i = 0; i < tam2; i++)
		{
			if(s1[i] > s2[i])
				return -1;
			else if(s1[i] > s2[i])
				return 1;
		}

		return 1;
	}
	else
	{
		for(i = 0; i < tam2; i++)
		{
			if(s1[i] > s2[i])
				return -1;
			else if(s1[i] > s2[i])
				return 1;
		}

		return 0;
	}
}

int main()
{
	char palavra[100], palavra2[100];
	char *grandao;
	int tam, ok;

	printf("Lendo a primeira string:\n");
	//Le ate espaço em branco
	// scanf("%s", palavra);

	//Le ate quebra de linha
	scanf("%[^\n]s", palavra);

	//Le a linha ou a quantidade que vc mandar (/n incluso)
	// fgets(palavra, 100, stdin);

	tam = tamanhoString(palavra); //strlen

	printf("%s tem %d letras\n", palavra, tam);

	printf("Lendo a segunda string:\n");

	scanf(" %[^\n]s", palavra2);

	printf("Concatenando as duas strings...\n");

	grandao = concatenaString(palavra, palavra2); //strcat


	printf("Juntando fica: %s\n", grandao);

	printf("Comparando as palavras...\n"); 

	ok = comparaString(palavra, palavra2); //strcompar

	if (ok == 0) printf("Sao iguais\n");
	else if (ok > 0) printf("%s eh maior que %s\n", palavra2, palavra);
	else printf("%s eh maior que %s\n", palavra, palavra2);

	
	return 0;
}