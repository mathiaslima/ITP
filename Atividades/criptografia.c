#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Problema 1024 do URI

void deslocaLetras(char* mens)
//letras minúsculas e maiúsculas devem ser deslocadas 3 posições para a direita, segundo a tabela ASCII
{
	int i = 0;

	while (mens[i] != '\0')
	{
		if ((mens[i] >= 65 && mens[i] <= 90) || (mens[i] >= 97 && mens[i] <= 122))
			mens[i] = mens[i] + 3;

		i++;
	}
}
void inverte(char* mens)
//Inverte a mensagem
{
	int i, j;
	int tam = strlen(mens);
	char aux;

	for (i = 0; i < tam/2; i++)
	{
		aux = mens[(tam - 1) - i];
		mens[(tam - 1) - i] = mens[i];
		mens[i] = aux;
	}
}

void deslocaCarac(char* mens)
//qualquer caractere a partir da metade em diante (truncada) devem ser deslocados uma posição para a esquerda na tabela ASCII
{
	int i, tam = strlen(mens);

	for (i = tam/2; i < tam; ++i)
		mens[i] = mens[i] - 1;

}

int main()
{
	int n, i;
	char mensagem[1002];

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf(" %[^\n]s", mensagem);

		deslocaLetras(mensagem);
		inverte(mensagem);
		deslocaCarac(mensagem);

		printf("%s\n", mensagem);
	}
	return 0;
}