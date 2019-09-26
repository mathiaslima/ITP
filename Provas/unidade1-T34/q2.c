#include <stdio.h>

#define tam 6

int main()
{
	char mapa[tam+2][tam+2];
	int i, j, n, startx, starty, x, y, invalido = 0;

	//Inicializaçao do mapa
	for (i = 0; i < tam+2; ++i)
	{
		for (j = 0; j < tam+2; ++j)
		{
			mapa[i][j] = 'o';
		}
	}

	//Leitura do mapa
	for(i = 1; i <= tam; i++)
    {
        for(j = 1; j <= tam; j++)
        {
        	scanf(" %c", &mapa[i][j]);
        }    
    }

    //Le a quantidade de movimentos
    scanf("%d", &n);
    char mov[n];

    //Le as coordenadas de inicio
    scanf("%d %d", &startx, &starty);


	//Le os movimentos
	for (i = 0; i < n; ++i)
	{
		scanf(" %c", &mov[i]);
	}

	//Executa os movimentos
	x = startx;
	y = starty;

	for (i = 0; i < n; ++i)
	{
		switch(mov[i])
		{
			case 'D':
				if (y == 6) invalido = 1;
				else y++;
				break;
			case 'E':
				if (y == 1) invalido = 1;
				else y--;
				break;
			case 'C':
				if (x == 1) invalido = 1;
        		else x--;
        		break;
        	case 'B':
        		if (x == 6) invalido = 1;
        		else x++;
        		break;

		}

		if(invalido) 
		{
			printf("Movimento Invalido\n");
			break;
		}
	}
	

	if (invalido == 0)
	{
		//Checa se tem um guarda olhando
		if (mapa[x - 1][y] == 'v' || mapa[x][y - 1] == '>' || mapa[x][y + 1] == '<' || mapa[x + 1][y] == '^')	
			{
				printf("Freeze!\n");
			}
		else printf("Like a ninja...\n");
	}
	
	
	return 0;
	
}