/*9) Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize índices para
percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void print_vetor(int *vetor, int tamanho){

    int *ptr = vetor;
    int i;

    for (i=0; i < tamanho; i++){
        printf("VETOR [%d]: %d\n",i,*(ptr + i));
    }
}

int main (){

    int numeros[5];
    int i;

    int tam = sizeof(numeros)/sizeof(numeros[0]);

    for (i = 0; i < tam; i++)
    {
        printf("digite o valor a ser adicionado ao vetor: \n");
        scanf("%d", numeros + i);
    }
 
    print_vetor(numeros,tam);

    return 0;
}