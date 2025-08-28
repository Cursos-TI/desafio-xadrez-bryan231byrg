#include <stdio.h>

/*
  Simulação simples de movimentos de peças de xadrez.
   - Torre: 5 casas para a direita  -> usa for
   - Bispo: 5 casas na diagonal cima+direita -> usa while
   - Rainha: 8 casas para a esquerda -> usa do-while
*/

int main() {
    /* Definição do número de casas (valores fixos conforme enunciado) */
    int torre_passos = 5;   /* Torre: move 5 casas para a direita */
    int bispo_passos = 5;   /* Bispo: move 5 casas na diagonal (Cima, Direita) */
    int rainha_passos = 8;  /* Rainha: move 8 casas para a esquerda */

    int i; // contador genérico

    // -------- Torre (usa for) --------

    printf("Movimento da Torre (For) - %d casas para a direita:\n", torre_passos);
    for (i = 1; i <= torre_passos; i++) {
        // imprime a direção a cada casa percorrida
        printf("Casa %d: Direita\n", i);
    }
    printf("\n");

    // -------- Bispo (usa while) --------
    printf("Movimento do Bispo (while) - %d casas na diagonal cima, direita:\n", bispo_passos);
    i = 1;
    while (i <= bispo_passos) {
        printf("Casa %d: Cima, Direita\n", i);
        i++; // incrementa contador 
    }
    printf("\n");

    // -------- Rainha (usa do-while) --------
    printf("Movimento da Rainha (do-while) - %d casas para a esquerda:\n", rainha_passos);
    i = 1;
    if (rainha_passos > 0) {
        do {
            printf("Casa %d: Esquerda\n", i);
            i++;
        } while (i <= rainha_passos);
    } else {
        /* Caso a variável fosse zero ou negativa (não necessário validar segundo enunciado) */
        printf("Nenhum movimento definido para a Rainha.\n");
    }

    return 0;
}
