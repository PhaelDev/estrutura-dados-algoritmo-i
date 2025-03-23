/*12) Faça um programa que leia uma matriz de tamanho 6 × 6. Calcule e imprima a soma dos
elementos dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>
int main (){

    int matriz[6][6];
    int i,j,soma=0;

    for (i=0;i<6;i++){
        for(j=0;j<6;j++){
           printf("digite o valor: \n");
           scanf("%d", &matriz[i][j]);
           if (i>j){
            soma = soma + matriz[i][j];
           }
        }
    }

    printf("soma dos valores abaixo da diagonal principal -> %d", soma);

    return 0;
}