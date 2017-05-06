#include <stdio.h>
#include <string.h>
#include <locale.h>

void mostra_array(int *array[10]){
	
	int i;

	//printf("%i\n", sizeof(int));	

	for(i = 0; i < 10; i++){
		array[i] = 10 - i;
	}

	
	for(int i = 0; i < 10; i++){
		printf("Endere�o do Array %i � %i\n", i, &array[i]);
		printf("Valor do ponteiro Array %i � %i\n\n\n", i, array[i]);	
	
	}
	
}

void mostra_string(char *nome, char *sobrenome){

	printf("COME�O DA FUN��O: mostra_string\n");
	
	printf("Endere�o do ponteiro A = %i\n", &nome);
	printf("Valor do ponteiro A = %s\n", nome);

	printf("Endere�o do ponteiro B = %i\n", &sobrenome);
	printf("Valor do ponteiro B = %s\n", sobrenome);
	
	printf("FIM DA FUN��O: mostra_string\n\n\n");

}

int main(void){
	setlocale(LC_ALL, "portuguese");

	//Declarando ponteiros
	//Declarando CHARS
	char *nome = "Felipe";
	char *sobrenome = "Menino";
	//Declarando Arrays
	int *array[10];
	
	mostra_string(nome, sobrenome);
	mostra_array(array);

	return 0;
}