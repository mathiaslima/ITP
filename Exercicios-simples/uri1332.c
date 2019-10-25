#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int checa_palavra(char* p)
{
	if (strlen(p) == 3)
	{
		if((p[0] == 'o' && p[1] == 'n') || (p[0] == 'o' && p[2] == 'e') || (p[1] == 'n' && p[2] == 'e'))
			return 1;
		else
			return 2;
	}
	else if(strlen(p) == 5)
		return 3;
}

int main()
{
	int n, i, valor;
	scanf("%d", &n);
	char palavra[7];

	for (i = 0; i < n; ++i)
	{
		scanf("%s", palavra);
		valor = checa_palavra(palavra);
		printf("%d\n", valor);
	}
	return 0;
}