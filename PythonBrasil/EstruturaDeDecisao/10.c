/*Faça um Programa que pergunte em que turno você estuda.
 * Peça para digitar
 * M-matutino ou V-Vespertino ou N- Noturno.
 * Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.
 *
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char periodo[2];

    printf("Em qual período você estuda ?\nM - matutino\nV - Vespertino\nN - Noturno\n");
    fgets(periodo, sizeof(periodo), stdin);

    if(strcmp(periodo, "M") == 0)
        printf("Bom dia =D\n");
    else if(strcmp(periodo, "V") == 0)
        printf("Boa tarde =D\n");
    else if(strcmp(periodo, "N") == 0)
        printf("Boa noite =D\n");
    else
        printf("Horário invalido!!!\n");

    return 0;
}
