/*1) Faça um programa que leia uma string e a imprima na tela.*/

#include <stdio.h>

int main (){

    char palavra[10];

    printf("Digite uma palavra? \n");
    fgets(palavra, 10, stdin);

    printf("a palavra digitada -> %s",palavra);

    return 0;
}