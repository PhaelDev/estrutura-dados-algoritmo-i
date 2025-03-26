/*15) Faça um programa que leia uma matriz A de tamanho 5 × 5. Em seguida, calcule e imprima a
matriz B, sendo que B = A^2 .*/

#include <stdio.h>

int main() {
    int A[5][5], B[5][5];
    int i, j, k;

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Digite o valor para a posicao A[%d][%d]: \n", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            B[i][j] = 0;
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            for (k = 0; k < 5; k++) {
                B[i][j] += A[i][k] * A[k][j];
            }
        }
    }

    printf("Matriz B (A^2):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}