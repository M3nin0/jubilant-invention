//Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.


#include <stdio.h>

int main(void){

    float r;

    printf("Insira o raio do circulo\n");
    scanf("%f", &r);

    printf("A área do circulo é %.2f\n", 3.14 * (r * r));


    return 0;
}
