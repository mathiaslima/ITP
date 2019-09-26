#include <stdio.h>
#include <stdlib.h>

int main()
{
    int val1, val2, soma;

    printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);

    do
    {
    	printf("Digite o primeiro valor: ");
	    scanf("%d", &val1);
	    printf("Digite o segundo valor: ");
	    scanf("%d", &val2);

    }while(val1 < 0 || val2 < 0);
    
    soma = val1 + val2;

   	printf("Resultado: %d\n", soma);	
    
    

    return 0;
}
