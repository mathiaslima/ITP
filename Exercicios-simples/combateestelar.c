#include <stdio.h>

void ataque(int* arm, int* esc, int* can, int* mis, char arma)
{

	switch(arma)
	{
		case 'C':
			if (*can > 0) 
			{
				(*can)--;
				if (*esc > 0) *esc -= 10;
				else
				{
					*arm += *esc;
					*arm -= 10;
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
	}
	if (e_arm <= 0 && k_arm > 0) printf("Klington vence!\n");
	else if (k_arm <= 0 && e_arm > 0) printf("Enterprise vence!\n");
	else printf("Empate!\n");

	return 0;
}
