#include <stdio.h>

// Desafio Super Trunfo - Países  
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
typedef struct {
    char estado;
    char codigo[5];
    char nome_cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
} Carta;

int main(){
    // Área para definição das variáveis para armazenar as propriedades das cidades
    Carta carta1;
    Carta carta2;

    printf("--- Cadastro da Carta 1 ---\n\n");

    printf("Estado: ");
    scanf(" %[^\n]", &carta1.estado);

    printf("Codigo: ");
    scanf(" %s", carta1.codigo);

    printf("Nome da cidade: ");
    scanf(" %s", carta1.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Area km²: ");
    scanf("%f", &carta1.area);

    printf("Pib em bilhoes de reais: ");
    scanf("%f", &carta1.pib);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);


    printf("\n--- Cadastro da Carta 2 ---\n\n");

    printf("Estado: ");
    scanf(" %[^\n]", &carta2.estado);

    printf("Codigo da Carta: ");
    scanf("%s", carta2.codigo);

    printf("Nome da Cidade: ");
    scanf("%s", carta2.nome_cidade);

    printf("Populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Area (em km²): ");
    scanf("%f", &carta2.area);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &carta2.pib);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Área para entrada de dados
    // Área para exibição dos dados da cidade
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome_cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area); // %.2f para 2 casas decimais
    printf("PIB: %.2f bilhoes de reais\n", carta1.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta1.pontos_turisticos);

    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome_cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes de reais\n", carta2.pib);
    printf("Numero de Pontos Turisticos: %d\n", carta2.pontos_turisticos);
    
    return 0;
}