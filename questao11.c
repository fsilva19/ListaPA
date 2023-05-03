#include <stdio.h>
int main(void){
    float aloha[10], coisas[10][5], *pf, value = 2.2;
    aloha[2] = value; // VÁLIDO, o elemento de posição 2 recebe o valor de value
    scanf("%f", &aloha); // INVÁLIDO, aloha é um vetor, e não pode ser passado como um único valor
    aloha = value; // INVÁLIDO, mesma coisa de cima, aloha é um vetor de 10 elementos
    printf("%f", aloha); // INVÁLIDO, aloha é um vetor
    coisas[4][4] = aloha[3]; // VÁLIDO, o elemento linha4 coluna4 de coisas, recebe o elementos 3 de aloha
    pf = value; // INVÁLIDO, precisa informar que é o ponteiro para o enedereço (&value)
    pf = aloha;// VÁLIDO, precisa informar que é o ponteiro para o enedereço (&aloha)
    return 0;
}