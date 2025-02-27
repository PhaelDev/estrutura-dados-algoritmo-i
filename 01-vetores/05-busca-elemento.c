/*Busca de elemento em um vetor*/

#include <stdio.h>

#define TAMANHO 5

int main (){

    int vetor[TAMANHO]={10,20,30,40,50};
    int elemento = 30;
    int i,indice =-1;

    for (i=0;i<TAMANHO;i++){
        if ((vetor[i]) == elemento){
            indice=1;
            break;
        }
    }

    if (indice != -1){
        printf("Elemento encontrado no vetor!\n");
    } else {
        printf("Elemento não encontrado no vetor!\n");
    }

    return 0;
}