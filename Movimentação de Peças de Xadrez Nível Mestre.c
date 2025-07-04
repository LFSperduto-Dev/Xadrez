#include <stdio.h>

// Função recursiva para movimento da Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Torre: Direita (casa %d)\n", casas);
    moverTorre(casas - 1);
}

// Função recursiva para movimento do Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    
    // Loop aninhado para demonstrar movimento diagonal
    for (int v = 1; v <= casas; v++) {
        for (int h = 1; h <= casas; h++) {
            if (v == h) { // Apenas nas diagonais (v = h)
                printf("Bispo: Cima, Direita (casa %d)\n", v);
                break; // Apenas uma direção por passo vertical
            }
        }
    }
    
    // Versão recursiva
    printf("Bispo (recursivo): Cima, Direita (casa %d)\n", casas);
    moverBispo(casas - 1);
}

// Função recursiva para movimento da Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Rainha: Esquerda (casa %d)\n", casas);
    moverRainha(casas - 1);
}

// Função para movimento complexo do Cavalo
void moverCavalo() {
    int movimentos = 0;
    
    for (int parte = 1; parte <= 2; parte++) {
        for (int passo = 1; passo <= 2; passo++) {
            if (parte == 2 && passo == 2) {
                break; // Cavalo só faz 1 movimento na segunda parte
            }
            
            movimentos++;
            
            if (parte == 1) {
                printf("Cavalo: Cima (passo %d.%d)\n", parte, passo);
                if (passo == 2) continue; // Prepara para próxima parte
            } else {
                printf("Cavalo: Direita (passo %d.%d)\n", parte, passo);
            }
        }
    }
}

int main() {
    printf("=== SIMULAÇÃO AVANÇADA DE MOVIMENTOS NO XADREZ ===\n\n");
    
    // Movimento recursivo da Torre (5 casas)
    printf("--- Movimento da Torre ---\n");
    moverTorre(5);
    printf("\n");
    
    // Movimento do Bispo com recursão e loops aninhados (5 casas)
    printf("--- Movimento do Bispo ---\n");
    moverBispo(5);
    printf("\n");
    
    // Movimento recursivo da Rainha (8 casas)
    printf("--- Movimento da Rainha ---\n");
    moverRainha(8);
    printf("\n");
    
    // Movimento complexo do Cavalo (2 cima, 1 direita)
    printf("--- Movimento do Cavalo ---\n");
    moverCavalo();
    printf("\n");
    
    return 0;
}