/*5) Leia uma matriz de tamanho 4 × 4. Em seguida, conte e escreva na tela quantos valores
negativos ela possui.*/

#include <stdio.h>

int main (){

    int M[4][4];
    int i,j,cont=0;

    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("digite o valor: \n");
            scanf("%d",&M[i][j]);
            if(M[i][j]<0){
                cont++;
            }

        }
    }

    printf("quantidade de valores negativos: %d",cont);

    return 0;
}