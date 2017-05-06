/*
Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, 
os tempos registrados em cada volta. Fazer um programa em
C para ler os tempos das N voltas, calcular e imprimir:
a. melhor tempo;
b. a volta em que o melhor tempo ocorreu;
c. tempo médio das N voltas;
*/

#include <stdio.h>

int melhorVolta(float tempos[], int voltas){

	float melhor;
	int num;

	for (int i = 0; i < voltas; ++i)
	{
		melhor = tempos[i];

		for (int j = 0; j < voltas; ++j)
		{
			if(melhor < tempos[j]){
				melhor = melhor;
			}else{
				melhor = tempos[j];
				num = j;
			}
		}
	}

	printf("O melhor tempo é %.2f\n", melhor);
	printf("Este tempo foi feito na volta n° %i\n", num);

}

int tempoMedio(float tempos[], int voltas){
	
	float media = 0;

	for (int i = 0; i < voltas; ++i)
	{
		media += tempos[i];
	}

	media = media / voltas;

	printf("A media de tempo é %.2f\n", media);
}


int main(void){

	int voltas;

	printf("Quantas voltas a corrida tinha?\n");
	scanf("%i", &voltas);

	float tempos[voltas];

	printf("Ok! Vamos inserir o tempo de cada uma das voltas\n");
	for (int i = 0; i < voltas; ++i)
	{
		printf("Insira o tempo da volta %i\n",i);
		scanf("%f", &tempos[i]);
	}

	melhorVolta(tempos, voltas);
	tempoMedio(tempos, voltas);

	return 0;
}