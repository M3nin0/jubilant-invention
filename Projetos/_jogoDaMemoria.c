#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define WELCOME 3995000
#define DELAY 3995000 //ms
#define MAX_VALUE 7

void welcome(){

    system("figlet Memorize");
    printf("    Lembre-se se errar uma perde!!!\n");
    usleep(WELCOME);
    system("clear");
}

int *geraNums(){

    static int vet[MAX_VALUE];
    /*Variáveis globais static funcionam como variáveis globais dentro de um módulo */

    srand(time(NULL));
    for(int i = 0; i < MAX_VALUE; i++)
        vet[i] = rand() % 99;

    return vet;
}

void resposta(int *vetor){

    int resp[MAX_VALUE];

    printf("        Agora insira as respostas\n");
    for(int i = 0; i < MAX_VALUE; i++){
        printf("        %i° Número: ", i + 1);
        scanf("%i", &resp[i]);
        if(resp[i] != vetor[i]){
            system("clear");
            printf("    A NÂO VOCÊ ACABOU ERRANDO\n     FIM DE JOGO!\n");
            exit(0);
        }
    }
    printf("VOCÊ GANHOU. COMO VOCÊ É FODÂO =D\n");

}

int main(void){

    welcome();

    int *nums;
    nums = geraNums();

    printf("Tente decorar os números abaixo para ganhar o jogo!\n\n");
    printf("            %i  %i  %i  %i  %i  %i  %i\n",nums[0],nums[1],nums[2],nums[3],nums[4],nums[5],nums[6]);
    usleep(DELAY);
    system("clear");

    resposta(nums);

    return 0;
}
