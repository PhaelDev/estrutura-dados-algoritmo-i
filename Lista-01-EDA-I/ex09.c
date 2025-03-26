/*9) Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3 × 3 de números
inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição deverá
armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array. Por exemplo, a
matriz*/

#include <stdio.h>

int main (){

    int matriz[3][3];
    int vetor[3]={0,0,0};
    int i,j;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("digite o valor: \n");
            scanf("%d",&matriz[i][j]);
            vetor[j] = vetor[j] + matriz[i][j];
        }
    }

    for (i=0;i<3;i++){
        printf("[%d] ",vetor[i]);
    }





    return 0;
}
