#include <stdio.h>

int main() {
    int estado1[3]; 
    int estado2[3]; 

    
    printf("1ª ETAPA\n");
    printf("INTERRUPTOR 1: LIGADO\n");
    printf("INTERRUPTOR 2: DESLIGADO\n");
    printf("INTERRUPTOR 3: LIGADO\n\n");
    printf("DIGITE 1 PARA LIGADA / 0 PARA DESLIGADA\n");
    
    for(int i = 0; i < 3; i++) {
        printf("A LÂMPADA %d ESTÁ LIGADA? ", i + 1);
        scanf("%d", &estado1[i]);
    }
    
   
    printf("\n2ª ETAPA\n");
    printf("INTERRUPTOR 1: DESLIGADO\n");
    printf("INTERRUPTOR 2: DESLIGADO\n");
    printf("INTERRUPTOR 3: LIGADO\n\n");
    printf("DIGITE 1 PARA LIGADA / 0 PARA DESLIGADA\n");

    for(int i = 0; i < 3; i++) {
        printf("A LÂMPADA %d ESTÁ LIGADA? ", i + 1);
        scanf("%d", &estado2[i]);
    }
    
  
    for (int i = 0; i < 3; i++) {
        if ((estado1[i] == 1 && estado2[i] == 0) || estado1[i] == 1 && estado2[i] == 1) {
            printf("\nINTERRUPTOR 1 controla a LÂMPADA %d\n", i + 1);
        } else if ((estado1[i] == 0 && estado2[i] == 1) || estado1[i] == 1 && estado2[i] == 1) {
            printf("INTERRUPTOR 3 controla a LÂMPADA %d\n", i + 1);
        } else if ((estado1[i] == 0 && estado2[i] == 0) || estado1[i] == 1 && estado2[i] == 1) {
            printf("INTERRUPTOR 2 controla a LÂMPADA %d\n", i + 1);
        }
    }

    return 0;
