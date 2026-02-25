#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

        //Variáveis para definição dos dados da carta 1
        char codigo_da_carta1[5];
        char estado1[30] ;
        char nome_da_cidade1[60];
        int populacao1;
        float area1;
        float pib1;
        int numero_de_pontos_turisticos1;
        float densidade_populacional1;
        float pib_percapita1;

        //Variáveis para definição dos dados da carta 2  
        char codigo_da_carta2[5];
        char estado2[30] ;
        char nome_da_cidade2[60];
        int populacao2;
        float area2;
        float pib2;
        int numero_de_pontos_turisticos2;
        float densidade_populacional2;
        float pib_percapita2;
       

    printf("\n*** Entre Com As Informações da Carta 1 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade1);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a área em km2: \n");
    scanf("%f", &area1);

    printf("Digite o PIB em bilhões R$: \n");
    scanf("%f", &pib1);    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos1);

   //calculos de densidade populacional e pib percapita da carta 1;
    float pib1_em_reais = pib1 * 1000000000.0;

    densidade_populacional1 = populacao1 / area1;

    pib_percapita1 = pib1_em_reais / populacao1;

    printf("\n*** Entre Com As Informações da Carta 2 ***\n");

    printf("Digite o nome do estado: \n");
    scanf("%s", estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", codigo_da_carta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome_da_cidade2);

    printf("Digite a população: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB em bilhões R$: \n");
    scanf("%f", &pib2);    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numero_de_pontos_turisticos2);

    //calculos de densidade populacional e pib percapita da carta 2;
    float pib2_em_reais = pib2 * 1000000000.0;

    densidade_populacional2 = populacao2 / area2;

    pib_percapita2 = pib2_em_reais / populacao2;

    printf("\n***Carta 1***\n");
    printf("Nome do Estado: %s;\nCódigo da Carta: %s\n", estado1, codigo_da_carta1);
    printf("Nome da Cidade: %s;\nPopulação: %d\n", nome_da_cidade1, populacao1);
    printf("Área: %.2f km2;\nPIB: %.2f bilhões de reais;\nNúmero de pontos turísticos: ;%d\n", area1, pib1, numero_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes por km2;\n", densidade_populacional1);
    printf("Pib Per Capita: %.2f reais.\n\n", pib_percapita1);

    printf("\n***Carta 2***\n");
    printf("Nome do Estado: %s;\nCódigo da Carta: %s;\n", estado2, codigo_da_carta2);
    printf("Nome da Cidade: %s;\nPopulação: %d;\n", nome_da_cidade2, populacao2);
    printf("Área: %.2f km2;\nPIB: %.2f bilhões de reais;\nNúmero de pontos turísticos: %d;\n", area2, pib2, numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes por km2;\n", densidade_populacional2);
    printf("Pib Per Capita: %.2f reais.\n\n", pib_percapita2);
  

return 0;
} 
