#include <stdio.h>

void ataque(int* arm, int* esc, int* can, int* mis, char arma)
{
	int dif;

	switch(arma)
	{
		case 'C':
			if (*can > 0) 
			{
				(*can)--;
				if (*esc >= 10) *esc -= 10;
				else
				{
					dif = 10 - *esc;
					*esc = 0;
					*arm -= dif;
				}
			}
			else printf("Sem munição!\n");
			break;
		case 'M':
			if (*mis > 0)
			{
				(*mis)--;
				*arm -= 20;
			}
			else printf("Sem munição!\n");
			break;
	}
}

int main()
{
	int n, e_arm, e_esc, e_can, e_mis, k_arm, k_esc, k_can, k_mis, i;
	char nave, arma;

	//Le a quantidade de ataques
	scanf("%d", &n);

	//Le os atributos da Enterprise
	scanf("%d %d %d %d", &e_arm, &e_esc, &e_can, &e_mis);

	//Le os atributos da Klington
	scanf("%d %d %d %d", &k_arm, &k_esc, &k_can, &k_mis);

	//Executa cada ataque
	for (i = 0; i < n; ++i)
	{
		scanf(" %c", &nave);
		scanf(" %c", &arma);
		if (nave == 'E') ataque(&k_arm, &k_esc, &e_can, &e_mis, arma);	
		else if (nave == 'K') ataque(&e_arm, &e_esc, &k_can, &k_mis, arma);
		
		if (e_arm <= 0)
		{
			printf("Klington vence!\n");
			break;
		}
		else if (k_arm <= 0)
		{
			printf("Enterprise vence!\n");
			break;
		}
	}
	if (e_arm > 0 && k_arm > 0) printf("Empate!\n");

	return 0;
}