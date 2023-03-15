#include <stdio.h>
int main(void){
    /*
    Sendo i e j variáveis do tipo int
    Sendo p e q ponteiros do tipo int
    
    p = i => ILEGAL, p é um ponteiro e receberia um inteiro
    q = &j => legal, q recebe um endereço
    p = &*&i => legal, p vai receber o endereço de i
    i = (*&)j => ILEGAL, parênteses no lugar errado
    i = *&j => legal, i vai receber o valor derreferenciado de j
    i = *&*&j => legal, i vai receber o valor derreferenciado de j
    q = *p => ILEGAL, q receberia o inteiro derreferenciado
    i = (*p)++ + *q => legal, i vai receber um inteiro resultado da expressão

    */
    return 0;
}