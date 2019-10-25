#include <stdio.h>

int main()
{
	int i, j, perdido, ok = 0, cont = 0;
	char mapa[7][7];
	int startx, starty;

	//Inicializa a matriz com '*' para tirar as bordas
	for (i = 0; i < 7; ++i)
	{
		for (j = 0; j < 7; ++j)
		{
			mapa[i][j] = '*';
		}
	}

	//Le o padrao do mapairinto
	for (i = 1; i <= 5; ++i)
	{
		for (j = 1; j <= 5; ++j)
		{
			scanf(" %c", &mapa[i][j]);
		}
	}

	//Procura o inicio
	for (i = 1; i <= 5; ++i)
	{
		for (j = 1; j <= 5; ++j)
		{
			if (mapa[i][j] == 'I')
			{
				startx = i;
				starty = j;
			}
		}
	}

	printf("Começa em (%d, %d)\n", startx, starty);

	//Verifica os vizinhos
	for (i = startx - 1; i <= startx + 1; i++)
	{
		for (j = starty - 1; j <= starty + 1; j++)
		{
			if (mapa[i][j] != '*' && !(i == startx && j == starty))
			{
				ok = 1;
				break;
			}
		}
		if (ok) break;
	}

	printf("Foi para (%d, %d)\n", i, j);

	cont = 1;
	perdido = 0;

	while (mapa[i][j] != 'F')
	{
		switch(mapa[i][j])
		{
			case '<':
				if (j == 1) perdido = 1;
				else j--;
				break;
			case '>':
				if (j == 5) perdido = 1;
				else j++;
				break;
			case '^':
				if (i == 1) perdido = 1;
				else i--;
				break;
			case 'v':
				if (i == 5) perdido = 1;
				else i++;
				break;
			default: perdido = 1;
		}
		cont++;

		if (perdido) break;

		printf("Agora foi para (%d, %d)\n", i, j);
		printf("Passos %d\n", cont);
	}
	//Imprime o resultado

	if (mapa[i][j] == 'F')
	{
		printf("Escapou em %d passos.\n", cont);
	}
	else
	{
		printf("Lost in the Darkness...\n");
	}
	return 0;
}