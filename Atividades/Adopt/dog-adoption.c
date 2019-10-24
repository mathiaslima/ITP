#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*BANCO DE DADOS DE ADOCÕES DE CACHORROS
	Informações: Nome, sexo (M, F), porte (P, M, G) idade (adulto ou filhote)
	Formato: NOME - SEXO PORTE IDADE


	Funções: 
	- Cadastra animal
	- Remove animal (registra adoção)
	- Imprime um relatório com os cachorros por filtro (sexo, porte ou idade)

*/

void cadastra_dog()
{
	system("cls || clear");

	FILE* arq = fopen("dog-data.txt", "r");
	FILE* novo = fopen("dog-tmp.txt", "w");

	char nome[100], aux[100], tail[100], linha[1000];
	char sexo, porte, idade;
	char tmp_s, tmp_p, tmp_i;
	int i, j, ins = 0, res;

	//Verifica se a abertura deu certo
	if(arq == NULL || novo == NULL) printf("Erro na abertura do arquivo!\n");
	else
	{
		//Le os dados do usuario
		printf("Digite as informações necessárias\n");
		printf("Nome do cãozinho: \n");
		scanf(" %[^\n]s", nome);
		printf("Sexo (use M para macho e F para fêmea): \n");
		do
		{
			scanf(" %c", &sexo);
			if (sexo != 'M' && sexo != 'F') 
				printf("Valor inválido!\n");
		} while(sexo != 'M' && sexo != 'F');
		printf("Porte (P para pequeno, M para médio e G para grande): \n");
		do
		{
			scanf(" %c", &porte);
			if (porte != 'P' && porte != 'M' && porte != 'G') 
				printf("Valor inválido!\n");
		} while(porte != 'P' && porte != 'M' && porte != 'G');
		printf("Faixa etária (A para adulto e F para filhote): \n");
		do
		{
			scanf(" %c", &idade);
			if (idade != 'A' && idade != 'F') 
				printf("Valor inválido!\n");
		} while(idade != 'A' && idade != 'F');

		//Enquanto não chegar no fim do arquivo, lê linha por linha
		while(fgets(linha, 1000, arq) != NULL)
		{
			//Le o nome do cachorro no arquivo
			sscanf(linha, "%[^-]s", aux);
			aux[strlen(aux)-1] = '\0';

			//Le o resto das informacoes
			for(i=strlen(aux), j = 0; linha[i] != '\0'; i++, j++)
                tail[j] = linha[i];

            tail[j] = '\0';

            sscanf(tail, " - %c %c %c", &tmp_s, &tmp_p, &tmp_i);

            //Compara o nome do dog digitado pelo usuario com o nome no arquivo
            res = strcmp(nome, aux);

            //Se for o mesmo, exibe um alerta (nosso banco nao comporta nomes iguais :c)
            if(res == 0)
            	printf("Já existe um cãozinho com esse nome! Seja criativo ou acrescente um sobrenome :D\n");
            //Se o nome digitado é menor em ordem alfabética e eu ainda não fiz a insercao
            else if (res < 0 && ins == 0)
            {
            	//Insere a nova linha no arquivo novo
            	fprintf(novo, "%s - %c %c %c\n", nome, sexo, porte, idade);
            	//Marca que o dado foi inserido
            	ins = 1;
            }

            //Imprime a linha lida do arquivo original para o novo
            fprintf(novo, "%s", linha);
		}

		if(ins == 0)
			fprintf(novo, "%s - %c %c %c\n", nome, sexo, porte, idade);

		printf("Cadastro feito com sucesso!\n");

		fclose(arq);
		fclose(novo);

		getchar();
        getchar();

        //Copiar dog-tmp para dog-data
        system("mv dog-tmp.txt dog-data.txt");
        system("cls || clear");
	}
}

int main()
{
	char option = 'a';

	printf("Bem vindo ao <insira o nome aqui>!\n");

	while (option != 'S')
	{
		printf("MENU DE OPÇÕES\n");
		printf("C - Cadastrar novo animal\n");
		printf("R - Registrar adoção\n");
		printf("I - Imprimir relatório de cachorros por filtro\n");
		printf("S - Sair\n");

		scanf(" %c", &option);

		switch(option)
		{
			case 'C': cadastra_dog(); break;
			// case 'R': remove_dog(); break;
			// case 'I': imprime(); break;
			case 'S': break;
			default: printf("Opção inválida\n");
		}

		system("cls || clear");
	}
	return 0;
}