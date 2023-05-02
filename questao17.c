#include <stdio.h>
#include <stdlib.h>
int soma(int *vetor1, int *vetor2, int *vetor3, int tamanho){
    for(int i=0;i<tamanho;i++){
        *(vetor3+i) = *(vetor1 + i) + *(vetor2 + i);
    }
    return vetor3;
}

int main(void){
    int tamanho, *vetor1, *vetor2, *vetor3;

    printf("Tamanho dos vetores:\n");
    scanf("%d", &tamanho);

    vetor1 = malloc(tamanho * sizeof(int));
    vetor2 = malloc(tamanho * sizeof(int));
    vetor3 = malloc(tamanho * sizeof(int));

    printf("Elementos do primeiro vetor:\n");
    for(int i=0;i<tamanho;i++){
        scanf("%d", (vetor1 + i));
    }
    printf("\nElementos do segundo vetor:\n");
    for(int i=0;i<tamanho;i++){
        scanf("%d", (vetor2 + i));
    }

    soma(vetor1, vetor2, vetor3, tamanho);
    
    printf("\nResultado da soma entre os vetores:\n");
    printf("[ ");
    for(int i=0;i<tamanho;i++){
        printf("%d ", *(vetor3 + i));
    }
    printf("]");

    free(vetor1);
    free(vetor2);
    free(vetor3);
    
    return 0;
}