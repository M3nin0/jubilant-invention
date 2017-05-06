/*
Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. 
Faça um programa em C que calcule o produto escalar P de A por B. 
(Isto é, P =A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).
Exemplo: int M[10] = {1,2,3,4,5,6,7,8,9,10};
         int N[10] = {1,1,1,1,1,1,1,1,1,1};

*/


#include <stdio.h>

int escalar(){

	//Definindo Arrays
	int m[10] = {1,2,3,4,5,6,7,8,9,10};
	int n[10] = {1,1,1,1,1,1,1,1,1,1};
	int total = 0;

	printf("Os valores utilizados foram:\nm[10] = {1,2,3,4,5,6,7,8,9,10};\nn[10] = {1,1,1,1,1,1,1,1,1,1};\n");

	for (int i = 0; i < 10; ++i)
	{
		total += m[i] * n[i];
	}

	printf("O total é %i\n", total);

}

int main(void){

	escalar();

	return 0;
}