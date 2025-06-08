/*8) Crie uma função que receba dois parâmetros: um vetor e um valor do mesmo tipo do vetor. A
função deverá preencher os elementos de vetor com esse valor. Não utilize índices para percorrer o
vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

//função void pq ela nao retorna nada
void preencher_vetor(int *vetor, int valor, int tamanho){
    int *ptr_atual = vetor; //ponteiro para caminhar pelo vetor
    
    //calcula o endereço de memória após o ultimo elemento
    //o que vai ser o ponto de parada
    int *ptr_final = vetor + tamanho;

    //loop que continua enquanto o ponteiro atual nao encontrar com o ponteiro final
    while (ptr_atual < ptr_final){
        *ptr_atual = valor;
        ptr_atual++;
    }
}

int main (){

    int vetor[10];
    int numero,i;

    //uma forma segura pra calcular o tamanho do vetor
    int tam = sizeof(vetor)/sizeof(vetor[0]);

    printf("\nVetor antes do preenchimento!\n\n");
    for (i=0;i<tam;i++){
        printf("%d  ", vetor[i]);//imprime o lixo de memória
    }
    printf("\n\nDigite o valor a ser preenchido no vetor: \n");
    scanf("%d",&numero);
    
    preencher_vetor(vetor, numero,tam);
    
    printf("\n\n");

    printf("Vetor depois do preenchimento do valor %d \n",numero);
    //imprimir usando ponteiro
    for(i=0;i<tam;i++){
        printf("%d  ", *(vetor + i));//usa ponteiro pra acessar o valor

    }

    printf("\n");

    return 0;

}