/*2) Faça um programa que leia uma string e imprima as quatro primeiras letras dela.*/

#include <stdio.h>
#include <string.h>

int main (){

    char palavra[10];

    printf("Digite uma palavra? \n");
    fgets(palavra, 10, stdin);

    printf("as 4 primeiras letras da palavra -> %.4s \n", palavra);

    return 0;
}