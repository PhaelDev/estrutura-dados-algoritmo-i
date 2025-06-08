/*7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string
ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <string.h>

int verifica_substring(char *str1, char *str2){
    //ponteiro pra string principal
    char *p_str1 = str1; // p_str1 começa apontando para o início de str1

    while (*p_str1 != '\0')
    {
        if (*p_str1 == *str2){ //encontrando um match
            char *aux_str1 = p_str1; //ponteiro auxiliar para nao perder a posição da str1, depois do match
            char *aux_str2 = str2; //ponteiro auxiliar para o inicio da string 2

            //loop secundário verifica se a sequência bate
            while (*aux_str2 != '\0' && *aux_str1 == *aux_str2){//comparando as 2 strings
                aux_str1++;//avança a string 1
                aux_str2++;//avança a string 2
            }
            // Se o ponteiro 'p_str2' chegou ao final ('\0'),
            // significa que todos os caracteres da substring foram encontrados em sequência.
            if (*aux_str2 == '\0'){//se chegar no final da p_str2 é pq deu match!
                return 1;//encontrou a substring!
            }

        }       
        // Se não encontrou ou a sequência não bateu, avança para o próximo caractere da string principal
        p_str1++; //verificação, se não tiver um valor nulo ele passa pra proxima letra da string
    }
    // Se o loop principal terminou e nada foi retornado, a substring não foi encontrada.
    return 0; // Não encontrou! Retorna falso.
    
}

int main (){

    char palavra[101];
    char busca[51];

    printf("Digite a palavra ou frase principal: \n");
    fgets(palavra,101, stdin);

    printf("Digite a palavra a ser buscada: \n");
    fgets(busca,51,stdin);

    //Remover o caractere '\n' que o fgets() inclui
    palavra[strcspn(palavra, "\n")] = '\0';
    busca[strcspn(busca, "\n")] = '\0';

    if (verifica_substring(palavra,busca)){
        printf("\nResultado: POSITIVO o trecho \"%s\" FOI encontrado em \"%s\". \n",busca,palavra);
    } else {
        printf("\nResultado: NEGATIVO o trecho \"%s\" NAO FOI encontrado em \"%s\". \n",busca,palavra);
    }


    return 0;
}