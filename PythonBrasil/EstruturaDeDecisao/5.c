/* Faça um programa para a leitura de duas notas parciais de um aluno. 
 * O programa deve calcular a média alcançada por aluno e apresentar:
 *
 *     A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
 *         A mensagem "Reprovado", se a média for menor do que sete;
 *             A mensagem "Aprovado com Distinção", se a média for igual a dez. 
 */

#include <stdio.h>

int main(void){

    float n1,n2, media;

    printf("Insira a primeira nota\n");
    scanf("%f", &n1);
    printf("Insira a segunda nota\n");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if(media == 10)
        printf("Aprovado com distinção\n");

    else if(media >= 7)
        printf("Aprovado\n");
    else
        printf("Reprovado!!!\n");


    return 0;
}
