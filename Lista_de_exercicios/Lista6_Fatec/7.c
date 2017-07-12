/*
Faça um programa de criptografia de dados, ou seja, um programa capaz de ler um arquivo texto,
codificar este arquivo através de alguma técnica de alteração do código ASCII (exemplo: somar 1 ao
valor ASCII de cada caracter), e escrever em disco o arquivo codificado. Crie um outro programa que
descriptografe um arquivo criado pelo programa de criptografia, realizando a operação inversa: ler o
arquivo do disco, descodificar e escrever o novo arquivo em disco descriptografado. Lembre-se que
para que seja possível criptografar/descriptografar um arquivo a função de codificação deve possuir
uma função inversa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> 
#include <time.h>

#define MAX_KEY 100000000

typedef size_t sec_int;

int gen_key(){

	srand(time(NULL));
	sec_int key = rand();

	return key;

}

int crypt(){

	sec_int a = gen_key();

	FILE *p, *l;
	int cont = 0;
	char texto_crypt[500];

	p = fopen("texto.txt", "r");
	l = fopen("crypto.txt", "a");

	while(!(feof(p))){
		fscanf(p, "%c", &texto_crypt[cont]);
		fprintf(l, "%c",texto_crypt[cont] + (a / MAX_KEY));
		cont++;
	}

	printf("O ARQUIVO FOI CRIPTOGRAFADO!!!\n");
	printf("A CHAVE PARA DESCRIPTOGRAFAR É %i\n", a);

	fclose(p);
	fclose(l);
}

int decrypt(){

	FILE *m, *l;
	sec_int cont = 0;
	sec_int a;

	char texto_decrypt[500];

	l = fopen("crypto.txt", "r");
	m = fopen("decrypt.txt", "a");

	printf("Insira a chave para descriptografar: \n");
	scanf("%i", &a);

	while(!(feof(l))){
		fscanf(l, "%c", &texto_decrypt[cont]);
		fprintf(m, "%c",texto_decrypt[cont] - (a / MAX_KEY));
		cont++;
	}

	fclose(l);
	fclose(m);

}

int main(void){

	int choose;

	printf("=== MENU ===\n");
	printf("O que você deseja fazer ?\n");
	printf("1 - Criptografar\n");
	printf("2 - Descriptografar\n");
	printf("3 - Sair\n");

	scanf("%i", &choose);

	switch(choose){
		case 1:
			crypt();
			break;
		case 2:
			decrypt();
			break;
		case 3:
			exit(0);

		default:
			printf("OPA! OPÇÂO INVALIDA!\n");
			exit(1);
	}

}
