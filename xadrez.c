#include <stdio.h>


void moverTorre(int casas) {
    if (casas <= 0) return; 
    printf("Direita\n");
    moverTorre(casas - 1); 
}


void moverBispoRecursivo(int casas) {
    if (casas <= 0) return; 
    printf("Cima, Direita\n");
    moverBispoRecursivo(casas - 1); 
}


void moverBispoLoops(int casas) {
    for (int vertical = 0; vertical < casas; vertical++) {
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
}


void moverRainha(int casas) {
    if (casas <= 0) return; 
    printf("Esquerda\n");
    moverRainha(casas - 1); 
}


void moverCavalo(int movimentos) {
    int passosVerticais = 2; 
    int passosHorizontais = 1; 
    
    for (int i = 0; i < movimentos; i++) {
       
        for (int v = 0; v < passosVerticais; v++) {
            printf("Cima\n");
        }
        
       
        for (int h = 0; h < passosHorizontais; h++) {
            printf("Direita\n");
        }
        
       
        if (i < movimentos - 1) {
            printf("--- Movimento completo em L ---\n");
        }
    }
}

int main() {
    const int casasTorre = 5;
    const int casasBispo = 5;
    const int casasRainha = 8;
    const int movimentosCavalo = 3;
    
    printf("Movimento da Torre (%d casas para a direita):\n", casasTorre);
    moverTorre(casasTorre);
    
    printf("\nMovimento do Bispo - Recursivo (%d casas na diagonal superior direita):\n", casasBispo);
    moverBispoRecursivo(casasBispo);
    
    printf("\nMovimento do Bispo - Loops Aninhados (%d casas na diagonal superior direita):\n", casasBispo);
    moverBispoLoops(casasBispo);
    
    printf("\nMovimento da Rainha (%d casas para a esquerda):\n", casasRainha);
    moverRainha(casasRainha);
    
    printf("\nMovimento do Cavalo (%d movimentos em L para cima/direita):\n", movimentosCavalo);
    moverCavalo(movimentosCavalo);
    
    return 0;
}
