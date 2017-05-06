//Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00. Informe ao usuário a quantidades de latas de tinta a serem compradas e o preço total.

#include <stdio.h>

int main(void){

    int metro, pt, compra;

    printf("Insira a quantidade de metros a ser pintada \n");
    scanf("%i",&metro);

    pt = metro / 3;
    compra = pt / 18;

    if(compra <= 0){
        compra = 1;
        printf("Você precisa comprar uma lata\n");
    }else
        printf("Você precisa comprar %i latas\n",compra);


    return 0;
}
