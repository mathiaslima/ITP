#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void algoritmoStark(char* chave)
{
    FILE* arq = fopen("stark3.txt", "r");

    char palavra[100], linha[10000];
    int i = 0, tam;

    //Testa se a abertura deu certo
    if(arq == NULL) printf("Erro na abertura do arquivo!\n");
    else
    {
        //Le cada palavra ate o final do arquivo
        while(fscanf(arq, "%s", palavra) != EOF)
        {
            tam = strlen(palavra);

            //Checa se é impar ou par
            if (tam % 2 == 0) 
                chave[i] = palavra[0];
            else
                chave[i] = palavra[tam/2];

            i++;
        }

        fclose(arq);
    }
}

int** daredevilMap(int* cont)
{
    FILE* arq = fopen("daredevil3.txt", "r");

    int lin, col, i, j, k = 0, aux;
    int** alvos;
    
    if(arq == NULL) printf("Erro na abertura do arquivo!\n");
    else
    {
        //Le o tamanho do mapa
        fscanf(arq, "%d %d", &lin, &col);

        //Cria o mapa com tamanho maior para tratamento de bordas
        int mapa[lin + 2][col + 2];

        //Aloca dinamicamente a matriz alvos
        alvos = (int**)calloc(lin*col, sizeof(int*));
        for (i = 0; i < lin*col; ++i)
        {
            alvos[i] = (int*)calloc(2, sizeof(int));
        }

        //Inicializa o mapa
        for (i = 0; i < lin+2; i++)
            for (j = 0; j < col+2; j++)
                mapa[i][j] = 0;

        //Le a parte que importa do mapa
        for (i = 1; i <= lin; ++i)
            for (j = 1; j <= col; ++j)
                fscanf(arq, "%d", &mapa[i][j]);

        //Percorre o mapa procurando os alvos
        for (i = 1; i <= lin; ++i)
            for (j = 1; j <= col; ++j)
            {
                //Guarda o possível alvo do momento so por preguiça de escrever mapa[i][j]
                aux = mapa[i][j];

                //Um condicional gigante :c
                if (aux > mapa[i-1][j-1] && aux > mapa[i-1][j] && aux > mapa[i-1][j+1] && aux > mapa[i][j-1] && aux > mapa[i][j+1] && aux > mapa[i+1][j-1] && aux > mapa[i+1][j] && aux > mapa[i+1][j+1])
                {
                    (*cont)++;
                    //Armazena as coordenadas na matriz alvos
                    alvos[k][0] = i;
                    alvos[k][1] = j;
                    k++;
                }
            }

        fclose(arq);
    }
    return alvos;
}

void arquivoFury(char* senha, int** alvos, int qtd)
{
    FILE* arq = fopen("SHIELD.txt", "w");

    int i;

    if(arq == NULL) printf("Erro na abertura do arquivo!\n");
    else
    {
        fprintf(arq, "Senha do escudo: %s\n\n", senha);
        fprintf(arq, "Quantidade de alvos: %d\n", qtd);
        
        for (i = 0; i < qtd; ++i)
            fprintf(arq, "Localização do alvo %d: (%d, %d)\n", i + 1, alvos[i][0], alvos[i][1]);
        
        fclose(arq);
    }
    

}

int main(){
    //Lista de alvos, ainda não foi alocado
    int** alvos;
    //cont - guardará a quantidade de alvos
    int cont = 0;
    int i;
    //Vetor que guardará a string chave para descriptografar o escudo
    char chave[101] = {0};

    //Função que monta a lista de alvos a partir das informações do Demolidor
    alvos = daredevilMap(&cont);

    //Descriptografando defesas inimigas!
    algoritmoStark(chave);


    //Salva informações em arquivo
    arquivoFury(chave, alvos, cont);

    return 0;
}
