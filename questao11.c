#include <stdio.h>
int main(void){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    aloha[2] = value; //=> VÁLIDO, o elemento de posição 2 recebe o valor de value
    scanf("%f", &aloha); //
    printf("%f", *aloha);
    return 0;
}