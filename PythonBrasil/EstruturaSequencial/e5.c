//Faça um Programa que converta metros para centímetros.


#include <stdio.h>

int main(void){

    float m;

    printf("Insira a quantidade de metros\n");
    scanf("%f",&m);

    printf("%.2f\n",m * 100);

    return 0;
}
