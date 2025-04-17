#include <stdio.h>

int main() {
    // =============================
    // Simulação do movimento da TORRE
    // =============================

    // A Torre se move em linha reta horizontal ou vertical
    // Vamos simular 5 movimentos para a direita
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a Direita):\n");

     // Usando for para a Torre
     for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); 

     // Simulação do movimento do BISPO 

     int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na Diagonal para Cima Direita):\n");

    int i = 1;
    while (i <= casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

 // Simulação do movimento da RAINHA

 // A Rainha pode se mover em todas as direções
    // Vamos simular 8 movimentos para a Esquerda
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");

    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}

    return 0;
}
