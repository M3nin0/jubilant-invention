#include <stdio.h>

int main(void){

    int x = 16;
    int y = 3;
    
    /*Quando os valores inteiros x / y são divididos eles retornam
    //valores inteiros são retornados, mesmo que a variavel que recebe esses valores seja
    floar esse resultado será possítivo*/
    
    //float resultado = x / y; // == 5.000000

    /*Para resolver este problema utilizamos o casting (TIPO-A-SER-RETORNADO), esse força
     o retorno no tipo escolhido veja*/
    
    float resultado = (float) x / y; // == 5.333333
    
    /* O resultado saiu dessa forma pois foi forçado*/
    
    printf("%f\n", resultado);
    

    return 0;
}