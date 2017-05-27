//Lendo arquivos

#include <stdio.h>
#include <stdlib.h>

int main(void){

    FILE *p; // Definindo ponteiro do tipo FILE
    char c;

    if((p = fopen("teste.txt", "r")) == NULL){
        printf("ERRO! Impossível abrir o arquivo\n");
        exit(1);
    }

    while(!feof(p)){
        c = getc(p); // -> Faz a leitura do arquivo, caracter por caracter
        printf("%c", c);
    }

    printf("\n");

    fclose(p);
}
