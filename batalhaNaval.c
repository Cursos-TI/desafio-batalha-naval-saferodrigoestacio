#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.

#define LINHA 10
#define COLUNA 10

int main() {
    // Inicializa o tabuleiro de batalha naval
    char linha[COLUNA] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // Inicializa as linhas que representam o tabuleiro
    int tabuleiro[LINHA][COLUNA]; // Inicializa o tabuleiro com 0 (vazio)

    // Utilize um loop para preencher o tabuleiro com 0s
    for(int i = 0; i < LINHA; i++) {
        for(int j = 0; j < COLUNA; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona os navios no tabuleiro
    // Navio 1 (horizontal)
    for (int j = 5; j < 8; j++) {
        for (int i = 8; i < 9; i++) {
            tabuleiro[i][j] = 3;
        }         
    }

    // Navio 2 (vertical)
    for (int i = 2; i < 5; i++) {
        for (int j = 2; j < 3; j++) {
            tabuleiro[i][j] = 3;
        }          
    }

    // Navio 3 (diagonal)
    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][i + 5] = 3;
        }          
    }
    
    // Navio 4 (diagonal)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < COLUNA; j++) {
            tabuleiro[i][2 - i] = 3;
        }          
    }

    printf("Tabuleiro Inicial:\n");
    // Exibe as linha A, B, C, D, E, F, G, H, I, J
    printf("   ");
    for(int i = 0; i < LINHA; i++) {
        printf("%c ", linha[i]);
    }
    printf("\n");

    // Exibe o tabuleiro
    for(int i = 0; i < LINHA; i++) {
        printf("%2d ", i + 1); // Exibe os números de 1 a 10 para as linhas

        for(int j = 0; j < COLUNA; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe o valor do tabuleiro (0 ou 3)
        }
        printf("\n");
    }

    return 0;
}
