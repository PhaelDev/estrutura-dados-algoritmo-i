/*Sem usar a função strlen(), faça um programa que leia uma string e imprima quantos
caracteres ela possui.*/

#include <stdio.h>

int main (){

    char palavra[50];
    int i=0,cont=0;

    printf("digite uma palavra: ");
    fgets(palavra,sizeof(palavra),stdin);

    while (palavra[i] != '\0'){
        if (palavra[i] == '\n'){
            palavra[i] = '\0';
            break;
        }
        i++;
    }

    i=0;

    while (palavra[i] != '\0') {
        cont++;
        i++;
    }

    printf("A palavra tem %d caracteres.\n", cont);

    return 0;
}