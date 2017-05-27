//Struct é uma coleção de variaveis


/* A definição de uma struct é feita da seguinte maneira
 *
 * struct nome_da_struct{
 *
 *  tipo-1 nome-1;
 *  tipo-2 nome-2;
 *
 *  [...]
 *
 *  tipo-n nome-;
 *
 * } variavel_definida_pela_struct;
 * */

#include <stdio.h>

int main(void){

    struct endereco_casa{

        char rua[50];
        char bairro[20];
        int cep;
    } casa = {
        "Avenida Brasil", "Rio de Janeiro", 1234567 //Atribuindo os valores requisitados pelo struct utilizando um array
    };

    //Perceba que casa é a variavel utilizada para chamar os valores do struct

    printf("%s\n", casa.rua);
    printf("%s\n", casa.bairro);
    printf("%i\n", casa.cep);

}
