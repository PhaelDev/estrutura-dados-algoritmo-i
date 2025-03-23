/*2) Faça um programa que leia uma matriz de tamanho 4 × 4. Imprima na tela o maior valor contido
nessa matriz e a sua localização (linha e coluna).*/

#include <stdio.h>

int main (){

    int matriz[4][4];
    int i,j,maior;

    for (i=0;i<4;i++){
        for (j=0;j<4;j++){
            printf("digite o valor: \n");
            scanf("%d",&matriz[i][j]);
            if (matriz[i][j] >= maior){
                maior = matriz[i][j];
            }
        }
    }

    printf("O maior valor -> %d",maior);


    return  0;
}