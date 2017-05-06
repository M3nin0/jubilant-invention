//Faça um Programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês, sabendo-se que são descontados 11% para o Imposto de Renda, 8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
//salário bruto.
//quanto pagou ao INSS.
//quanto pagou ao sindicato.
//o salário líquido.
//calcule os descontos e o salário líquido, conforme a tabela abaixo:
//+ Salário Bruto : R$
//- IR (11%) : R$
//- INSS (8%) : R$
//- Sindicato ( 5%) : R$
//= Salário Liquido : R$
//Obs.: Salário Bruto - Descontos = Salário Líquido.


#include <stdio.h>

int main(void){

    float h,vhora, salario;

    printf("Insira a quantidade ganha por hora: \n");
    scanf("%f",&h);
    printf("Insira a quantidade de horas trabalhadas: \n");
    scanf("%f",&vhora);

    salario = h * vhora;

    printf("+ Salário Bruto: R$ %.2f\n", salario);
    printf("- IR (11%) : R$ %.2f\n", (salario * 11) / 100 );
    printf("- INSS (8%) : R$ %.2f\n", (salario * 8) / 100);
    printf("- Sindicato (5%) : R$ %.2f\n", (salario * 5) / 100);
    printf("- Salário Liquido : R$ %.2f\n", salario - ((salario * 11) / 100 + (salario * 8) / 100 + (salario * 5) / 100));

    return 0;
}
