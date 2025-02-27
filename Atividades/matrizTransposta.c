/*2. Matriz Transposta
Escreva um programa em C que contenha uma função chamada transposta. Essa função deve receber uma matriz N×M como parâmetro e imprimir a matriz transposta correspondente. A matriz transposta é obtida trocando as linhas pelas colunas.*/

#include <stdio.h>

#define N 3  // Número de linhas da matriz original
#define M 4  // Número de colunas da matriz original

void transposta(int matriz[N][M]) {
    printf("Matriz Transposta (%d x %d):\n", M, N);
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[N][M] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Matriz Original (%d x %d):\n", N, M);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    printf("\n");
    transposta(matriz);
    
    return 0;
}