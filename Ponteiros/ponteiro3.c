#include <stdio.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "portuguese");	

	char *ponteiro = "Ol� mundo";

	printf("%s", ponteiro);

	return 0;
}