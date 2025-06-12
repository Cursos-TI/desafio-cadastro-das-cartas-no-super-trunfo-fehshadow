#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira cidade
    char estado1, codigo1[10], nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;

    // Declaração de variáveis para a segunda cidade
    char estado2, codigo2[10], nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;

    // Entrada de dados para a primeira carta
    printf("Carta 1:\n");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%lu", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculo do Super Poder
    superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 + pibPerCapita1 + (1 / densidadePopulacional1);

    // Entrada de dados para a segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%lu", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do Super Poder
    superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 + pibPerCapita2 + (1 / densidadePopulacional2);

    // Exibição dos resultados formatados
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2 ? 1 : 2), (populacao1 > populacao2));
    printf("Área: Carta %d venceu (%d)\n", (area1 > area2 ? 1 : 2), (area1 > area2));
    printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2 ? 1 : 2), (pib1 > pib2));
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontosTuristicos1 > pontosTuristicos2 ? 1 : 2), (pontosTuristicos1 > pontosTuristicos2));
    printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidadePopulacional1 < densidadePopulacional2 ? 1 : 2), (densidadePopulacional1 < densidadePopulacional2));
    printf("PIB per Capita: Carta %d venceu (%d)\n", (pibPerCapita1 > pibPerCapita2 ? 1 : 2), (pibPerCapita1 > pibPerCapita2));
    printf("Super Poder: Carta %d venceu (%d)\n", (superPoder1 > superPoder2 ? 1 : 2), (superPoder1 > superPoder2));

    return 0;
}