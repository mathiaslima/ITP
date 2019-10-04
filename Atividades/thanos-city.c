#include <stdio.h>
#include <stdlib.h>

int carrega_cidade(int city[100])
{
	int qtd, i;

	scanf("%d", &qtd);

	for (i = 0; i < qtd; ++i)
		scanf("%d", &city[i]);

	return qtd;
}

float funcao_media(int qtd, int cidade[100])
{
	float media, soma = 0;
	int i;

	for (i = 0; i < qtd; i++)
		soma += cidade[i];

	media = soma / qtd;

	return media;
}

void procura_maior(int qtd, int cidade[100], int* mais_alto)
{
	int i;
	for (i = 0; i < qtd; ++i)
		if (cidade[i] > *mais_alto) *mais_alto = cidade[i];
}

void derruba_predio(int j, int cidade[100], int lotes, int* mais_alto, float* media_altura)
{
	int i;

	cidade[j] = 0;

	for (i = 0; i < lotes; ++i)
		if (cidade[i] > *mais_alto) *mais_alto = cidade[i];

	*media_altura = funcao_media(lotes, cidade);
}

void imprime_alturas_ordenadas(int lotes, int cidade[100])
{
	int cont, i, aux;
	//Ordena
	for (cont = 1; cont < lotes; cont++) 
	{
   		for (i = 0; i < lotes - 1; i++) 
   		{
     		if (cidade[i] > cidade[i + 1]) 
     		{
      			aux = cidade[i];
       			cidade[i] = cidade[i + 1];
       			cidade[i + 1] = aux;
     		}
   		}
 	}

 	//Imprime sem os zeros
 	for (i = 0; i < lotes; i++)
 	{
 		if (cidade[i] != 0) printf("%d ", cidade[i]);
 	}
 	printf("\n");
}

int main(){
    int cidade[100] = {0};
    int mais_alto = 0, predios;
    float media_altura;
    int i, j, lotes;

    lotes = carrega_cidade(cidade);

    media_altura = funcao_media(lotes, cidade); 
    procura_maior(lotes, cidade, &mais_alto); 

    printf("Maior altura: %d\n", mais_alto);
    printf("Altura Média: %.2f\n", media_altura);

    i=lotes/3;

    while(i>0){
            j = rand()%lotes + 1;
            if(cidade[j] > 0){
                printf("Derruba prédio no lote %d\n", j);
                derruba_predio(j, cidade, lotes, &mais_alto, &media_altura); 
            }
            else
                i++;
            i--;
    }

    printf("Maior altura: %d\n", mais_alto);
    printf("Altura Média: %.2f\n", media_altura);

    imprime_alturas_ordenadas(lotes, cidade); 

    return 0;
}