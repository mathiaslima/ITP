#include <stdio.h>
#include <string.h>

int conjuntos[10001][61];

void leitura_conjuntos()
{
	int i, j;
	int qtd, elementos, num;

	scanf("%d", &qtd);

	for (i = 0; i < qtd; ++i)
	{
		scanf("%d", &elementos);
		for (j = 0; j < elementos; j++)
		{
			scanf("%d", &num);

			conjuntos[i][num] = 1;
		}

	}

}

/*
2 3 2

conj1: 0 0 1 1 0 0 0 (valores)
	   0 1 2 3 4 5 6 (indices)

19 3 59 ...42

conj2: 0 0 0 1 0 0 0.....1 (valores)
	   0 1 2 3 4 5 6.....59 (indices)	
*/

int intersecao(int conj1, int conj2)
{
	int i, cont = 0;

	for (i = 0; i < 60; ++i)
	{
		if (conjuntos[conj1][i] && conjuntos[conj2][i])
		{
			cont++;
		}
	}

	return cont;
}
int uniao(int conj1, int conj2)
{
	int i, cont = 0;

	for (i = 0; i < 60; ++i)
	{
		if (conjuntos[conj1][i] || conjuntos[conj2][i])
		{
			cont++;
		}
	}

	return cont;
}

int main()
{
	int casos;
	int i, j, op, cod, c1, c2;

	scanf("%d", &casos);

	for (i = 0; i < casos; ++i)
	{
		memset(conjuntos, 0, sizeof(conjuntos));
		//leitura dos conjuntos

		leitura_conjuntos();

		//leitura das operacoes
		scanf("%d", &op);
			//verificar qual operacao e executa-la
			scanf("%d %d %d", &cod, &c1, &c2);

			switch(cod)
			{
				case 1: //intersecao
					printf("%d\n", intersecao(c1, c2));
					break;

				case 2: //uniao
					printf("%d\n", uniao(c1, c2));
					break;
			}
	}

	

	return 0;
}