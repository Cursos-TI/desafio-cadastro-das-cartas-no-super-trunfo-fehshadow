#include <stdio.h>
#include <string.h>

typedef struct {
    char estado;
    char codigo[5];
    char nome_cidade[51];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

void lerCarta(Carta *carta, int numero) {
    printf("Carta %d:\n", numero);

    printf("Estado: ");
    scanf(" %s", &carta->estado);
    getchar(); // Consumir o '\n'

    printf("Código: ");
    scanf("%4s", carta->codigo);
    getchar(); // Consumir o '\n'

    printf("Nome da Cidade: ");
    fgets(carta->nome_cidade, sizeof(carta->nome_cidade), stdin);
    // Remover '\n' do final, se existir
    size_t len = strlen(carta->nome_cidade);
    if (len > 0 && carta->nome_cidade[len-1] == '\n') {
        carta->nome_cidade[len-1] = '\0';
    }

    printf("População: ");
    scanf("%d", &carta->populacao);
    getchar(); // Consumir o '\n'

    printf("Área: ");
    scanf("%f", &carta->area);
    getchar(); // Consumir o '\n'

    printf("PIB: ");
    scanf("%f", &carta->pib);
    getchar(); // Consumir o '\n'

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &carta->pontos_turisticos);
    getchar(); // Consumir o '\n'

    printf("\n");
}

void exibirCarta(const Carta *carta, int numero) {
    printf("Carta %d:\n", numero);
    printf("Estado: %c\n", carta->estado);
    printf("Código: %s\n", carta->codigo);
    printf("Nome da Cidade: %s\n", carta->nome_cidade);
    printf("População: %d\n", carta->populacao);
    printf("Área: %.2f km²\n", carta->area);
    printf("PIB: %.2f bilhões de reais\n", carta->pib);
    printf("Número de Pontos Turísticos: %d\n", carta->pontos_turisticos);
    printf("\n");
}

int main() {
    Carta carta1, carta2;

    lerCarta(&carta1, 1);
    lerCarta(&carta2, 2);

    printf("Informações cadastradas:\n\n");
    exibirCarta(&carta1, 1);
    exibirCarta(&carta2, 2);

    return 0;
}
