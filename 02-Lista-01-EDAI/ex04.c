/*4) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores maiores
do que 10 ela possui.*/

#include <stdio.h>

int main (){

    int matriz[4][4];
    int i,j,contador=0;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("digite o valor: \n");
            scanf("%d",&matriz[i][j]);
            if (matriz[i][j] > 10){
                contador++;
            }
        }
    }

    printf("a matriz possui -> %d , valores maiores que 10.\n",contador);

    return 0;
}