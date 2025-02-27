/*Exercício 3: Invertendo um Vetor
Crie um programa que leia um vetor de 10 números inteiros e imprima os
números na ordem inversa.*/

#include <stdio.h>

int main (){

    int vetor[10];
    int i,j;
    for (i=0;i<10;i++){
        printf("digite o valor para inserir no vetor: \n");
        scanf("%d",&vetor[i]);
    }

    for (j=9;j>=0;j--){
        printf("valor: %d \n",vetor[j]);
    }

    return 0;
}