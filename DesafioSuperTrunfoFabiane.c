#include <stdio.h>

int main() {
    char estados1[2], estados2[2];
    char cidade1[3], cidade2[3];
    char nomedacidade1[100], nomedacidade2[100];
    int populacao1, populacao2;
    float area1, area2; // em km2
    float pib1, pib2; // em bilhões
    int pontosturisticos1, pontosturisticos2;
    float densidade1, densidade2; // habitantes/km2
    float pibpercapta1, pibpercapta2;
    float superpoder1, superpoder2;

    // Coletando as Informações da Carta 01
    printf("Carta 01\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%c", &estados1);

    printf("Cidade (01, 02, 03, 04): ");
    scanf("%d", &cidade1);

    printf("Nome da Cidade: ");
    getchar();
    scanf("%[^\n]", &nomedacidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosturisticos1);

    // Calculando a Densidade Populacional (hab/km2)
    densidade1 = populacao1 / area1;

    // Calculando o PIB per capta
    pibpercapta1 = pib1 * 1e9 / populacao1; // PIB em bilhões, multiplicado por 1 bilhão

    // Calculando o Super Poder
    superpoder1 = (populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapta1 + 1/densidade1);

    // Coletando as Informações da Carta 02
    printf("Carta 02\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%c", &estados2);

    printf("Cidade (01, 02, 03, 04): ");
    scanf("%s", &cidade2);

    printf("Nome da Cidade: ");
    getchar();
    scanf("%[^\n]", &nomedacidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos:");
    scanf("%d", &pontosturisticos2);

    // Calculando a Densidade Populacional (hab/km2)
    densidade2 = populacao2 / area2;

    // Calculando o PIB per capta
    pibpercapta2 = pib2 * 1e9 / populacao2; // PIB em bilhões, multiplicado por 1 bilhão

    // Calculando o Super Poder
    superpoder2 = (populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapta2 + 1/densidade2);

    // Exibindo as informações da Carta 01
    printf("\n***Informações da Carta 01:***\n");
    printf("Estado: %s\n", estados1);
    printf("Cidade: %s\n", cidade1);
    printf("Nome da Cidade: %s\n", nomedacidade1);
    printf("População: %.2f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);

    // Exibindo as informações da Carta 02
    printf("\n***Informações da Carta 02:***\n");
    printf("Estado: %s\n", estados2);
    printf("Cidade: %s\n", cidade2);
    printf("Nome da Cidade: %s\n", nomedacidade2);
    printf("População: %.2f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    
    // Incluindo a Densidade Populacional e o PIB per capita
    printf("\n Densidade Populacional Carta 1: %.2f hab/km²\n", densidade1);
    printf("Densidade Populacional Carta 2: %.2f hab/km²\n", densidade2);

    printf("\n PIB per Capta Carta 1: %.2f\n", pibpercapta1);
    printf("PIB per Capta Carta 2: %.2f\n", pibpercapta2);

    // Incluindo o Cálculo do Super Poder
    printf("\nSuper Poder Carta 1: %.2f\n", superpoder1);
    printf("Super Poder Carta 2: %.2f\n", superpoder2);

    // Comparações com if e else
    // Comparando populações
    if (populacao1 > populacao2) {
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }

    // Comparando áreas
    if (area1 > area2) {
        printf("Área: Carta 1 venceu!\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }

    // Comparando PIBs
    if (pib1 > pib2) {
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    // Comparando pontos turísticos
    if (pontosturisticos1 > pontosturisticos2) {
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }

    // Comparando densidade populacional
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    // Comparando PIB per capita
    if (pibpercapta1 > pibpercapta2) {
        printf("PIB per capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per capita: Carta 2 venceu!\n");
    }

    // Comparando super poder
    if (superpoder1 > superpoder2) {
        printf("Super Poder: Carta 1 venceu!\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
    }

    return 0;
}