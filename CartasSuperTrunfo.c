#include <stdio.h>

int main(){
    char carta1estado; // Valor da Carta 1 Estado
    char carta1codigodacarta[3]; // Valor da Carta 1 Codigo
    char carta1nomedacidade[20]; // Valor da Carta 1 Nome da Cidade
    int carta1populacao; // Valor da Carta 1 População
    float carta1areaemkm2; // Valor da Carta 1 Area em Km Quadrados
    float carta1pib; // Valor da Carta 1 PIB
    int carta1numerodepontosturisticos; // Valor da Carta 1 Pontos Turisticos
    char carta2estado; // Valor da Carta 2 Estado
    char carta2codigodacarta[3]; // Valor da Carta 2 Codigo
    char carta2nomedacidade[20]; // Valor da Carta 2 Nome da Cidade
    int carta2populacao; // Valor da Carta 2 População
    float carta2areaemkm2; // Valor da Carta 2 Area em Km Quadrados
    float carta2pib; // Valor da Carta 2 PIB
    int carta2numerodepontosturisticos; // Valor da Carta 2 Pontos Turisticos
    
    printf("Jogo Supertrunfo! \n");
    printf("Você precisa inserir os dados da Carta 1! \n");
    printf("Digite o estado da Carta 1: \n");
    scanf(" %c", &carta1estado);
    printf("O Valor foi salvo. Agora, digite o código da Carta 1: \n");
    scanf(" %s", &carta1codigodacarta);
    printf("O Valor foi salvo. Agora, digite o nome da cidade da Carta 1: \n");
    scanf(" %s", &carta1nomedacidade);
    printf("O Valor foi salvo. Agora, digite o valor da população da Carta 1: \n");
    scanf(" %d", &carta1populacao);
    printf("O Valor foi salvo. Agora, digite o valor da área em km quadrados da Carta 1: \n");
    scanf(" %f", &carta1areaemkm2);
    printf("O Valor foi salvo. Agora, digite o valor do PIB da Carta 1: \n");
    scanf(" %f", &carta1pib);
    printf("O Valor foi salvo. Agora, digite o número de pontos turísticos da Carta 1: \n");
    scanf(" %d", &carta1numerodepontosturisticos);
    printf("O Valor foi salvo. Os valores da Carta 1 foram definidos! \n");
    printf("Agora vamos para a Carta 2 do Jogo Supertrunfo! \n");
    printf("Digite o estado da Carta 2: \n");
    scanf(" %c", &carta2estado);
    printf("O Valor foi salvo. Agora, digite o código da Carta 2: \n");
    scanf(" %s", &carta2codigodacarta);
    printf("O Valor foi salvo. Agora, digite o nome da cidade da Carta 2: \n");
    scanf(" %s", &carta2nomedacidade);
    printf("O Valor foi salvo. Agora, digite o valor da população da Carta 2: \n");
    scanf(" %d", &carta2populacao);
    printf("O Valor foi salvo. Agora, digite o valor da área em km quadrados da Carta 2: \n");
    scanf(" %f", &carta2areaemkm2);
    printf("O Valor foi salvo. Agora, digite o valor do PIB da Carta 2: \n");
    scanf(" %f", &carta2pib);
    printf("O Valor foi salvo. Agora, digite o número de pontos turísticos da Carta 2: \n");
    scanf(" %d", &carta2numerodepontosturisticos);
    printf("O Valor foi salvo. Os valores da Carta 2 foram definidos! \n");
    printf("Ambos valores foram definidos... Agora vamos ver os valores! \n");
    printf("Carta 1: \n");
    printf("Estado: %c \n", carta1estado);
    printf("Código: %s \n", carta1codigodacarta);
    printf("Nome da Cidade: %s \n", carta1nomedacidade);
    printf("População: %d \n", carta1populacao);
    printf("Área: %f \n", carta1areaemkm2);
    printf("PIB: %f \n", carta1pib);
    printf("Número de Pontos Turísticos:: %d \n\n", &carta1numerodepontosturisticos);
    printf("Carta 2: \n");
    printf("Estado: %c \n", carta2estado);
    printf("Código: %s \n", carta2codigodacarta);
    printf("Nome da Cidade: %s \n", carta2nomedacidade);
    printf("População: %d \n", carta2populacao);
    printf("Área: %f \n", carta2areaemkm2);
    printf("PIB: %f \n", carta2pib);
    printf("Número de Pontos Turísticos:: %d \n\n", &carta2numerodepontosturisticos);
    
    return 0;

}
