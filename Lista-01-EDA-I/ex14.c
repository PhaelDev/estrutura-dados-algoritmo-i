/*14) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule a soma dos elementos dessa
matriz que pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos
que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois
valores.*/

#include <stdio.h>
int main (){

    int matriz[5][5];
    int i,j,soma1=0,soma2=0;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("digite o valor: \n");
           scanf("%d", &matriz[i][j]);
           if ((i!=j) && (i+j!=4)){
            soma1 = soma1 + matriz[i][j];
           } else {
            soma2 = soma2 + matriz[i][j];
           }
        }
    }

    printf("Soma dos valores que nao pertencem nem a diagonal principal nem a secundaria: %d\n", soma1);
    printf("Soma dos valores que pertencem a diagonal principal ou secundaria: %d\n", soma2);
    printf("Diferenca entre as somas: %d\n", soma2 - soma1);

    return 0;
}