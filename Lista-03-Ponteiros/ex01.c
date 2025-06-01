/*1) Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o
maior endereço.*/

#include <stdio.h>

int main (){

    int *a;
    int *b;
    int c=2,d=3;

    a = &c;
    b = &d;

    if (a > b){
        printf("maior endereco A: %p \n",a);
    } else {
        printf("maior endereco B: %p \n",b);
    }

    return 0;
}