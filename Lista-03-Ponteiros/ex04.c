/*4) Crie um programa que contenha uma matriz de float com três linhas e três colunas. Imprima o
endereço de cada posição dessa matriz.*/

#include<stdio.h>

int main (){

    float Matriz[3][3];
    int i=0,j=0;

    for (i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("POSICAO[%d][%d]: %p \n",i,j,&Matriz[i][j]);
        }
    }

    return 0;
}