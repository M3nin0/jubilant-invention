//Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.

#include <stdio.h>
#include <stdlib.h>

int primo(int num,int cont){

    cont = 2;
    while (cont < num){
        if((num % cont) == 0){
            return 0;
        }
        cont++;

    }
    return 1;

}


int main(void){

    int num,cont;

    do{
    printf("Insira um valor para analise: \n");
    scanf("%i",&num);
    }while(num < 0);

    if((primo(num,cont)) == 1){
        printf("%i e' primo\n",num);
    }else{
        printf("%i nao e' primo\n",num);
    }

    return 0;
}
