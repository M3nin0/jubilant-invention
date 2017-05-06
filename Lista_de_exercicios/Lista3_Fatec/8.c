//Dada uma sequência de n números reais, determinar o número de vezes que cada um deles ocorre na mesma.

#include <stdio.h>
#include <stdlib.h>

int verify(float usados[],float test, int seq){

	int status;
	status = 0;

	for (int i = 0; i < seq; ++i){
		if(usados[i] == test)
			status = 1;
	}

	return status;

}

int main(void){

	int seq, cont;

	printf("Insira o tamanho da sequência\n");
	scanf("%i", &seq);

	float vet[seq];
	float usados[seq];
	int total[seq];


	for(int ji = 0; ji < seq; ++ji){
		printf("Insira um valor: \n");
		scanf("%f", &vet[ji]);
	}

	for(int i = 0; i < seq; ++i){
		
		cont = 0;

		for (int ge = 0; ge < seq; ++ge)
		{
			if(vet[i] == vet[ge]){
				++cont;
			}
		}

		total[i] = cont;
	}
	for (int y = 0; y < seq; ++y)
	{
		if(verify(usados, vet[y], seq) == 0){
			if(total[y] <= 1){
				printf("O valor %.2f apareceu %i vez\n",vet[y], total[y]);
			}
			else{
				printf("O valor %.2f apareceu %i vezes\n",vet[y], total[y]);
			}
		}
		usados[y] = vet[y];
	}
	return 0;
}