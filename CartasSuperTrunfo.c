#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char estado1[10];
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int populacao, numero_pontos_turistico;
    float area;
    float pib;

    printf("Digite o Estado 1: \n");
    scanf("%s", &estado1);

    printf("Digite o codigo da carta: \n");
    scanf("%s", & codigo_da_carta);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &numero_pontos_turistico);
    
    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("Estado 1: %s - Codigo da Carta: %s\n", estado1, codigo_da_carta);
    printf("Nome da Cidade: %s - População: %d\n", nome_da_cidade, populacao);
    printf("Numero de Pontos Turisticos: %d - Area: %f\n", numero_pontos_turistico, area);
    printf("PIB: %f\n", pib);


    return 0;
}
