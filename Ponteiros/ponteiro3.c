#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");	

	char *ponteiro = "Olá mundo";

	printf("%s", ponteiro);

	return 0;
}