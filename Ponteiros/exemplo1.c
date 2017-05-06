/* Elabore um programa que declare 4 variáveis do tipo inteiro e 4 do tipo ponteiro de inteiro, 
 * e faça com que as variáveis ponteiro apontem para as variáveis inteiro. 
 * Coloque comandos que permitam modificar os valores das variáveis inteiras através das variáveis ponteiro. 
 * Faça a simulação passo-a-passo para visualizar o que está acontecendo em cada linha do programa. */

#include <stdio.h>

int main(void){

    //Variaveis inteiras
    int i_1 = 1,i_2 = 2,i_3 = 3,i_4 = 4;
    int chose;
    
    do{
        printf("1: Mudar endereço de i_1\n");
        printf("2: Mudar endereço de i_2\n");
        printf("3: Mudar endereço de i_3\n");
        printf("4: Mudar endereço de i_4\n");
        printf("5: Mudar todos os valores\n");
        printf("-1: Sair do loop\n");
        scanf("%i", &chose);
        
        if(chose == 1){
            printf("Insira o novo valor de i_1\n");
            scanf("%i", &i_1);
        }
        
        else if(chose == 2){
            printf("Insira o novo valor de i_2\n");
            scanf("%i", &i_2);
        }
        
        else if(chose == 3){
            printf("Insira o novo valor de i_3\n");
            scanf("%i", &i_3);
        }
        
        else if(chose == 4){
            printf("Insira o novo valor de i_4\n");
            scanf("%i", &i_4);
        }
        
        else if(chose == 5){
            printf("Insira o novo valor de i_1\n");
            scanf("%i", &i_1);
            printf("Insira o novo valor de i_2\n");
            scanf("%i", &i_2);
            printf("Insira o novo valor de i_3\n");
            scanf("%i", &i_3);
            printf("Insira o novo valor de i_4\n");
            scanf("%i", &i_4);
        }
        
        else if(chose == -1)
            break;
    
    }while(chose == -1);

    printf("\n========================\n");
    printf("== Variaveis inteiras ==\n");
    printf("======= i1 = %i =====\n", i_1);
    printf("======= i2 = %i =====\n", i_2);
    printf("======= i3 = %i =====\n", i_3);
    printf("======= i4 = %i =====\n", i_4);
    printf("==========================\n");
    
    //Variaveis ponteiro
    int *p1, *p2, *p3, *p4;


    //Referenciando as variaveis inteiras
    p1 = &i_1;
    p2 = &i_2;
    p3 = &i_3;
    p4 = &i_4;

    printf("\n========================\n");
    printf("== Variaveis ponteiro ==\n");
    printf("======= p1 = %i =====\n", p1);
    printf("======= p2 = %i =====\n", p2);
    printf("======= p3 = %i =====\n", p3);
    printf("======= p4 = %i =====\n", p4);
    printf("==========================\n");
    
    

    return 0;
}
