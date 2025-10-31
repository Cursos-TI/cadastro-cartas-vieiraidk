#include <stdio.h>

int main() {
    // Carta 1
    char carta1estado;
    char carta1codigodacarta[4];        
    char carta1nomedacidade[50];      
    int carta1populacao;
    float carta1areaemkm2;
    float carta1pib;                   
    int carta1numerodepontosturisticos;
    float carta1densidade;
    float carta1pibpercapita;

    // Carta 2
    char carta2estado;
    char carta2codigodacarta[4];
    char carta2nomedacidade[50];
    int carta2populacao;
    float carta2areaemkm2;
    float carta2pib;
    int carta2numerodepontosturisticos;
    float carta2densidade;
    float carta2pibpercapita;

    printf("Jogo Supertrunfo!\n\n");

    // --- LEITURA CARTA 1 ---
    printf("Digite o estado da Carta 1 (uma letra): ");
    scanf(" %c", &carta1estado);

    printf("Digite o código da Carta 1 (até 3 chars): ");
    scanf(" %3s", carta1codigodacarta);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", carta1nomedacidade); 

    printf("Digite a população da Carta 1: ");
    scanf(" %d", &carta1populacao);

    printf("Digite a área em km² da Carta 1: ");
    scanf(" %f", &carta1areaemkm2);

    printf("Digite o PIB da Carta 1 (em bilhões de reais, ex.: 699.28): ");
    scanf(" %f", &carta1pib);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf(" %d", &carta1numerodepontosturisticos);

    // --- LEITURA CARTA 2 ---
    printf("\nDigite o estado da Carta 2 (uma letra): ");
    scanf(" %c", &carta2estado);

    printf("Digite o código da Carta 2 (até 3 chars): ");
    scanf(" %3s", carta2codigodacarta);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", carta2nomedacidade);

    printf("Digite a população da Carta 2: ");
    scanf(" %d", &carta2populacao);

    printf("Digite a área em km² da Carta 2: ");
    scanf(" %f", &carta2areaemkm2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais, ex.: 300.50): ");
    scanf(" %f", &carta2pib);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf(" %d", &carta2numerodepontosturisticos);

    // --- CÁLCULOS ---
    // densidade = habitantes por km²
    carta1densidade = (float)carta1populacao / carta1areaemkm2;
    carta2densidade = (float)carta2populacao / carta2areaemkm2;

    // PIB per capita
    carta1pibpercapita = (carta1pib * 1000000000.0f) / (float)carta1populacao;
    carta2pibpercapita = (carta2pib * 1000000000.0f) / (float)carta2populacao;

    // --- SAÍDA FORMATADA ---
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", carta1estado);
    printf("Código: %s\n", carta1codigodacarta);
    printf("Nome da Cidade: %s\n", carta1nomedacidade);
    printf("População: %d\n", carta1populacao);
    printf("Área: %.2f km²\n", carta1areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", carta1pib);
    printf("Número de Pontos Turísticos: %d\n", carta1numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1densidade);
    printf("PIB per Capita: %.2f reais\n", carta1pibpercapita);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", carta2estado);
    printf("Código: %s\n", carta2codigodacarta);
    printf("Nome da Cidade: %s\n", carta2nomedacidade);
    printf("População: %d\n", carta2populacao);
    printf("Área: %.2f km²\n", carta2areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", carta2pib);
    printf("Número de Pontos Turísticos: %d\n", carta2numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2densidade);
    printf("PIB per Capita: %.2f reais\n", carta2pibpercapita);

    return 0;
}
