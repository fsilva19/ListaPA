/*
O trexo de código abaixo vai imprimir os elementos do vetor vet[]
utilizando a derreferenciação dos endereços dos elementos.
int main(void){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%d ",*(vet+i));
    }
}
Já o trexo de código abaixo vai imprimir os endereços de cada um dos elementos
do vetor. A forma utilizada se dá por vet ser uma variável do tipo array.
int main(void){
    int vet[] = {4,9,13};
    int i;
    for(i=0;i<3;i++){
        printf("%X ",vet+i);
    }
}
*/
