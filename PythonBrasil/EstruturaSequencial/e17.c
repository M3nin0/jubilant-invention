//Faça um Programa para uma loja de tintas. 
// O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.
// Considere que a cobertura da tinta é de 1 litro para cada 6 metros quadrados e que a 
//tinta é vendida em latas de 18 litros, que custam R$ 80,00 ou em galões de 3,6 litros,
//que custam R$ 25,00.
//Informe ao usuário as quantidades de tinta a serem compradas e os respectivos preços em 3 situações:
//comprar apenas latas de 18 litros;
//comprar apenas galões de 3,6 litros;
//misturar latas e galões, de forma que o preço seja o menor. 
//Acrescente 10% de folga e sempre arredonde os valores para cima, isto é, considere latas cheias.

#include <stdio.h>

int main(void){

    float metro, pt, galo, lit, compra;

    printf("Insira a quantidade de metros quadrados a serem pintados: \n");
    scanf("%f",&metro);

    pt = metro / 6;
    lit = pt / 18;
    galo = pt / 3.6;

    if(pt == 0)
    	lit = 1;
    	galo = 1;

    return 0;
}
