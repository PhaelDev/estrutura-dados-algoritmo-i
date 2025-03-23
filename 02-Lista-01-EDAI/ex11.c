/*11) Faça um programa que leia uma matriz de tamanho 5 × 5. Calcule e imprima a soma dos
elementos dessa matriz que estão acima da diagonal principal*/

#include <stdio.h>
int main (){

    int matriz[5][5];
    int i,j,soma=0;

    for (i=0;i<5;i++){
        for(j=0;j<5;j++){
           printf("digite o valor: \n");
           scanf("%d", &matriz[i][j]);
           if (i<j){
            soma = soma + matriz[i][j];
           }
        }
    }

    printf("soma dos valores acima da diagonal principal -> %d", soma);

    return 0;
}