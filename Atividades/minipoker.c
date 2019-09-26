#include <stdio.h>

int mao[5];

void ordena()
{
	int i, j, troca = 1, aux;

	
	while (troca == 1)
	{
		troca = 0;
		for (i = 0; i < 4; ++i)
		{
			if (mao[i] > mao[i + 1])
			{
				troca = 1;
				aux = mao[i];
				mao[i] = mao[i + 1];
				mao[i + 1] = aux;
			}
			
		}
	}

}

int calcula_pontos()
{
	int pontos, i, cont = 0;
	
	//Caso 1
	for (i = 1; i <= 4; ++i)
	{
		if (mao[i] == mao[i - 1] + 1)
		{
			cont++;
		}
	}
	if (cont == 4)
	{
		pontos = mao[0] + 200;
	}

	//Caso 2
	else if (mao[0] == mao[3] || mao[1] == mao[4])
	{
		pontos = mao[1] + 180;
	}

	//Caso 3
	else if ((mao[0] == mao[2] && mao[3] == mao[4]) || (mao[2] == mao[4] && mao[0] == mao[1]))
	{
		pontos = mao[2] + 160;
	}

	//Caso 4
	else if (mao[0] == mao[2] || mao[1] == mao[3] || mao[2] == mao[4])
	{
		pontos = mao[2] + 140;
	}

	//Caso 5
	else if (mao[0] == mao[1] && mao[2] == mao[3])
	{
		if (mao[0] > mao[2])
		{
			pontos = (3 * mao[0]) + (2 * mao[2]) + 20;
		}
		else
		{
			pontos = (3 * mao[2]) + (2 * mao[0]) + 20;
		}
	}
	else if (mao[0] == mao[1] && mao[3] == mao[4])
	{
		if (mao[0] > mao[3])
		{
			pontos = (3 * mao[0]) + (2 * mao[3]) + 20;
		}
		else
		{
			pontos = (3 * mao[3]) + (2 * mao[0]) + 20;
		}
	}
	else if (mao[1] == mao[2] && mao[3] == mao[4])
	{
		if (mao[1] > mao[3])
		{
			pontos = (3 * mao[1]) + (2 * mao[3]) + 20;
		}
		else
		{
			pontos = (3 * mao[3]) + (2 * mao[1]) + 20;
		}
	}

	//Caso 6
	else if (mao[0] == mao[1] || mao[1] == mao[2])
	{
		pontos = mao[1];
	}
	else if (mao[2] == mao[3] || mao[3] == mao[4])
	{
		pontos = mao[3];
	}

	//Caso 7
	else
	{
		pontos = 0;
	}

	return pontos;
}

int main()
{
	int n, i, j, pontos;

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		for(j = 0; j < 5; j++)
		{
			scanf("%d", &mao[j]);
		}

		ordena();
		pontos = calcula_pontos();

		printf("Teste %d\n", i + 1);
		printf("%d\n\n", pontos);
	}


	return 0;
}