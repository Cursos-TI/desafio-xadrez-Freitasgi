#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
    // Nível Novato - Movimentação das Peças
    // Variaveis
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasCavalo = 2;
    int casaCavalo = 1;

    // Movimentação do Bispo
    printf("\nMovimentação do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita (%d)\n", i);
        i++;
    }

    // Implementação de Movimentação da Torre
    printf("\nMovimentação da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita (%d)\n", i);
    }

    // Implementação de Movimentação da Rainha
     printf("\nMovimentação da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda (%d)\n", j);
        j++;
    } while (j <= casasRainha);

    //Implementação de Movimentação do Cavalo
    printf("\nMovimentação do Cavalo:\n");
    for(int k = 1; k <= casasCavalo; k++){
        printf("Baixo \n");
    }

        int l = 1;

        do {
            printf("Esquerda (%d)\n", l);
            l++;
        } while (l <= casaCavalo);

    printf("\n");

    
    return 0;
}
