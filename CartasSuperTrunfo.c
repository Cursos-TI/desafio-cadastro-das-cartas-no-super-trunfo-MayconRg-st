#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // Definindo variáveis para os atributos da cidade
    int codigo;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;

    // Cadastro das Cartas
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome); 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos);

    // Exibição dos Dados das Cartas
    printf("--- Dados da Cidade ---\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos);

    return 0;
}
