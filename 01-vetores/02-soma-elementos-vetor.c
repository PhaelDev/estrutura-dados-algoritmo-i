/*Exercício 2: Soma de Elementos do Vetor
Escreva um programa que leia 5 números inteiros e armazene-os em um
vetor. O programa deve calcular e imprimir a soma de todos os números.*/

#include <stdio.h>

int main (){

    int vetor[5];
    int soma=0;

    for (int i=0;i<5;i++){
        printf("digite o elemento para soma: \n");
        scanf("%d", &vetor[i]);
        soma = soma + vetor[i];
    }

    printf("A soma dos numeros: %d\n", soma);

    return 0;
}