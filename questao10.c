#include <stdio.h>
int main(void){
    char x[4];
    int y[4];
    float z[4];
    double w[4];

    printf("Vetor do tipo CHAR:\n");
    for(int i=0; i<=3; i++){
        printf("x+%d= %x\n", i, (x+i));
    }
    printf("Vetor do tipo INT:\n");
    for(int i=0; i<=3; i++){
        printf("x+%d= %x\n", i, (y+i));
    }
    printf("Vetor do tipo FLOAT:\n");
    for(int i=0; i<=3; i++){
        printf("x+%d= %x\n", i, (z+i));
    }
    printf("Vetor do tipo DOUBLE:\n");
    for(int i=0; i<=3; i++){
        printf("x+%d= %x\n", i, (w+i));
    }
    
    return 0;
}
/*
ATENDEU às expecativas da resposta anterior, entretanto, os valores da ocupação de memória das variáveis foi:
CHAR = 1 byte
INT = 4 bytes
FLOAT = 4 bytes
DOUBLE = 8 bytes
*/