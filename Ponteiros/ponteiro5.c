//Outro exemplo para melhor entendimento

#include <stdio.h>


void tentaIncluir(void){

    int p;
    int je = 45;

    p = &je;

    p++;

    printf("Endereço: ");
    printf("%i\n", p);

    printf("Valor (p): ");
    printf("%i\n", p);
    printf("Valor (je): ");
    printf("%i\n", je);

}

void inclui(){

    int *p;
    int je = 45;

    p = &je;

    *p += 10;

    printf("Endereço (p): ");
    printf("%p\n", &p);
    printf("Endereço (je): ");
    printf("%p\n", &je);

    printf("Valor (p): ");
    printf("%p\n", p);
    printf("Valor (je): ");
    printf("%i\n", je);
}

int main(void){

        //tentaIncluir();
        inclui();

    return 0;
}
