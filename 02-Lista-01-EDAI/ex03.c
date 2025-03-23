/*3) Faça um programa que declare uma matriz de tamanho 5 × 5. Preencha com 1 a diagonal
principal e com 0 os demais elementos. Ao final, escreva a matriz obtida na tela.*/

#include <stdio.h>

int main (){

    int matriz[5][5];
    int i,j;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           matriz[i][j] = (i==j) ? 1 : 0;
        }
    }

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("[%d]",matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}