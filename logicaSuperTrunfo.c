#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =======================================================
    // DADOS DA CARTA 1 (Pré-definidos - Países)
    // =======================================================
    char pais1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8510000.0f;
    float pib1 = 1920.0f; // Em bilhões
    int pontos_turisticos1 = 150;
    
    // Cálculo da Densidade
    float densidade1 = (float) populacao1 / area1;

    // =======================================================
    // DADOS DA CARTA 2 (Pré-definidos - Países)
    // =======================================================
    char pais2[50] = "Argentina";
    int populacao2 = 45800000;
    float area2 = 2780000.0f;
    float pib2 = 487.2f; // Em bilhões
    int pontos_turisticos2 = 80;
    
    // Cálculo da Densidade
    float densidade2 = (float) populacao2 / area2;

    // =======================================================
    // MENU INTERATIVO
    // =======================================================
    int opcao;

    printf("=== SUPER TRUNFO: BATALHA DE PAISES ===\n\n");
    printf("Escolha o atributo para a comparacao:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (Menor vence!)\n");
    printf("\nDigite o numero da sua escolha: ");
    scanf("%d", &opcao);

    printf("\n=========================================\n");

    // =======================================================
    // LÓGICA DE COMPARAÇÃO (Switch com If-Else aninhados)
    // =======================================================
    switch (opcao) {
        case 1:
            printf("Atributo escolhido: Populacao\n\n");
            printf("Carta 1 - %s: %d habitantes\n", pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", pais2, populacao2);
            printf("\n");

            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Area\n\n");
            printf("Carta 1 - %s: %.2f km²\n", pais1, area1);
            printf("Carta 2 - %s: %.2f km²\n", pais2, area2);
            printf("\n");

            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n\n");
            printf("Carta 1 - %s: %.2f bilhoes\n", pais1, pib1);
            printf("Carta 2 - %s: %.2f bilhoes\n", pais2, pib2);
            printf("\n");

            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Numero de Pontos Turisticos\n\n");
            printf("Carta 1 - %s: %d pontos\n", pais1, pontos_turisticos1);
            printf("Carta 2 - %s: %d pontos\n", pais2, pontos_turisticos2);
            printf("\n");

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demografica\n\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", pais1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km²\n", pais2, densidade2);
            printf("\n");

            // ATENÇÃO À REGRA ESPECIAL: Aqui, quem tem o MENOR valor vence!
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu por ter a menor densidade!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu por ter a menor densidade!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            // Lida com entradas inválidas do usuário
            printf("Opcao invalida! Por favor, execute o programa novamente e escolha um numero de 1 a 5.\n");
            break;
    }

    printf("=========================================\n");

    return 0;
}