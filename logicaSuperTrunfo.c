#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =======================================================
    // DADOS DA CARTA 1 (Brasil)
    // =======================================================
    char pais1[50] = "Brasil";
    float populacao1 = 214000000.0f; // Transformado em float para facilitar a soma genérica depois
    float area1 = 8510000.0f;
    float pib1 = 1920.0f; // Em bilhões
    float pontos_turisticos1 = 150.0f;
    float densidade1 = populacao1 / area1;

    // =======================================================
    // DADOS DA CARTA 2 (Argentina)
    // =======================================================
    char pais2[50] = "Argentina";
    float populacao2 = 45800000.0f;
    float area2 = 2780000.0f;
    float pib2 = 487.2f; // Em bilhões
    float pontos_turisticos2 = 80.0f;
    float densidade2 = populacao2 / area2;

    // =======================================================
    // VARIÁVEIS DE CONTROLE DO JOGO
    // =======================================================
    int opcao1, opcao2;
    float valor1_carta1, valor1_carta2;
    float valor2_carta1, valor2_carta2;
    char *nome_attr1 = "";
    char *nome_attr2 = "";
    int attr1_is_densidade = 0;
    int attr2_is_densidade = 0;

    // =======================================================
    // 1º MENU: ESCOLHA DO PRIMEIRO ATRIBUTO
    // =======================================================
    printf("=== SUPER TRUNFO: DESAFIO MESTRE ===\n\n");
    printf("Escolha o PRIMEIRO atributo para a batalha:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de Pontos Turisticos\n");
    printf("5 - Densidade Demografica (Menor vence!)\n");
    printf("\nDigite o numero da sua escolha: ");
    scanf("%d", &opcao1);

    // Mapeia a escolha para as variáveis genéricas do Atributo 1
    switch (opcao1) {
        case 1:
            valor1_carta1 = populacao1; valor1_carta2 = populacao2; nome_attr1 = "Populacao"; break;
        case 2:
            valor1_carta1 = area1; valor1_carta2 = area2; nome_attr1 = "Area"; break;
        case 3:
            valor1_carta1 = pib1; valor1_carta2 = pib2; nome_attr1 = "PIB"; break;
        case 4:
            valor1_carta1 = pontos_turisticos1; valor1_carta2 = pontos_turisticos2; nome_attr1 = "Pontos Turisticos"; break;
        case 5:
            valor1_carta1 = densidade1; valor1_carta2 = densidade2; nome_attr1 = "Densidade Demografica"; attr1_is_densidade = 1; break;
        default:
            printf("\nOpcao invalida! O jogo sera encerrado.\n");
            return 1; // Encerra o programa com erro
    }

    // =======================================================
    // 2º MENU: DINÂMICO (ESCOLHA DO SEGUNDO ATRIBUTO)
    // =======================================================
    printf("\n=========================================\n");
    printf("Escolha o SEGUNDO atributo (nao pode ser igual ao primeiro):\n");
    
    // Oculta a opção que já foi escolhida usando if
    if (opcao1 != 1) printf("1 - Populacao\n");
    if (opcao1 != 2) printf("2 - Area\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Numero de Pontos Turisticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demografica (Menor vence!)\n");
    
    printf("\nDigite o numero da sua escolha: ");
    scanf("%d", &opcao2);

    // Validação extra caso o usuário digite o mesmo número
    if (opcao1 == opcao2) {
        printf("\nVoce escolheu o mesmo atributo duas vezes! O jogo sera encerrado.\n");
        return 1;
    }

    // Mapeia a escolha para as variáveis genéricas do Atributo 2
    switch (opcao2) {
        case 1:
            valor2_carta1 = populacao1; valor2_carta2 = populacao2; nome_attr2 = "Populacao"; break;
        case 2:
            valor2_carta1 = area1; valor2_carta2 = area2; nome_attr2 = "Area"; break;
        case 3:
            valor2_carta1 = pib1; valor2_carta2 = pib2; nome_attr2 = "PIB"; break;
        case 4:
            valor2_carta1 = pontos_turisticos1; valor2_carta2 = pontos_turisticos2; nome_attr2 = "Pontos Turisticos"; break;
        case 5:
            valor2_carta1 = densidade1; valor2_carta2 = densidade2; nome_attr2 = "Densidade Demografica"; attr2_is_densidade = 1; break;
        default:
            printf("\nOpcao invalida! O jogo sera encerrado.\n");
            return 1;
    }

    // =======================================================
    // LÓGICA DE COMPARAÇÃO E CÁLCULO
    // =======================================================
    
    // Operador Ternário Elegante: Verifica se é densidade (menor vence) ou não (maior vence)
    // Retorna 1 se Carta 1 vence, 0 se Carta 2 vence (Ignorando empate exato temporariamente para lógica base)
    int vence_attr1 = attr1_is_densidade ? (valor1_carta1 < valor1_carta2) : (valor1_carta1 > valor1_carta2);
    int vence_attr2 = attr2_is_densidade ? (valor2_carta1 < valor2_carta2) : (valor2_carta1 > valor2_carta2);
    
    // Soma dos atributos (conforme requisitado no Nível Mestre)
    float soma_carta1 = valor1_carta1 + valor2_carta1;
    float soma_carta2 = valor1_carta2 + valor2_carta2;

    // =======================================================
    // EXIBIÇÃO DOS RESULTADOS
    // =======================================================
    printf("\n=========================================\n");
    printf("              BATALHA FINAL              \n");
    printf("=========================================\n\n");

    // Resultado Atributo 1
    printf("-> Atributo 1: %s\n", nome_attr1);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor1_carta1, pais2, valor1_carta2);
    printf("Vencedor do %s: %s\n\n", nome_attr1, (valor1_carta1 == valor1_carta2) ? "Empate" : (vence_attr1 ? pais1 : pais2));

    // Resultado Atributo 2
    printf("-> Atributo 2: %s\n", nome_attr2);
    printf("%s: %.2f | %s: %.2f\n", pais1, valor2_carta1, pais2, valor2_carta2);
    printf("Vencedor do %s: %s\n\n", nome_attr2, (valor2_carta1 == valor2_carta2) ? "Empate" : (vence_attr2 ? pais1 : pais2));

    // Soma Final
    printf("-----------------------------------------\n");
    printf("Soma dos atributos (%s):\n", pais1);
    printf("%.2f + %.2f = %.2f\n\n", valor1_carta1, valor2_carta1, soma_carta1);

    printf("Soma dos atributos (%s):\n", pais2);
    printf("%.2f + %.2f = %.2f\n", valor1_carta2, valor2_carta2, soma_carta2);
    printf("-----------------------------------------\n");

    // Grande Vencedor Final usando Operador Ternário
    printf("=== RESULTADO FINAL ===\n");
    if (soma_carta1 == soma_carta2) {
        printf("Empate absoluto na pontuacao final!\n");
    } else {
        // Uso de aninhamento de ternário para deixar super limpo:
        printf("A carta vencedora da rodada eh: %s!!!\n", (soma_carta1 > soma_carta2) ? pais1 : pais2);
    }

    return 0;
}