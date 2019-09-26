#include <stdio.h>

int main()
{
	int n, i, l, mult2, mult3, mult4, mult5;

	scanf("%d", &n);

	mult2 = mult3 = mult4 = mult5 = 0;

	for (i = 0; i < n; ++i)
	{
		scanf("%d", &l);
		if (l % 2 == 0)
		{
			mult2 += 1;
		}
		if (l % 3 == 0)
		{
			mult3 += 1;
		}
		if (l % 4 == 0)
		{
			mult4 += 1;
		}
		if (l % 5 == 0)
		{
			mult5 += 1;
		}
	}

	printf("%d Multiplo(s) de 2\n", mult2);
	printf("%d Multiplo(s) de 3\n", mult3);
	printf("%d Multiplo(s) de 4\n", mult4);
	printf("%d Multiplo(s) de 5\n", mult5);


	return 0;
}