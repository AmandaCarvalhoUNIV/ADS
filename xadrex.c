#include <stdio.h>

/*
 -----------------------------------------------------
  Projeto: Movimentando as Peças do Xadrez
  Disciplina: Introdução à Programação em C
  Autor: Amanda Carvalho    
  Descrição:
    Este programa simula o movimento de três peças do xadrez:
    - Torre (usando o laço FOR)
    - Bispo (usando o laço WHILE)
    - Rainha (usando o laço DO-WHILE)
    
    Cada peça executa um número fixo de movimentos e exibe,
    no console, a direção do deslocamento em cada casa.
 -----------------------------------------------------
*/

int main() {
    // ================================
    //  Movimento da TORRE (usando FOR)
    // ================================
    // A Torre move-se em linha reta (horizontal ou vertical).
    // Neste caso, simularemos o movimento da Torre
    // 5 casas para a direita.
    int i;                      // variável de controle do laço
    int movimentoTorre = 5;     // número de casas a mover

    printf("=== Movimento da TORRE ===\n");

    // O laço FOR é ideal quando sabemos quantas vezes repetir.
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (casa %d)\n", i);
    }

    // ================================
    //  Movimento do BISPO (usando WHILE)
    // ================================
    // O Bispo move-se nas diagonais.
    // Aqui, simularemos o movimento do Bispo
    // 5 casas na diagonal "Cima e Direita".
    int movimentoBispo = 5;     // número de casas
    int contador = 1;           // variável de controle

    printf("\n=== Movimento do BISPO ===\n");

    // O laço WHILE é usado quando a condição é verificada antes da execução.
    while (contador <= movimentoBispo) {
        printf("Cima, Direita (casa %d)\n", contador);
        contador++;
    }

    // ================================
    //  Movimento da RAINHA (usando DO-WHILE)
    // ================================
    // A Rainha combina os movimentos da Torre e do Bispo.
    // Aqui, simularemos o movimento da Rainha
    // 8 casas para a esquerda.
    int movimentoRainha = 8;    // número de casas
    int passo = 1;              // variável de controle

    printf("\n=== Movimento da RAINHA ===\n");

    // O laço DO-WHILE garante que o bloco seja executado pelo menos uma vez.
    do {
        printf("Esquerda (casa %d)\n", passo);
        passo++;
    } while (passo <= movimentoRainha);

    // ================================
    // Fim da simulação
    // ================================
    printf("\n=== Fim da Simulação das Peças ===\n");

    return 0;
}
