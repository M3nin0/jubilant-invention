//Tendo como dados de entrada a altura de uma pessoa, construa um algoritmo que calcule seu peso ideal, usando a seguinte fórmula: (72.7*altura) - 58


#include <stdio.h>

int main(void){

    float alt;

    printf("Insira sua altura\n");
    scanf("%f",&alt);

    printf("Sua altura ideal é %.2f\n", (72.7 * alt) - 58);


    return 0;
}
