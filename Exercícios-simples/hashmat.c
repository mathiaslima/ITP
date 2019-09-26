#include <stdio.h>

int main()
{
	long long int n1, n2;

	while(scanf("%Ld %Ld", &n1, &n2) != EOF)
	{
		n1 > n2 ? printf("%Ld\n", n1 - n2) : printf("%Ld\n", n2 - n1);
	}
	return 0;
}