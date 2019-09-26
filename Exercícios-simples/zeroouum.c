#include <stdio.h>
int main()
{
	int thor, star, spider;

	printf("Entrem com suas apostas!\n");

	scanf("%d %d %d", &thor, &star, &spider);

	if (thor == star && thor == spider)
	{
		printf("Empate!\n");
	}
	else if (thor != star && thor != spider)
	{
		printf("Thor! God od Thunder!\n");
	}
	else if (star == !thor && star == !spider)
	{
		printf("Starlord! Son od Planets!\n");
	}
	else
	{
		printf("Spiderman! Head of Web!\n");
	}


	return 0;
}