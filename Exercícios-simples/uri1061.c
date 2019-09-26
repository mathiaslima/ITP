#include<stdio.h>
#include<stdlib.h>

int main()
{
	int inday, inhour, inmin, insec, finday, finhour, finmin, finsec, d, h, m, s, totin, totfin, totsec;
	char *dia;

	scanf("%s %d", dia, &inday);
	scanf("%d : %d : %d", &inhour, &inmin, &insec);
	scanf("%s %d", dia, &finday);
	scanf("%d : %d : %d", &finhour, &finmin, &finsec);
	
	totin = insec + inmin * 60 + inhour * 3600 + inday * 86400;
	totfin = finsec + finmin * 60 + finhour * 3600 + finday * 86400;
	totsec = totfin - totin;


	d = totsec / 86400;
	totsec %= 86400;
	h = totsec / 3600;
	totsec %= 3600;
	m = totsec / 60;
	totsec %= 60;
	s = totsec;

	
	printf("%d dia(s)\n", d);
	printf("%d hora(s)\n", h);
	printf("%d minuto(s)\n", m);
	printf("%d segundo(s)\n", s);


	return 0;
}
