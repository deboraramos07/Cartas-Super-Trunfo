#include <stdio.h>


int main() {
    struct CartasSuperTrunfo {
        char estado;
        char codigo[6];
        char Cidade[30];
        int populacao;
        float area;
        float pib;
        int pontosTuristicos;
        float densidadePopulação;
        float pibPerCapita;
        float superPoder;
    };

    struct CartasSuperTrunfo carta1, carta2;

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados: ");
    scanf(" %c", &carta1.estado);

    printf("Escolha um número de 1 a 4 para o código da carta: ");
    int numeroCodigo;
    scanf("%d", &numeroCodigo);
    sprintf(carta1.codigo, "%c%02d", carta1.estado, numeroCodigo);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", carta1.Cidade);

    printf("Digite a População: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a área em (km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de Pontos Turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    carta1.densidadePopulação = (float)carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib * 1e9 / carta1.populacao;
    
    carta1.superPoder = (float)carta1.populacao + carta1.area + carta1.pib + carta1.pontosTuristicos + carta1.pibPerCapita + (1 / carta1.densidadePopulação) * (carta1.densidadePopulação > 0);

    // primeira carta:
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.Cidade); 
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f Bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km².\n", carta1.densidadePopulação);
    printf("PIB per Capita: %.2f reais\n", carta1.pibPerCapita);
   
   
    printf("\n---Carta 2:---\n");

    printf("Escolha uma letra entre 'A' e 'H' para representar um dos oito Estados: ");
    scanf(" %c", &carta2.estado);

    printf("Escolha um número de 1 a 4 para o código da carta: ");
    int numeroCodigo2;
    scanf("%d", &numeroCodigo2);
    sprintf(carta2.codigo, "%c%02d", carta2.estado, numeroCodigo2);

    printf("Digite o nome da Cidade: ");
    scanf("%s", carta2.Cidade);

    printf("Digite a População: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a área em (km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB: ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos Turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    carta2.densidadePopulação = (float)carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib * 1e9 / carta2.populacao;

    carta2.superPoder = (float)carta2.populacao + carta2.area + carta2.pib + carta2.pontosTuristicos + carta2.pibPerCapita + (1 / carta2.densidadePopulação) * (carta2.densidadePopulação > 0);

    // segunda carta:
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.Cidade); 
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f Bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("PIB per Capita: %.2f reais\n", carta2.pibPerCapita);


    // comparando as duas cartas:

    printf("\nComparação de Cartas:\n");

    printf("População: Carta 2 venceu (%d)\n", carta1.populacao > carta1.populacao);
    printf("Área: Carta 2 venceu (%d)\n", carta2.area > carta1.area);
    printf("PIB: Carta 2 venceu (%d)\n", carta2.pib > carta1.pib);
    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", carta2.pontosTuristicos > carta1.pontosTuristicos);
    printf("PIB per Capita: Carta 2 venceu (%d)\n", carta2.pibPerCapita > carta1.pibPerCapita);
    printf("Super Poder: Carta 2 venceu (%d)\n", carta2.superPoder > carta1.superPoder);


    return 0;
}