/*2) Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main (){

    int a,b;
    int *pontA;
    int *pontB;

    printf("Digite o valor de A: \n");
    scanf("%d",&a);
    printf("Digite o valor de B: \n");
    scanf("%d",&b);

    pontA=&a;
    pontB=&b;

    if (pontA > pontB){
        printf("maior endereco A: %d \n",*pontA);
    } else {
        printf("maior endereco B: %d \n",*pontB);
    }

    return 0;
}