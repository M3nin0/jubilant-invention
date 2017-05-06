//Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique se esses valores podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
//o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
//o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
//o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.

#include <stdio.h>
#include <stdlib.h>


int tri(int x,int y,int z){

    if(x < (y + z) && y < (x + z) && z < (y + x)){
        if(x == y && x == z && z == y){
            printf("Triangulo Equilatero\n");
            exit(0);
        }else if(x != y && x != z && z != y){
            printf("Triangulo Escaleno\n");
            exit(0);
        }else{
            printf("Triagulo Isosceles\n");
            exit(0);
        }
    }else{
        printf("Um dos lados e' invalido\n");
    }


}

int main(void){

    int x,y,z;

    do{
    printf("Insira o lado X do triangulo\n");
    scanf("%i",&x);
    printf("Insira o lado Y do triangulo\n");
    scanf("%i",&y);
    printf("Insira o lado Z do triangulo\n");
    scanf("%i",&z);
    }while(x < 0 || y < 0 || z < 0);


    tri(x,y,z);

    return 0;
}
