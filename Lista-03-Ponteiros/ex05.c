/*5) Crie um programa que contenha um array de inteiros com cinco elementos. Utilizando apenas
aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>

int main (){

    int Array[5];
    int i;

    for (i=0;i<5;i++){
        printf("digite o valor[%d]: \n", i);
        scanf("%d",(Array + i));
    }

    for (i=0;i<5;i++){
        printf("DOBRO[%d]: %d \n",i,(*(Array + i)*2));
    }



    return 0;
}