#include <stdio.h>
int main(void) {
    int valor;
    int *p1;
    float temp;
    float *p2;
    char aux;
    char *nome = "Ponteiros";
    char *p3;
    int idade;
    int vetor[3];
    int *p4;
    int *p5;
    
    /* (a) */
    valor = 10;
    p1 = &valor;
    *p1 = 20;
    printf("%d \n", valor);
    //Esperado: 10
    //Obtido: 20

    
    /* (b) */ 
    temp = 26.5;
    p2 = &temp;
    *p2 = 29.0;
    printf("%.1f \n", temp);
    //Esperado: 29.0
    //Obtido: 29.0

    /* (c) */ 
    p3 = &nome[0];
    aux = *p3;
    printf("%c \n", aux);
    //Esperado: nome[0] = P
    //Obtido: P

    /* (d) */
    p3 = &nome[4];
    aux = *p3;
    printf("%c \n", aux);
    //Esperado: nome[4] = e
    //Obtido: e

    /* (e) */
    p3 = nome;
    printf("%c \n", *p3);
    //Esperado: Ponteiros
    //Obtido: P (ele pegou o endereço apenas do primeiro elemento do array)

    /* (f) */
    p3 = p3 +4;
    printf("%c \n", *p3);
    //Esperado: e (endereço do 1º elemento + 4)
    //Obtido: e

    /* (g) */
    p3--;
    printf("%c \n", *p3);
    //Esperado: Lixo (valor aleatório no endereço do p3 -1 bit)
    //Obtido: t (p3 estava com valor de endereço do array p[4], passou para p[3])

    /* (h) */
    vetor[0] = 31;
    vetor[1] = 45;
    vetor[2] = 27;
    p4 = vetor;
    idade = *p4;
    printf("%d \n", idade);
    //Esperado: 31 (vai receber o valor do endereço vetor[0])
    //Obtido:

    /* (i) */
    p5 = p4 +1;
    idade = *p5;
    printf("%d \n", idade);
    //Esperado: 45 (vai receber o valor do endereço vetor[0+1])
    //Obtido: 45

    /* (j) */
    p4 = p5 +1;
    idade = *p4;
    printf("%d \n", idade);
    //Esperado: 27 (vai receber o valor de vetor[0+1+1])
    //Obtido: 27

    /* (l) */
    p4 = p4 -2;
    idade = *p4;
    printf("%d \n", idade);
    //Esperado: 31 (vai receber o valor de vetor[0])
    //Obtido: 31

    /* (m) */
    p5 = &vetor[2] - 1;
    printf("%d \n", *p5);
    //Esperado: 45 (vai receber o endereço do vetor[2-1])
    //Obtido: 45

    /* (n) */
    p5++;
    printf("%d \n", *p5);
    //Esperado: 27 (vai receber o endereço de vetor[1+1])
    //Obtido: 27
  return(0);
}
