#include <stdio.h>

void bomba(int estado1[], int estado2[]){
    printf("\nestado1 ");
    for(int i=0; i<3; i++){
        printf("[%d]", estado1[i]);
    }
    printf("\nestado2 ");
    for(int i=0; i<3; i++){
        printf("[%d]", estado2[i]);
    }
}

int main() {
    int estado1[3]; // Estado das lâmpadas na primeira etapa
    int estado2[3]; // Estado das lâmpadas na segunda etapa

    // 1ª Etapa
    printf("1ª ETAPA\n");
    printf("INTERRUPTOR 1: LIGADO\n");
    printf("INTERRUPTOR 2: DESLIGADO\n");
    printf("INTERRUPTOR 3: LIGADO\n\n");
    printf("DIGITE 1 PARA LIGADA / 0 PARA DESLIGADA\n");
    
    for(int i = 0; i < 3; i++) {
        printf("A LÂMPADA %d ESTÁ LIGADA? ", i + 1);
        scanf("%d", &estado1[i]);
    }
    
    bomba(estado1,estado2);
    
    // 2ª Etapa
    printf("\n2ª ETAPA\n");
    printf("INTERRUPTOR 1: DESLIGADO\n");
    printf("INTERRUPTOR 2: DESLIGADO\n");
    printf("INTERRUPTOR 3: LIGADO\n\n");
    printf("DIGITE 1 PARA LIGADA / 0 PARA DESLIGADA\n");

    for(int i = 0; i < 3; i++) {
        printf("A LÂMPADA %d ESTÁ LIGADA? ", i + 1);
        scanf("%d", &estado2[i]);
    }
    
    bomba(estado1,estado2);
    
    // Identificando qual interruptor controla qual lâmpada
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