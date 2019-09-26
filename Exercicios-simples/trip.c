#include <stdio.h>

int main()
{
	int cidade[10005] = {0};
	int i, j, n, p1, p2, a, ai = 0;

	scanf("%d", &n);
	for (j = 0; j < n; ++j)
	{
		scanf("%d %d %d", &p1, &p2, &a);

		for (i = p1; i < p2; ++i)
		{
			if (a > cidade[i])
			{
				cidade[i] = a;
			}
		}
	}

	for (i = 0; i < 10005; ++i)
	{
		while (cidade[i] != ai)
		{
			printf("%d %d ", i, cidade[i]);
			ai = cidade[i];
		}
		
	}
	printf("\n");
	

	return 0;
}