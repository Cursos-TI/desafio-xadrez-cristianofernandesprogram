#include <stdio.h>

// Torre
// 5 casas para a direita

void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) {
        return; 
    }
    printf("Direita\n");
    moverTorre(casasRestantes - 1); 
}

// Bispo
// 5 casas para cima e para a direita

void moverBispo(int casasRestantes) {
    if (casasRestantes == 0) {
        return; 
    }


    for (int v = 0; v < 1; v++) {
        printf("Cima ");
        for (int h = 0; h < 1; h++) { 
            printf("Direita\n");
        }
    }

    moverBispo(casasRestantes - 1); 
}

// Rainha
// 8 casas para a esquerda

void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) {
        return; 
    }
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1); 
}


// Cavalo
// duas casas para cima e uma para a direita


void moverCavalo() {
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int v = 1; v <= movimentosVerticais; v++) {
        if (v == 0) {
            continue; 
        }
        printf("Cima\n");
        if (v == movimentosVerticais) {
           
            for (int h = 1; h <= movimentosHorizontais; h++) {
                printf("Direita\n");
                break; 
            }
        }
    }
}


int main() {
    // Torre
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
