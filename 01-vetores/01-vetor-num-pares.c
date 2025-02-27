/*Exercício 1: Vetor de Números Pares
Crie um programa que declare um vetor de inteiros com 10 posições e
preencha o vetor com os números pares de 2 a 20. Em seguida, imprima o
vetor.*/

#include <stdio.h>

#define TAM 10

int main (){

    int pares=0,v[TAM];

    for (int i=0;i<=20;i++){
        if((i%2==0) && (i!=0)){
            v[pares]=i;
            pares++;
        }
    }

    printf("numeros pares:\n");

    for (int j=0;j<TAM;j++){
        printf("%d \n",v[j]);
    }

    return 0;
}