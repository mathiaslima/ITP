#include <stdio.h>

/*Programa conversor para sistema métrico*/

int main(){

	//Definir dados
	int libras;
	float pes;
	double kg, metro;

	//Ler entrada
	printf("Peso em libras: ");
	scanf("%d", &libras);
	printf("Altura em pés: ");
	scanf("%f", &pes);

	//Faz a continha
	kg = libras * 0.45;
	metro = pes * 0.3;

	//Imprime o resultado
	printf("Peso em kg: %.2lf\nAltura em metros: %.2lf\n", kg, metro);

	return 0;
}