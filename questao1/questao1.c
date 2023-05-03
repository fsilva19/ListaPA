#include <stdio.h>
int main(void){
    int i=3,j=5;
    int *p, *q;
    p = &i;
    q = &j;

    
    printf("%d\n", p == &i); //verifica se p é igual ao endereço de i
    printf("%d\n", *p - *q); //i - j = 3 - 5 
    printf("%d\n", **&p); // derreferencia o endereço do endereço de p
    printf("%d\n", 3 - *p/(*q) + 7); // 3 - 0 + 7

    
    return 0;
}