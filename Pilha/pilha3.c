#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

	char *s;
	int t;
	s = malloc(100);

	if(s == NULL){
		printf("Impossível abrir o programa !!!\n");
		exit(1);
	}

	fgets(s, sizeof(s), stdin);

	s[strlen(s) -1] = '\0';
	for(t = strlen(s); t >= 0; t--){
		putchar(s[t]);
	}

	free(s);

	return 0;
}