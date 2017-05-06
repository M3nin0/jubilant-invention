/*
Dado dois vetores, A (5 elementos) e B (8 elementos), 
faça um programa em C que imprima todos os elementos comuns aos dois vetores.
Exemplo: 
	int A[5] = {1,2,4,6,21};
    int B[8] = {2,3,6,7,9,11,15,20};
*/

#include <stdio.h>

int busca(){

	//Declarando arrays
	int a[5] = {1,2,4,6,21};
    int b[8] = {2,3,6,7,9,11,15,20};
     
    printf("Os vetores utilizados são:\nint a[5] = {1,2,4,6,21};\nint b[8] = {2,3,6,7,9,11,15,20};\n");

    for (int i = 0; i < 5; ++i)
    {
        for (int ge = 0; ge < 8; ++ge)
        {
            if(a[i] == b[ge]){
                printf("%i,", a[i]);
            }
        }
    }
}


int main(void){

    busca();

	return 0;
}