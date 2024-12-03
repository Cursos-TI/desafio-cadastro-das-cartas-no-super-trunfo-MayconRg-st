#include <stdio.h>

void cadastrarCarta(char codigo[], char nome[], int *populacao, float *area, float *pib, int *pontos_turisticos) {
    printf("Digite o código da cidade: ");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s", nome);
    printf("Digite a população da cidade: ");
    scanf("%d", populacao);
    printf("Digite a área da cidade (em km²): ");
    scanf("%f", area);
    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", pib);
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", pontos_turisticos);
}

//exibir dados da cidade
void exibirCarta(char codigo[], char nome[], int populacao, float area, float pib, int pontos_turisticos, float densidade_populacional, float pib_per_capita) {
    printf("\nDados da Cidade:\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2f bilhões\n", pib_per_capita);
}

//calcular densidade populacional e PIB per capita
void calcularPropriedades(int populacao, float area, float pib, float *densidade_populacional, float *pib_per_capita) {
    *densidade_populacional = populacao / area;
    *pib_per_capita = pib / populacao;
}

//comparar duas cartas e determinar a vencedora
void compararCartas(int populacao1, float area1, float pib1, int pontos_turisticos1, float densidade_populacional1, float pib_per_capita1,
                    int populacao2, float area2, float pib2, int pontos_turisticos2, float densidade_populacional2, float pib_per_capita2) {
    printf("\nResultado da Comparação:\n");

    printf("População: ");
    if (populacao1 > populacao2) printf("Carta 1\n");
    else printf("Carta 2\n");

    printf("Área: ");
    if (area1 > area2) printf("Carta 1\n");
    else printf("Carta 2\n");

    printf("PIB: ");
    if (pib1 > pib2) printf("Carta 1\n");
    else printf("Carta 2\n");

    printf("Pontos Turísticos: ");
    if (pontos_turisticos1 > pontos_turisticos2) printf("Carta 1\n");
    else printf("Carta 2\n");

    printf("Densidade Populacional: ");
    if (densidade_populacional1 < densidade_populacional2) printf("Carta 1\n");
    else printf("Carta 2\n");

    printf("PIB per Capita: ");
    if (pib_per_capita1 > pib_per_capita2) printf("Carta 1\n");
    else printf("Carta 2\n");
}

int main() {
    // Dados da primeira cidade
    char codigo1[4], nome1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    // Dados da segunda cidade
    char codigo2[4], nome2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Cadastro das Cartas
    printf("Cadastro da Carta 1:\n");
    cadastrarCarta(codigo1, nome1, &populacao1, &area1, &pib1, &pontos_turisticos1);
    calcularPropriedades(populacao1, area1, pib1, &densidade_populacional1, &pib_per_capita1);

    printf("\nCadastro da Carta 2:\n");
    cadastrarCarta(codigo2, nome2, &populacao2, &area2, &pib2, &pontos_turisticos2);
    calcularPropriedades(populacao2, area2, pib2, &densidade_populacional2, &pib_per_capita2);

    // Exibição das Cartas
    exibirCarta(codigo1, nome1, populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1);
    exibirCarta(codigo2, nome2, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    // Comparação das Cartas
    compararCartas(populacao1, area1, pib1, pontos_turisticos1, densidade_populacional1, pib_per_capita1, populacao2, area2, pib2, pontos_turisticos2, densidade_populacional2, pib_per_capita2);

    return 0;
}