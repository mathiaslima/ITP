#include <stdio.h>

int bonus;

float CalculaValor(int atq, int def, int lev)
{
	float val;

	val = (atq + def)/2.0;

	if (lev % 2 == 0)
	{
		val += bonus;
	}
	
	return val;
}


int main()
{
	int i, n, atq1, def1, lev1, atq2, def2, lev2;
	float val1, val2;

	scanf("%d", &n);

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &bonus);

		scanf("%d %d %d", &atq1, &def1, &lev1);
		scanf("%d %d %d", &atq2, &def2, &lev2);

		val1 = CalculaValor(atq1, def1, lev1);
		val2 = CalculaValor(atq2, def2, lev2);
		
		if (val1 == val2) printf("Empate\n");
		else if (val1 > val2) printf("Dabriel\n");
		else printf("Guarte\n");
	}

	return 0;
}