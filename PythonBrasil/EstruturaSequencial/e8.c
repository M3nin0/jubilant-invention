//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.

#include <stdio.h>

int main(void){

    int hora,trab;

    printf("Quanto você ganha por hora ?\n");
    scanf("%i",&hora);
    printf("E quantas horas você trabalhou ?\n");
    scanf("%i",&trab);

    printf("Seu salário total será de %i\n",hora * trab);


    return 0;
}
