//Calculando a distância com Struct

#include <stdio.h>
#include <math.h>

int main(void){

    int d;

    struct ponto{
        int x1;
        int x2;
        int y1;
        int y2;
    }point;

    printf("Insira o ponto X1: ");
    scanf("%i", &point.x1);
    printf("Insira o ponto X2: ");
    scanf("%i", &point.x2);

    printf("Insira o ponto Y1: ");
    scanf("%i", &point.y1);
    printf("Insira o ponto Y2: ");
    scanf("%i", &point.y2);

    d = sqrt(pow(point.x2 - point.x1, 2) + pow(point.y2 - point.y1, 2));

    printf("A distância é %i\n", d);

    return 0;
}
