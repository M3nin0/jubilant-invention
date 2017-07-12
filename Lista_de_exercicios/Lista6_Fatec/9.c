/*
Faça um que abra um arquivo HTML e elimine todas as “tags” do texto, ou seja,
o programa deve gerar um novo arquivo em disco que elimine todas as tags Html 
que são caracterizadas por comandos entre “<” e “>”.  Veja abaixo um exemplo de um texto em HTML
e do texto que deverá ser gerado pelo programa após eliminar as tags Html.
*/

//Regex ER -> '<[^>]*>'

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <regex.h>

#define ER "<[^>]*>"

int main(void){

	FILE *p, *l;
	char linha[150];
	
	p = fopen("pagina.html", "r");
	l = fopen("new_pagina.html", "a");

	regex_t reg;

	if(regcomp(&reg, ER, REG_EXTENDED) != 0){
     	printf("Expressão regular invalida!\n");
    	exit(1);
    }

    while(!feof(p)){
    	fscanf(p, "%s", linha);

		if ((regexec(&reg, linha, 0, (regmatch_t *)NULL, 0)) != 0) {
        	    fprintf(l,"%s\n",linha);
        }
    }
}