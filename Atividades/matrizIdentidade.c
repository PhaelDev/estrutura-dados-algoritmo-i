/*1. Criar uma Matriz Identidade
Escreva um programa em C que solicite ao usuário um número inteiro N e crie uma matriz identidade de ordem N. A matriz identidade é uma matriz quadrada onde todos os elementos da diagonal principal são iguais a 1, e os demais elementos são iguais a 0. O programa deve imprimir a matriz gerada na tela.*/

#include <stdio.h>

int main (){

    int n,i,j;
    printf("Digite a ordem para a Matriz Identidade:");
    scanf("%d",&n);

    int matriz[n][n];

    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            if(i==j){
                matriz[i][j]=1;
            } else {
                matriz[i][j]=0;
            }
        }
    }

    for(i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}