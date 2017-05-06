//Faça uma função para calcular o fatorial de um número fornecido pelo usuário.
//A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
//Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.
//OBS: Resolver de forma recursiva. (Utilizar pesquisa da parte B).

#include <stdio.h>

int fatorial(int num){

    if(num > 1){
        return fatorial(num - 1) * num;
    }
}

int main(void){

    int num;

    printf("Insira um numero: \n");
    scanf("%i",&num);

    printf("%i\n",fatorial(num));

    return 0;
}
