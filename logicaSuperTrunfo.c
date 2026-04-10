#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =======================================================
    // DADOS DA CARTA 1 (Pré-definidos)
    // =======================================================
    char estado1[3] = "SP";
    char codigo1[4] = "A01";
    char nome1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos_turisticos1 = 50;
    
    float densidade1 = (float) populacao1 / area1;
    float pib_capita1 = (pib1 * 1000000000.0f) / (float) populacao1;

    // =======================================================
    // DADOS DA CARTA 2 (Pré-definidos)
    // =======================================================
    char estado2[3] = "RJ";
    char codigo2[4] = "B01";
    char nome2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 331.06;
    int pontos_turisticos2 = 30;
    
    float densidade2 = (float) populacao2 / area2;
    float pib_capita2 = (pib2 * 1000000000.0f) / (float) populacao2;

    // =======================================================
    // LÓGICA DE COMPARAÇÃO (Usando if e if-else)
    // =======================================================
    // O atributo escolhido diretamente no código é a População.
    
    printf("Comparacao de cartas (Atributo: Populacao):\n\n");
    printf("Carta 1 - %s (%s): %d\n", nome1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", nome2, estado2, populacao2);
    
    printf("\nResultado: ");
    
    // Estrutura de decisão para verificar qual população é maior
    if (populacao1 > populacao2) {
        printf("Carta 1 (%s) venceu!\n", nome1);
    } else if (populacao2 > populacao1) {
        printf("Carta 2 (%s) venceu!\n", nome2);
    } else {
        // Caso os valores sejam exatamente iguais
        printf("Empate entre %s e %s!\n", nome1, nome2);
    }

    return 0;
}
