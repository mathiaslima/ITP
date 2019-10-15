#include <stdio.h>

int main()
{
	int h1, h2, m1, m2, mf, ok = 1;

	scanf("%d %d %d %d", &h1, &m1, &h2, &m2); //Le hora inicial, minuto inicial, hora final e minuto final

	while (ok)
	{
		if (h1 < h2 || (h1 == h2 && m1 <= m2)) //Mesmo dia
			mf = (h2 * 60 + m2) - (h1 * 60 + m1);
		else if (h1 == h2 && m1 > m2) //Proximo dia
			mf = 1440 - (m1 - m2);
		else if (h1 > h2) //Proximo dia
		{
			if (m1 > m2) mf = (24 - h1 + h2 - 1) * 60 + (60 - m1 + m2);
			else mf = (24 - h1 + h2) * 60 + (m2 - m1);
		}

		printf("%d\n", mf);

		scanf("%d %d %d %d", &h1, &m1, &h2, &m2); //Le hora inicial, minuto inicial, hora final e minuto final
		if (h1 == 0 && h2 == 0 && m1 == 0 && m2 == 0) ok = 0; //checa a condicao de parada
	}

	return 0;
	
}