#include <stdio.h>

int main() {
    // Torre
    int casasTorre = 5;  // número de casas da torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo
       int casasBispo = 5;  // número de casas do bispo
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Rainha
    int casasRainha = 8;  // número de casas da rainha
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // Cavalo
    int casasBaixo = 2;    // duas casas para baixo
    int casasEsquerda = 1; // uma casa para esquerda

    printf("Movimento do Cavalo:\n");

    // Loop externo for
    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");
    }

    // Loop interno while
    int contadorEsquerda = 0;
    while (contadorEsquerda < casasEsquerda) {
        printf("Esquerda\n");
        contadorEsquerda++;
    }

    return 0;
}
