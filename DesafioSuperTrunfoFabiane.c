#include <stdio.h>

int main(){
    char estado1[2], estado2[2];
    char cidade1[3], cidade2[3];
    char nomedacidade1[100], nomedacidade2[100];
    unsigned long int pop1, pop2; // em número inteiro
    float area1, area2; // em km2
    float pib1, pib2; // em bilhões
    int pontosturisticos1, pontosturisticos2;
    float superpoder1, superpoder2;

    // inserindo novas variáveis
    float densidade1, densidade2;
    float pibpc1, pibpc2;
   
    
    // Coletando as informações da Carta 01
    printf("Carta 01\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%s", &estado1);

    printf("Cidade (01, 02, 03, 04): ");
    scanf("%s", &cidade1);
    
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomedacidade1, sizeof(nomedacidade1), stdin);

    printf("População: ");
    scanf("%u", &pop1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos1);


    // Calculando a Densidade Populacional (hab/km2) e o Pib Per Capta (multiplicado por 1 bilhão) para a Carta 01
    densidade1 = (float)pop1 / area1;
    pibpc1 = (float)pib1 * 1000000000 / pop1;


    // Calculando o Super Poder da Carta 01
    superpoder1 = (pop1 + area1 + pib1 + pontosturisticos1 + pibpc1 + 1/densidade1);

    
    // Coletando as informações da Carta 02
    printf("Carta 02\n");
    printf("Estado (A, B, C, D, E, F, G, H): ");
    scanf("%s", &estado2);
    
    printf("Cidade (01, 02, 03, 04): ");
    scanf("%s", &cidade2);
            
    printf("Nome da Cidade: ");
    getchar();
    fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
    
    printf("População: ");
    scanf("%u", &pop2);
    
    printf("Área: ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Pontos Turísticos: ");
    scanf("%d", &pontosturisticos2);


    // Calculando a Densidade Populacional (hab/km2) e o Pib Per Capta (multiplicado por 1 bilhão) para a Carta 02
    densidade2 = (float)pop2 / area2;
    pibpc2 = (float)pib2 * 1000000000 / pop2;

    
    // Calculando o Super Poder da Carta 02
    superpoder2 = (pop2 + area2 + pib2 + pontosturisticos2 + pibpc2 + 1/densidade2);

    
    // Exibindo as informações da Carta 01
    printf("\n***Informações da Carta 01:***\n");
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("Código da Carta: %s%s\n", estado1, cidade1);
    printf("Nome da Cidade: %s", nomedacidade1);
    printf("População: %u\n", pop1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    // Incluindo a Densidade Populacional e o PIB per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capta: %.2f\n", pibpc1);
    // Incluindo o Cálculo do Super Poder
    printf("Super Poder: %f\n", superpoder1);

    
    // Exibindo as informações da Carta 02
    printf("\n***Informações da Carta 02:***\n");
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("Código da Carta: %s%s\n", estado2, cidade2);
    printf("Nome da Cidade: %s", nomedacidade2);
    printf("População: %u\n", pop2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    // Incluindo a Densidade Populacional e o PIB per capita
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capta: %.2f\n", pibpc2);
    // Incluindo o Cálculo do Super Poder
    printf("Super Poder: %f\n", superpoder2);


    // COMPARAÇÃO DAS CARTAS UTILIZANDO O IF-ELSE
    // Populações
    printf("\n***Resultado das Comparações:***\n");
    if (pop1 > pop2) {
        printf("População de %sVenceu!\n", nomedacidade1);
    } else {
        printf("População de %sVenceu!\n", nomedacidade2);
    }
    // Área
    if (area1 > area2) {
        printf("Área de %sVenceu!\n", nomedacidade1);
    } else {
        printf("Área de %sVenceu!\n", nomedacidade2);
    }
    // PIB
    if (pib1 > pib2) {
        printf("PIB de %sVenceu!\n", nomedacidade1);
    } else {
        printf("PIB de %sVenceu!\n", nomedacidade2);
    }
    // Pontos Turísticos
    if (pibpc1 > pibpc2) {
        printf("Pontos Turísticos de %sVenceu!\n", nomedacidade1);
    } else {
        printf("Pontos Turísticos de %sVenceu!\n", nomedacidade2);
    }
    // Desnsidade Populacional
    if (densidade1 < densidade2) {
        printf("Densidade Populacional de %sVenceu!\n", nomedacidade1);
    } else {
        printf("Densidade Populacional de %sVenceu!\n", nomedacidade2);
    }
    // Super Poder
    if (superpoder1 > superpoder2){
        printf("Super Poder de %sVenceu!\n", nomedacidade1);
    } else {
        printf("Super Poder de %sVenceu!\n", nomedacidade2);
    }

    return 0;
}