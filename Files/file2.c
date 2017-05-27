#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void){

    FILE *p;
    char frase[50];

    if((p = fopen("teste.txt", "a")) == NULL){
        printf("Erro! Impossível abrir arquivo\n");
        exit(1);
    }

    printf("Insira uma frase: ");
    fgets(frase, sizeof(frase), stdin);

    //for(size_t i = 0; frase[i] ; i++){
    //    putc(frase[i], p);
    //}

    fprintf(p, frase); // -> Salva texto no arquivo

    fclose(p);

}
