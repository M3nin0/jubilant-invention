//Cadastrando funcionarios com struct
//Feito de forma mais simples possível =D


//OBS: NÂO USE SCANF COM FGETS, pode dar muitos problemas -)

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <locale.h>

void enter(void){
    printf("Precione qualquer tecla para continuar...");
    fflush(stdout);
    getchar();
    system("clear");
}


int main(void){
    
    setlocale(LC_ALL, "portuguese"); 
    
    struct endereco{
        char rua[50];
    };
    struct contatos{
        char telefone[10];
        char email[70];
    };
    struct filiacao{
        char pai[40];
        char mae[40];
    };
    struct pessoa{
        char nome[30];
        char sobrenome[30];
        struct endereco local;
        struct contatos mail;
        struct filiacao filial;
    };

    //Chamando struct
    struct pessoa dma;
    
    printf("Insira nome: ");
    fgets(dma.nome, sizeof(dma.nome), stdin);
    
    printf("Insira sobrenome: ");
    fgets(dma.sobrenome, sizeof(dma.sobrenome), stdin);
    
    printf("Insira seu endereço: ");
    fgets(dma.local.rua, sizeof(dma.local.rua), stdin);
    
    printf("Insira seu telefone: ");
    fgets(dma.mail.telefone, sizeof(dma.mail.telefone), stdin);
    
    printf("Insira seu email: ");
    fgets(dma.mail.email, sizeof(dma.mail.email), stdin);
    
    printf("Insira o nome de sua mãe: ");
    fgets(dma.filial.mae, sizeof(dma.filial.mae), stdin);
    
    printf("Insira o nome de seu pai: ");
    fgets(dma.filial.pai, sizeof(dma.filial.pai), stdin);
    
    system("clear");
    
    printf("OS DADOS FORAM CADASTRADOS COM SUCESSO!\n");
    enter();
    
    printf("Os dados cadastrados foram: \n");
    
    printf("%s\n",dma.nome);
    printf("%s\n",dma.sobrenome);
    printf("%s\n",dma.local.rua);
    printf("%s\n",dma.mail.telefone);        
    printf("%s\n",dma.mail.email);
    printf("%s\n",dma.filial.mae);
    printf("%s\n",dma.filial.pai);
    
    return 0;
}