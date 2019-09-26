#include <stdio.h>

#define tam 8

int main()
{
	char mapa[tam][tam];
	int i, j, cont = 0, ok = 0;


	//Leitura do mapa
	for(i = 0; i < tam; i++)
    {
        for(j = 0; j < tam; j++)
        {
        	scanf(" %c", &mapa[i][j]);
        }    
    }

    //Percorrer mapa
    for(i = 0; i < tam; i += 2)
    {
        for(j = 0; j < tam; j += 2)
        {
        	cont = 0;
        	//Verifica se tem pirata
        	if (mapa[i][j] == '*') cont++;
        	if (mapa[i][j + 1] == '*') cont++;
        	if (mapa[i + 1][j] == '*') cont++;
        	if (mapa[i + 1][j + 1] == '*') cont++;

        	//Verifica se tem mais de um pirata
        	if (cont >= 2)
        	{
        		ok = 1;
        		break;
        	}
        }
        if (ok) break;    
    }

    if (ok) printf("Muitos Supernovas! Acionar Pacifistas\n");
    else printf("Piratas em Monitoramento\n");


	return 0;
}