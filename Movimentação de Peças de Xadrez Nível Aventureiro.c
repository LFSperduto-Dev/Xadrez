#include <stdio.h>

int main() {
    printf("=== SIMULAÇÃO DE MOVIMENTOS NO XADREZ ===\n\n");

    // 1. Movimento da Torre (5 casas para a direita) - usando FOR
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // 2. Movimento do Bispo (5 casas na diagonal superior direita) - usando WHILE
    printf("Movimento do Bispo (5 casas na diagonal superior direita):\n");
    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Casa %d: Cima, Direita\n", casa_bispo);
        casa_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (8 casas para a esquerda) - usando DO-WHILE
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int casa_rainha = 1;
    do {
        printf("Casa %d: Esquerda\n", casa_rainha);
        casa_rainha++;
    } while (casa_rainha <= 8);

    // 4. Movimento do Cavalo (2 casas para baixo e 1 para esquerda) - usando loops aninhados
    printf("\nMovimento do Cavalo (2 casas para baixo e 1 para esquerda):\n");
    
    // Loop externo (for) para controlar as partes do movimento em L
    for (int parte = 1; parte <= 2; parte++) {
        if (parte == 1) {
            // Primeira parte do L: 2 movimentos para baixo
            int movimentos_baixo = 0;
            while (movimentos_baixo < 2) {
                printf("Passo %d.%d: Baixo\n", parte, movimentos_baixo+1);
                movimentos_baixo++;
            }
        } else {
            // Segunda parte do L: 1 movimento para esquerda
            printf("Passo %d.1: Esquerda\n", parte);
        }
    }

    return 0;
}
