    //Considerando:
    int mat[4] = {1,2,3,4}, *p, x;
    
    //As proposições são:

    p = mat+1; 
    // É VÁLIDA. Vai receber o endereço do primeiro valor e somar 1.
    
    p = mat++; 
    // NÃO É VALIDA. mat é um vetor, não sendo possível incrementar sem indicar qual o elemento dentro do vetor.

    p = ++mat;
    //NÃO É VÁLIDA. Pelo mesmo motivo acima, mat é um vetor e não é possível fazer o incremento.

    x = (*mat)+1; 
    // É VÁLIDA, x vai receber o valor derreferenciado do primeiro elemento de mat e somar 1.
    return 0;