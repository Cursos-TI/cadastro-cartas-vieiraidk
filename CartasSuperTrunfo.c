#include <stdio.h>

int main() {
    // --- CARTA 1 ---
    char carta1estado;
    char carta1codigodacarta[4];
    char carta1nomedacidade[50];
    unsigned long int carta1populacao; // mudou para acomodar números maiores
    float carta1areaemkm2;
    float carta1pib; // em BILHÕES (ex.: 699.28)
    int carta1numerodepontosturisticos;
    float carta1densidade;
    float carta1pibpercapita;
    float carta1inversodadensidade;
    float carta1superpoder;

    // --- CARTA 2 ---
    char carta2estado;
    char carta2codigodacarta[4];
    char carta2nomedacidade[50];
    unsigned long int carta2populacao;
    float carta2areaemkm2;
    float carta2pib; // em BILHÕES
    int carta2numerodepontosturisticos;
    float carta2densidade;
    float carta2pibpercapita;
    float carta2inversodadensidade;
    float carta2superpoder;

    printf("Jogo Super Trunfo - Nível Avançado\n\n");

    // --- LEITURA CARTA 1 ---
    printf("Digite o estado da Carta 1 (uma letra): ");
    scanf(" %c", &carta1estado);

    printf("Digite o código da Carta 1 (até 3 chars): ");
    scanf(" %3s", carta1codigodacarta);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", carta1nomedacidade);

    printf("Digite a população da Carta 1 (valor inteiro, ex.: 12325000): ");
    scanf(" %lu", &carta1populacao);

    printf("Digite a área em km² da Carta 1 (ex.: 1521.11): ");
    scanf(" %f", &carta1areaemkm2);

    printf("Digite o PIB da Carta 1 (em bilhões, ex.: 699.28): ");
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

    printf("Digite a população da Carta 2 (valor inteiro): ");
    scanf(" %lu", &carta2populacao);

    printf("Digite a área em km² da Carta 2 (ex.: 1200.25): ");
    scanf(" %f", &carta2areaemkm2);

    printf("Digite o PIB da Carta 2 (em bilhões, ex.: 300.50): ");
    scanf(" %f", &carta2pib);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf(" %d", &carta2numerodepontosturisticos);

    // --- CÁLCULOS (densidade e pib per capita) ---
    // assumimos que área > 0 e população > 0 (entrada válida)
    carta1densidade = (float)carta1populacao / carta1areaemkm2;
    carta2densidade = (float)carta2populacao / carta2areaemkm2;

    // PIB per capita: convertendo PIB de bilhões para valor absoluto antes de dividir
    carta1pibpercapita = (carta1pib * 1000000000.0f) / (float)carta1populacao;
    carta2pibpercapita = (carta2pib * 1000000000.0f) / (float)carta2populacao;

    // inverso da densidade (quanto menor a densidade, maior o inverso)
    carta1inversodadensidade = 1.0f / carta1densidade;
    carta2inversodadensidade = 1.0f / carta2densidade;

    // --- SUPER PODER ---
    // Somamos todos os atributos numéricos convertendo para float quando necessário.
    // A ideia foi manter unidades coerentes: PIB usado em valor absoluto (reais).
    carta1superpoder =
        (float)carta1populacao +
        carta1areaemkm2 +
        (carta1pib * 1000000000.0f) +              // PIB em reais
        (float)carta1numerodepontosturisticos +
        carta1pibpercapita +
        carta1inversodadensidade;

    carta2superpoder =
        (float)carta2populacao +
        carta2areaemkm2 +
        (carta2pib * 1000000000.0f) +
        (float)carta2numerodepontosturisticos +
        carta2pibpercapita +
        carta2inversodadensidade;

    // --- EXIBIÇÃO DAS CARTAS (como antes) ---
    printf("\n===== Carta 1 =====\n");
    printf("Estado: %c\n", carta1estado);
    printf("Código: %s\n", carta1codigodacarta);
    printf("Nome da Cidade: %s\n", carta1nomedacidade);
    printf("População: %lu\n", carta1populacao);
    printf("Área: %.2f km²\n", carta1areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", carta1pib);
    printf("Número de Pontos Turísticos: %d\n", carta1numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1densidade);
    printf("PIB per Capita: %.2f reais\n", carta1pibpercapita);
    printf("Super Poder: %.2f\n", carta1superpoder);

    printf("\n===== Carta 2 =====\n");
    printf("Estado: %c\n", carta2estado);
    printf("Código: %s\n", carta2codigodacarta);
    printf("Nome da Cidade: %s\n", carta2nomedacidade);
    printf("População: %lu\n", carta2populacao);
    printf("Área: %.2f km²\n", carta2areaemkm2);
    printf("PIB: %.2f bilhões de reais\n", carta2pib);
    printf("Número de Pontos Turísticos: %d\n", carta2numerodepontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2densidade);
    printf("PIB per Capita: %.2f reais\n", carta2pibpercapita);
    printf("Super Poder: %.2f\n", carta2superpoder);

    // --- COMPARAÇÕES (1 -> Carta 1 vence; 0 -> Carta 2 vence) ---
    int comp_populacao = (carta1populacao > carta2populacao);
    int comp_area = (carta1areaemkm2 > carta2areaemkm2);
    int comp_pib = (carta1pib > carta2pib);
    int comp_pontos = (carta1numerodepontosturisticos > carta2numerodepontosturisticos);
    int comp_densidade = (carta1densidade < carta2densidade); // menor densidade vence
    int comp_pibpercapita = (carta1pibpercapita > carta2pibpercapita);
    int comp_superpoder = (carta1superpoder > carta2superpoder);

    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta 1 venceu (%d)\n", comp_populacao);
    printf("Área: Carta 1 venceu (%d)\n", comp_area);
    printf("PIB: Carta 1 venceu (%d)\n", comp_pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", comp_pontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", comp_densidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", comp_pibpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", comp_superpoder);

    return 0;
}
