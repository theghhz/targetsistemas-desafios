#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, além de informar a quantidade de vezes em que ela ocorre.
*/

int quantidadeLetrasA(char texto[]){
    int count = 0;
    int n=0;

    while(texto[n] != '\0'){
        if(texto[n] == 'a' || texto[n]== 'A')
            count++;
        n++;
    }

    return count;
}

int main(){
  char texto[1000];

  printf("Digite o texto: ");
  scanf("%1000s", texto);

  printf("%s",texto);
  
  printf("Quantidade de Letras a/A : %d",quantidadeLetrasA(texto));
}