#include <stdio.h>

void main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    } agora = {
        13, 28, 57
    };

    printf("%i:%i:%i\n",agora.hora,agora.minuto,agora.segundo);
    
    struct horario depois;
    
    //0 + 10
    //depois.horas = 0 = agora.hora = 23 + 10; 
    
    depois.hora = agora.hora + 10;
    
    printf("Horas depois\n");
    printf("%i:%i:%i\n", depois.hora,agora.minuto,agora.segundo);

}