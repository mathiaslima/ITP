#include<stdio.h>

int main()
{
	char lixo;
	int vidro, papel, plastico, metal, eletronico, organico;
	int i;

	vidro = papel = plastico = metal = eletronico = organico = 0;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &lixo);

		switch(lixo)
		{
			case 'V': vidro++; break;
			case 'L': plastico++; break;
			case 'P': papel++; break;
			case 'M': metal++; break;
			case 'O': organico++; break;
			case 'E': eletronico++; break;
			default: printf("NOOOOoooo....\n");			
		}
	}

	printf("Vidro: %d\n", vidro);
	printf("Plastico: %d\n", plastico);
	printf("Papel: %d\n", papel);
	printf("Organicos: %d\n", organico);
	printf("Metal: %d\n", vidro);
	printf("Eletronicos: %d\n", vidro);

	return 0;
}