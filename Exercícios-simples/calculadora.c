#include <stdio.h>
 int main()
 {
 	double n1, n2;
 	char op;

 	printf("Bem vindo, querido!\n");
 	printf("Digite uma expressao (NUM1 OP NUM2)\n");

 	do
 	{
 		scanf("%lf", &n1);
 		scanf(" %c", &op);
 		scanf("%lf", &n2);

 		switch(op)
 		{
 			case '+': 
 				printf("%.2lf\n", n1 + n2); 
 				break;
 			case '-': 
 				printf("%.2lf\n", n1 - n2); 
 				break;
 			case '*': 
 				printf("%.2lf\n", n1 * n2); 
 				break;
 			case '/': 
	 			if (n2 == 0.0)
	 			{
	 				printf("NOOOOOO! #infinitou\n");
	 			}
	 			else
	 			{
	 				printf("%.2lf\n", n1 / n2); 
	 			}
	 			break;
	 		case 'F': break;
	 		default: printf("Operador inválido! Acorde, menino!\n");
	 			
 		}
 	}while(op != 'F');

 	printf("Programa finalizado!\n");

 	return 0;
 }