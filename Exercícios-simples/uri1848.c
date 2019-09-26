#include <stdio.h>



int main()
{
	int i, cont = 0, soma = 0;
	char entrada[3], caw[3];

	while(cont < 3)
	{
		scanf("%s", entrada);

		if (entrada[0] == '-' && entrada[1] == '-')
		{
			if (entrada[2] == '-')
			{
				soma += 0;
			}
			else if (entrada[2] == '*')
			{
				soma += 1;
			}
		}
		else if (entrada[0] == '-' && entrada[1] == '*')
		{
			if (entrada[2] == '-')
			{
				soma += 2;
			}
			else if (entrada[2] == '*')
			{
				soma += 3;
			}
		}
		else if (entrada[0] == '*' && entrada[1] == '-')
		{
			if (entrada[2] == '-')
			{
				soma += 4;
			}
			else if (entrada[2] == '*')
			{
				soma += 5;
			}
		}
		else if (entrada[0] == '*' && entrada[1] == '*')
		{
			if (entrada[2] == '-')
			{
				soma += 6;
			}
			else if (entrada[2] == '*')
			{
				soma += 7;
			}
		}
		else
		{
			scanf("%s", caw);
			printf("%d\n", soma);
			cont++;
			soma = 0;
		}

	
	}

	return 0;
}