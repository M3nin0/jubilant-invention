//Distribuindo os valores de um array

#include <stdio.h>

int main(void){

    int array[10];
    int num;
    int *p;
    int choose;

    for(size_t i = 0; i < 10; i++)
        array[i] = i + 1;

    while(1){
        printf("Qual posição do array você quer clonar: \n");
        printf("1 = %i\n2 = %i\n3 = %i\n4 = %i\n5 = %i\n6 = %i\n7 = %i\n8 = %i\n9 = %i\n", array[1],array[2],array[3],array[4],array[5],array[6], array[7], array[8],array[9]);
        scanf("%i", &choose);

        p = &array[choose];
        num = *p;

        printf("O VALOR DE NUM PASSOU A SER: %i\n", num);
    }


    return 0;
}
