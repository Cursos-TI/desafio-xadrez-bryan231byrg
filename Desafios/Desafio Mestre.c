#include <stdio.h>

// ------------------ TORRE ------------------
void MoverTorre (int casas){
    if (casas > 0)  {
        printf("Direita!\n");
        MoverTorre(casas - 1);/*Cada casa que andar é -1*/
    }
}

// ------------------ RAINHA ------------------
void MoverRainha(int casas){
    if (casas > 0) {
        printf("Cima!\n");
        printf("Esquerda!\n");
        MoverRainha(casas - 1); /*Cada casa que andar é -1*/
    }
    
}

// ------------------ BISPO ------------------
void MoverBispo(int casas) {
    if (casas > 0) {
        printf("Cima!\n");
        printf("Direita!\n");
        MoverBispo(casas - 1); // Cada casa que andar é -1
    }
}

// ------------------ FUNÇÃO AUXILAR(BISPO) ------------------
void mover(int casasVertical, int casasHorizontal) {
    if (casasVertical <= 0 && casasHorizontal <= 0) return; // Caso base

    if (casasVertical > 0) {
        printf("Cima!\n");
        mover(casasVertical - 1, casasHorizontal);
        return;
    }

    if (casasHorizontal > 0) {
        printf("Direita!\n");
        mover(casasVertical, casasHorizontal - 1);
        return;
    }
}


// ------------------ CAVALO ------------------
void MoverCavalo(int movimentos) {
    for (int m = 0; m < movimentos; m++) { // controla o número de movimentos em L
        int passosCima = 2;
        int passosDireita = 1;

        // Move para cima
        for (int i = 0; i < passosCima; i++) {
            printf("Cima!\n");
        }

        // Move para a direita
        for (int j = 0; j < passosDireita; j++) {
            printf("Direita!\n");
        }

        // Exemplo de uso de continue e break
        if (m == movimentos - 1) {
            break; // último movimento, sai do loop
        } else {
            continue; // passa para o próximo movimento
        }
    }
}


int main() {
    printf("\n-------- Cavalo ---------\n");
    MoverTorre(5); /*Chama a recusiva*/

    printf("\n-------- Rainha ---------\n");
    MoverRainha(8); /*Chama a recusiva*/

    printf("\n-------- Bispo ---------\n");
    MoverBispo(10); /*Chama a recusiva*/

    printf("\n-------- Torre ---------\n");
    MoverCavalo(3); /*Chama a recusiva*/

    return 0;

}