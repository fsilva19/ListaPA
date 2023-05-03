#include <stdio.h>
int main(void){
    /* A SAÍDA ESPERADA:
    i=0 vet[0]=1.1 *(f+0)=1.1 &vet[0]=ENDER[0] (f+0)=ENDER[0]
    ...
    i=4 vet[4]=5.5 *(f+4)=5.5 &vet[4]=ENDER[4] (f+4)=ENDER[4]
    */
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i);
        printf("vet[%d] = %.1f",i, vet[i]);
        printf("*(f + %d) = %.1f",i, *(f+i));
        printf("&vet[%d] = %X",i, &vet[i]);
        printf("(f + %d) = %X",i, f+i);
    }
    return 0;
}