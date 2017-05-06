//Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>

int main(void){

    float c,f;

    printf("Insira a temperatura\n");
    scanf("%f",&c);

    f = (c * 1.8) + 32;

    printf("Farenheit: %.2f\n", f);


    return 0;
}
