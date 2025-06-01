/*3) Crie um programa que contenha um array de float com 10 elementos. Imprima o endereço de
cada posição desse array.*/

#include<stdio.h>

int main (){

    float array[10];
    int i=0;
    for (i=0;i<10;i++){
        printf("posicao[%d]:%p \n",i,&array[i]);
    }

    return 0;
}