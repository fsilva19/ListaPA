#include <stdio.h>
#include <stdlib.h>

int compare(const void* v1, const void* v2){
    if (* (float*)v1 == *(float*)v2){
        return 0; //iguais
    }else{
        if(* (float*)v1 < *(float*)v2){
            return -1; //vem antes
        }else{
            return 1; //vem depois
        }
    }
}
int main(void){
    int n;
    float *ponteiro;

    printf("Digite um valor:\n");
    scanf("%d", &n);

    ponteiro = malloc(n * sizeof(float));

    for(int i=0;i<n;i++){
        scanf("%f", (ponteiro + i));
    }

    //Para imprimir o vetor original
    printf("\nVetor na ordem original:\n");
    for(int i=0;i<n;i++){
        printf("%.2f ", *(ponteiro + i));
    }

    //ordenação a partir da função qsort:
    qsort(ponteiro, n, sizeof(float), compare);

    printf("\n\nVetor em ordem crescente:\n");
    //Para imprimir o vetor ordenado
    for(int i=0;i<n;i++){
        printf("%.2f ", *(ponteiro + i));
    }

    return 0;
}