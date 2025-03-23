/*13) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos
elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.*/

#include <stdio.h>
int main (){

    int matriz[5][5];
    int i,j,soma=0;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("digite o valor: \n");
           scanf("%d", &matriz[i][j]);
           if ((i==j) || (i+j==5)){
            soma = soma + matriz[i][j];
           }
        }
    }

    printf("soma dos valores que nao pertencem nem a diagonal principal e nem a secundaria -> %d", soma);

    return 0;
}