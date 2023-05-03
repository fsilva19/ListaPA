#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;
    float *ponteiro, aux;

    printf("Digite um valor:\n");
    scanf("%d", &n);

    ponteiro = malloc(n * sizeof(float));

    for(int i=0;i<n;i++){
        scanf("%f", (ponteiro + i));
    }
    //Para imprimir o vetor original
    printf("Vetor na ordem original:\n");
    for(int i=0;i<n;i++){
        printf("%.2f ", *(ponteiro + i));
    }
    //Para ordenar o vetor
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++){
            if(*(ponteiro + j) < *(ponteiro + k)){
                aux = *(ponteiro + j);
                *(ponteiro + j) = *(ponteiro + k);
                *(ponteiro + k) = aux;
            }
        }
    }
    printf("\nVetor em ordem crescente:\n\n");
    //Para imprimir o vetor ordenado
    for(int i=0;i<n;i++){
        printf("%.2f ", *(ponteiro + i));
    }
    free(ponteiro);
    return 0;
}