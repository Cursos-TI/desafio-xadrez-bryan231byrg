#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    printf ("---- Movimentação de Casas ----\n");
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int Torre_Casas = 5;
    const int Bispo_Casas = 5;
    const int Rainha_Casas = 8;

    int i; // Variavel para os Loops

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        printf("Bispo: %d casas na diagonal superior direita\n", Bispo_Casas);
    for (i = 1; i <= Bispo_Casas; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("Torre: %d casas na direita\n", Torre_Casas);
    i = 1;
    while (i <= Torre_Casas)
    {
        printf ("Direita\n");
        i++;
    }
        printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
        printf("\nRainha: %d casas na esquerda\n", Rainha_Casas);
        i = 1;
    do
    {
        printf ("Esquerda\n");
        i++;
    } while (i <= Rainha_Casas);

    
    return 0;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
 
    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


