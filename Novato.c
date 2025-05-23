#include <stdio.h>

int main(){
    // --------- Movimento da TORRE com for ---------
    // A Torre se move em linha reta horizontal (direita) - 5 casas
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n"); // Separação visual entre peças

    // --------- Movimento do BISPO com while ----------
    // O Bispo se move na diagonal (cima e direita) - 5 casas
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j <5){
        printf("Cima Direita\n");
        j++;
    }

    printf("\n"); // Separação visual entre peças

    // ----------- Movimento da RAINHA com do-while
    // A Rainha se move em todas as direções - aui: 8 casas para a esquerda
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    return 0;

}
