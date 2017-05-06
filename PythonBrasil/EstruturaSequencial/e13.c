//Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um algoritmo que calcule seu peso ideal, 
//utilizando as seguintes fórmulas:
//Para homens: (72.7*h) - 58
//Para mulheres: (62.1*h) - 44.7 (h = altura)
//Peça o peso da pessoa e informe se ela está dentro, acima ou abaixo do peso.

#include <stdio.h>
#include <string.h>
#include <ctype.h> //Biblioteca utilizada pela função tolower. Mais informações em man tolower

int converte(char sexo[6]){

    int i;

    for(i = 0;sexo[i];i++){
        sexo[i] = tolower(sexo[i]);
    }

}

int main(void){

    char sexo[6];
    float h;

    printf("Você é homem ou mulher ?\n");
    scanf("%s", &sexo);
    printf("Insira sua altura\n");
    scanf("%f", &h);

    converte(sexo);

    if(strcmp(sexo, "homem") == 0)
        printf("Seu peso ideal é %.2f\n",(72.7 * h) - 58);
    else if(strcmp(sexo,"mulher") == 0)
        printf("Seu peso ideal é %.2f\n",(62.1 * h) - 44.7);

    return 0;
}
