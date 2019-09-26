#include <stdio.h>

int main()
{
	int tam, i, contA, contE, contI, contO, contU;

	contA = contE = contI = contO = contU = 0;

	//Le o mensanho do vetor
	scanf("%d", &tam);

	char mens[tam];

	//Le a mensagem
	for (i = 0; i < tam; ++i)
	{
		scanf(" %c", &mens[i]);
	}

	//Verifica se atende as condicoes
	for (i = 0; i < tam; ++i)
	{
		if (mens[i] == 'a' || mens[i] == 'A')
		{
			contA++;
		}
		else if (mens[i] == 'e' || mens[i] == 'E')
		{
			contE++;
		}
		else if (mens[i] == 'i' || mens[i] == 'I')
		{
			contI++;
		}
		else if (mens[i] == 'o' || mens[i] == 'O')
		{
			contO++;
		}
		else if (mens[i] == 'u' || mens[i] == 'U')
		{
			contU++;
		}

	}



	//Imprime o resultado
	if (contA == contE && contE == contI && contI == contO && contO == contU)
	{
		printf("Mensagem secreta!\n");
	}
	else
	{
		printf("Mensagem normal.\n");
	}

	
	return 0;
}