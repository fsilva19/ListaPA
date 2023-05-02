/*
    Supondo que i ocupa o endereço 4094 na memória:
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    }
    SAÍDA ESPERADA:
    ENDEREÇO_DE_MEMÓRIA   VALORi+2   VALORi   3*VALORi   VALORi+4:
    4094 7 5 15 9

*/
#include <stdio.h>
int main(void){
    int i=5, *p;
    p = &i;
    printf("%x %d %d %d %d", p,*p+2,**&p,3**p,**&p+4);
    
    return 0;
}