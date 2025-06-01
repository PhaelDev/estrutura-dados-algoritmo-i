/*6) Crie um programa que contenha um array com cinco elementos inteiros. Leia esse array do
teclado e imprima o endereço das posições contendo valores pares.*/

#include<stdio.h>

int main (){

    int Array[5];
    int i;

    for(i=0;i<5;i++){
        printf("valor [%d]: \n",i);
        scanf("%d",(Array + i));
    }

    for (i=0;i<5;i++){
        if (Array[i] % 2 == 0){
            printf("valor positivo, posicao[%d]: %p \n",i,&Array[i]);
        }
    }

    return 0;
}

