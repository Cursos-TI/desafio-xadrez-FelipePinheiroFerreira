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

    printf("\n");  // Separador visual

    return 0;
}
