#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //Variaveis da carta 1
    char estado[10];
    char codigo[4];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    
    //Variaveis da carta 2
    char estado2[10];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

printf("========================================\n");
printf("      SUPER TRUNFO - CIDADES\n");
printf("========================================\n\n");

printf("Você irá cadastrar duas cartas em 7 passos\n");
printf("Digite as informações com atenção.\n\n");


    printf("\n\nCarta 1 \n");
        printf("1) Por favor digite o nome do estado: ");
        scanf("%s", estado);
        printf("2) Por favor digite o código do estado: (ex: Para Minas você digita o código: M01, Para: Parana você digita o código P01): ");
        scanf("%s", codigo);
        printf("3) Por favor digite o nome da cidade: ");
        scanf("%s", cidade);
        printf("4) Por favor digite a quantos habitantes tem na cidade: ");
        scanf("%d", &populacao);
        printf("5) Por favor digite a área da cidade: ");
        scanf("%f", &area);
        printf("6) Por favor digite o PIB da cidade: ");
        scanf("%f", &pib);
        printf("7) Por favor digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos);

    printf("\n\nCarta 2 \n");
        printf("1) Por favor digite o nome do estado: ");
        scanf("%s", estado2);
        printf("2) Por favor digite o código do estado: (ex: Para Minas você digita o código: M02, Para: Paraná você digita o código P02) ");
        scanf("%s", codigo2);
        printf("3) Por favor digite o nome da cidade: ");
        scanf("%s", cidade2);
        printf("4) Por favor digite qauntos habitantes tem na cidade: ");
        scanf("%d", &populacao2);
        printf("5) Por favor digite a área da cidade: ");
        scanf("%f", &area2);
        printf("6) Por favor digite o PIB da cidade: ");
        scanf("%f", &pib2);
        printf("7) Por favor digite o número de pontos turísticos da cidade: ");
        scanf("%d", &pontos_turisticos2 );

        printf("========================================\n");
        printf("CARTA 1\n");
        printf("Estado: %s\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d habitantes\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f bilhões\n", pib);
        printf("Pontos Turísticos: %d\n", pontos_turisticos);
        printf("========================================\n");

    printf("\nCARTA 2\n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f bilhões\n", pib2);
        printf("Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("========================================\n");

return 0;
}
