//Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.

#include <stdio.h>
#include <stdlib.h>

int achaPrimo(int num){

    int cont = 2;
    while (cont < num){
        if((num % cont) == 0){
            return 0;
        }
        cont++;

    }
    return 1;

}

int main(void){

    int index,total;
    int num = 2;
    int cont = 1;
    total = 0;

    do{
    printf("Insira um numero\n");
    scanf("%i",&index);
    }while(index < 0);

    int vet[index];

    while(cont <= index){
        if ((achaPrimo(num)) == 1){
            total += num;
            vet[cont] = num;
            cont++;
        }
        num++;
}
    for (int i = 1; i <= index; ++i)
    {
        if(i == 1){
            printf("%i",vet[i]);
        }
        else{
            printf(" + %i",vet[i]);
        }
    }
    printf(" = %i\n",total);

    return 0;
}