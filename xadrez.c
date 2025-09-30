#include <stdio.h>

int main() {
    
    // Movimento da Torre
    
    int casasTorre = 5;  // número de casas da torre.
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    
    // Movimento do Bispo 
    
    int casasBispo = 5;  // número de casas do bispo.
    int contadorBispo = 1;
    printf("Movimento do Bispo:\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    
    // Movimento da Rainha
    
    int casasRainha = 8;  // número de casas da rainha.
    int contadorRainha = 1;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
