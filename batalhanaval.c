#include <stdio.h>

#define TAM 10      // Tamanho fixo do tabuleiro
#define NAVIO 3     // Valor que representa as partes do navio
#define AGUA 0      // Valor que representa água
#define TAM_NAVIO 3 // Tamanho fixo dos navios

int main() {
    int tabuleiro[TAM][TAM]; // Matriz 10x10 representando o tabuleiro
    int i, j;

    // === 1. Inicializar o tabuleiro com água (0) ===
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // === 2. Definir coordenadas iniciais dos navios ===
    // Navio horizontal
    int linhaH = 2; // linha onde o navio horizontal começa
    int colunaH = 4; // coluna inicial
    // Navio vertical
    int linhaV = 5;  // linha inicial
    int colunaV = 7; // coluna onde o navio vertical começa

    // === 3. Posicionar o navio horizontal ===
    for (j = 0; j < TAM_NAVIO; j++) {
        // Verifica se está dentro do tabuleiro
        if (colunaH + j < TAM) {
            tabuleiro[linhaH][colunaH + j] = NAVIO;
        }
    }

    // === 4. Posicionar o navio vertical ===
    for (i = 0; i < TAM_NAVIO; i++) {
        // Verifica se está dentro do tabuleiro
        if (linhaV + i < TAM) {
            // Verifica se não sobrepõe outro navio
            if (tabuleiro[linhaV + i][colunaV] == AGUA) {
                tabuleiro[linhaV + i][colunaV] = NAVIO;
            }
        }
    }

    // === 5. Exibir o tabuleiro ===
    printf("=== Tabuleiro Batalha Naval ===\n\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
