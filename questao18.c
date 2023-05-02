#include <stdio.h>
#include <stdlib.h>


//Função para imprimir a Matriz produto.
void *imprimindo(int **Matriz, int linhac, int colunac){
    for(int i=0; i<linhac;i++){
        for(int j=0; j<colunac;j++){
            printf("%d ", Matriz[i][j]);
        }
        printf("\n");
    }
}

//Função para receber os elementos da Matriz.
void *recebendo(int **Matriz, int linha, int coluna){
    for(int i=0; i<linha;i++){
        for(int j=0; j<coluna;j++){
            scanf("%d", &Matriz[i][j]);
        }
    }
}

//Função para fazer o produto da Matriz A pela Matriz B.
void *produto(int **Ma, int **Mb, int **Mc, int lina, int cola, int colb){
    int aux;
    for(int i=0; i<lina;i++){
        for(int j=0; j<colb;j++){
            aux = 0;

            for(int k=0;k<cola;k++){
                aux = aux + Ma[i][k] * Mb[k][j];
            }

            Mc[i][j] = aux;
        }
    }
}

int main (void){
    int **Ma, **Mb, **Mc;
    int lina, cola, linb, colb, linc, colc;

    printf("Linhas da Matriz A? ");
    scanf("%d", &lina);

    printf("Colunas da Matriz A? ");
    scanf("%d", &cola);
    
    printf("Linhas de B = Colunas de A [%d]\n", cola);
    linb = cola;

    printf("Colunas da Matriz B? ");
    scanf("%d", &colb);
    
    //Atribuindo os valores para linha e coluna de C:
    linc = lina;
    colc = colb;

    //Alocando o bloco auxiliar:
    Ma = (int**)malloc(lina * sizeof(int*)); 

    Mb = (int**)malloc(linb * sizeof(int*));
    
    Mc = (int**)malloc(linc * sizeof(int*));

    //Alocando as linhas:
    Ma[0] = (int*)malloc(lina * cola * sizeof(int));
    for(int i=1;i<lina;i++){
        Ma[i] = Ma[i-1]+cola;
    }

    Mb[0] = (int*)malloc(linb * colb * sizeof(int));
    for(int i=1;i<linb;i++){
        Mb[i] = Mb[i-1]+colb;
    }

    Mc[0] = (int*)malloc(linc * colc * sizeof(int));
    for(int i=1;i<linc;i++){
        Mc[i] = Mc[i-1]+colc;
    }

    printf("\nDigite os valores da Matriz A:\n");
    recebendo(Ma, lina, cola);

    printf("\nDigite os valores da Matriz B:\n");
    recebendo(Mb, linb, colb);

    produto(Ma, Mb, Mc, lina, cola, linb);

    printf("\nMatriz A:\n");
    imprimindo(Ma, lina, cola);

    printf("\nMatriz B:\n");
    imprimindo(Mb, linb, colb);

    printf("\nMatriz C:\n");
    imprimindo(Mc, linc, colc);
    
    
    //Liberação das linhas:
    free(Ma[0]);
    free(Mb[0]);
    free(Mc[0]);
    //Liberação do bloco auxiliar:
    free(Ma);
    free(Mb);
    free(Mc);
    return 0;
}
