/*1) Faça um programa que leia uma matriz de tamanho 3 × 3. Imprima na tela o menor valor
contido nessa matriz.*/

#include <stdio.h>

int main (){

    int m[3][3];
    int i,j,menor;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("digite o valor: \n");
            scanf("%d",&m[i][j]);
            if (m[i][j] <= menor){
                menor = m[i][j];
            }
        }
    }

    printf("o menor valor contido nesta matriz e o valor: %d", menor);


    return 0;
}