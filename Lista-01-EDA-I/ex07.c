/*7) Leia uma matriz de tamanho 3 × 3. Em seguida, imprima a soma dos valores contidos em sua
diagonal secundária. */
#include <stdio.h>

int main (){

    int mat[3][3];
    int i,j,soma=0;

    for (i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("digite o valor? \n");
            scanf("%d", &mat[i][j]);
            if (i+j == 2){
                soma = soma + mat[i][j];
            }
        }
    }

    printf("soma dos valores da diagonal secundaria -> %d \n",soma);

    return 0;
}