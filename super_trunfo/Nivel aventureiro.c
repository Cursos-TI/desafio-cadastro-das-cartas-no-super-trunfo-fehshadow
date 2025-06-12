#include <stdio.h>

int main() {
    // Declaração de variáveis para a primeira cidade
    char estado1, codigo1[5], nomeCidade1[50];
    int populacao1, pontosTuristicos1;
    float area1, pib1, densidadePopulacional1, pibPerCapita1;

    // Declaração de variáveis para a segunda cidade
    char estado2, codigo2[5], nomeCidade2[50];
    int populacao2, pontosTuristicos2;
    float area2, pib2, densidadePopulacional2, pibPerCapita2;

    // Entrada de dados para a primeira carta
    printf("Carta 1:\n");
    printf("Estado: "); scanf(" %c", &estado1);
    printf("Código: "); scanf("%s", codigo1);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade1);
    printf("População: "); scanf("%d", &populacao1);
    printf("Área (km²): "); scanf("%f", &area1);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos1);

    // **Cálculo da densidade populacional** (habitantes por km²)
    densidadePopulacional1 = populacao1 / area1;

    // **Cálculo do PIB per capita** (riqueza média por pessoa)
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Entrada de dados para a segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: "); scanf(" %c", &estado2);
    printf("Código: "); scanf("%s", codigo2);
    printf("Nome da Cidade: "); scanf(" %[^\n]", nomeCidade2);
    printf("População: "); scanf("%d", &populacao2);
    printf("Área (km²): "); scanf("%f", &area2);
    printf("PIB (bilhões de reais): "); scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: "); scanf("%d", &pontosTuristicos2);

    // **Cálculo da densidade populacional** (habitantes por km²)
    densidadePopulacional2 = populacao2 / area2;

    // **Cálculo do PIB per capita** (riqueza média por pessoa)
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos resultados formatados
    printf("\nResultados:\n");
    printf("Carta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado1, codigo1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

    printf("\nCarta 2:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n",
           estado2, codigo2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    return 0;
}