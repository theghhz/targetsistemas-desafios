#include <stdio.h>
#include <stdlib.h>

/*Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...),
escreva um programa na linguagem que desejar onde, informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence
ou não a sequência.*/

int fibonacci(int n){
    int a=0,b=1,c=0;
    
    while(c < n){
        c = a+b;
        a = b;
        b =c;
    }

    if(c==n || n==0)
        return 1;
    else
        return 0;
 
}

int main(){
    int n;

    printf("Número: ");
    scanf("%d",&n);

    if(fibonacci(n))
        printf("O número pertence a sequência");
    else
        printf("O número não percente a sequência");

    return 0;
}