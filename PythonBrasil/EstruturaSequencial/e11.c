//Faça um Programa que peça 2 números inteiros e um número real. Calcule e mostre: o produto do dobro do primeiro com metade do segundo. a soma do triplo do primeiro com o terceiro. o terceiro elevado ao cubo.
//

#include <stdio.h>

int main(void){

    int v1,v2;
    float v3;

    printf("Insira o primeiro número: \n");
    scanf("%i",&v1);
    printf("Insira o segundo número: \n");
    scanf("%i",&v2);
    printf("Insira o terceiro número: \n");
    scanf("%f",&v3);

    //O produto do dobro do primeiro com metade do segundo
    printf("%.2f\n",(v1 * 2) * (v2 / 2));

    //A soma do triplo do primeiro com o terceiro
    printf("%.2f\n", (v1 * 3) + v3);

    //O terceiro elevado ao Cubo
    printf("%.2f\n",(v3 * v3 * v3));


    return 0;
}
