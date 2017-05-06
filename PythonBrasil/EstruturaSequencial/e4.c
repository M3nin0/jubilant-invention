//Faça um Programa que peça as 4 notas bimestrais e mostre a média.


#include <stdio.h>

int main(void){

    int n1,n2,n3,n4;

    printf("Insira sua primeira nota: \n");
    scanf("%i",&n1);
    printf("Insira sua segunda nota: \n");
    scanf("%i",&n2);
    printf("Insira sua terceira nota: \n");
    scanf("%i",&n3);
    printf("Insira sua quarta nota: \n");
    scanf("%i",&n4);

    printf("Sua média é %i\n",((n1 + n2 + n3 + n4) / 4));


    return 0;
}
