#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Definindo Struct
typedef struct ponto{
    int x;
    int y;
}PONTO;

PONTO p1;
PONTO p2;

void calcula(PONTO *p1, PONTO *p2){

    int d;

    d = sqrt(pow(p2->x - p1->x, 2) + pow(p2->y - p1->y, 2));

    printf("A distância entre os dois pontos é: %i\n", d);

}

void recebe(){

    //Ponto 1
    printf("Insira o x1: ");
    scanf("%i", &(p1.x));
    printf("Insira o y1: ");
    scanf("%i", &(p1.y));

    //Ponto 2
    printf("Insira o x2: ");
    scanf("%i", &(p2.x));
    printf("Insira o y2: ");
    scanf("%i", &(p2.y));

    calcula(&p1, &p2);

}


void main(void){

    recebe();

}
