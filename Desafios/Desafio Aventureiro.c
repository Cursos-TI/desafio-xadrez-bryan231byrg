#include <stdio.h>

int main() {
    int casasBaixo = 2;
    int casasEsquerda = 1;

    int i;

    // loop externo (controla os movimentos para baixo)
    for (i = 0; i < casasBaixo; i++) {
        printf("O cavalo se moveu uma casa para BAIXO!\n");
    }

    int j = 0;
    // loop interno (controla os movimentos para a esquerda)
    while (j < casasEsquerda) {
        printf("O cavalo se moveu uma casa para a ESQUERDA!\n");
        j++; // incrementa para não ficar em loop infinito
    }

    return 0;
}
