/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida,
calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1, o número de alunos cuja
pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3. */

#include <stdio.h>

int main (){

    float matriz[10][3];
    int menorNProva1=0,menorNProva2=0,menorNProva3=0;
    int i,j;

    for(i=0;i<10;i++){
        for(j=0;j<3;j++){
            printf("Digite a nota: \n");
            scanf("%f",&matriz[i][j]);
        }
        if (matriz[i][0]<=matriz[i][1] && matriz[i][0] <= matriz[i][2]){
            menorNProva1++;
        } else if (matriz[i][1]<=matriz[i][0] && matriz[i][1] <= matriz[i][2]){
            menorNProva2++;
        } else {
            menorNProva3++;
        }
    }

    printf("Numero de alunos cuja pior nota foi na prova 1: %d\n", menorNProva1);
    printf("Numero de alunos cuja pior nota foi na prova 2: %d\n", menorNProva2);
    printf("Numero de alunos cuja pior nota foi na prova 3: %d\n", menorNProva3);



    return 0;
}