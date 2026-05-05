#include <stdio.h>

int main() {

    //Definindo variaveis
    char estado_1[10], estado_2[10],cidade_1[20], cidade_2[20];
    int populacao_1, populacao_2, turistico_1, turistico_2;
    float area_1, area_2, pib_1, pib_2,densidade_1, densidade_2, pib_percapta_1, pib_percapta_2;

    char cod_1[3] = "A1";
    char cod_2[3] = "B2";

    //Coletando e armazenando dados nas variaveis carta 1
    printf("OLA ! VAMOS JOGAR SUPERTRUNFO ? Primeira Carta ! \n"); 
    printf("######################################## \n"); 
    printf("\n"); 
    printf("Digite o ESTADO da carta 1:\n");
    scanf(" %s", estado_1);
    printf("Digite a CIDADE da carta 1:\n");
    scanf(" %s", cidade_1);
    printf("Digite a POPULACAO da carta 1 exemplo: 14000 \n");
    scanf(" %i", &populacao_1);
    printf("Digite a Quantidade de pontos turisticos da carta 1 exemplo: 50 \n");
    scanf(" %i", &turistico_1);
    printf("Digite a AREA em KM da carta 1 exemplo: 145.200 \n");
    scanf(" %f", &area_1);
    printf("Digite o PIB da carta 1 exemplo: 145.120 \n");
    scanf(" %f", &pib_1);

    //Coletando e armazenando dados nas variaveis carta 2
    printf("Muito Bem ! Agora vamos à Carta 2 ? \n"); 
    printf("######################################## \n"); 
    printf("\n"); 
    printf("Digite o ESTADO da carta 2:\n");
    scanf(" %s", estado_2);
    printf("Digite a CIDADE da carta 2:\n");
    scanf(" %s", cidade_2);
    printf("Digite a POPULACAO da carta 2 exemplo: 124.500 \n");
    scanf(" %i", &populacao_2);
    printf("Digite a Quantidade de pontos turisticos da carta 2 exemplo: 254.000 \n");
    scanf(" %i", &turistico_2);
    printf("Digite a AREA em KM da carta 2 exemplo: 465.210 \n");
    scanf(" %f", &area_2);
    printf("Digite o PIB da carta 2 exemplo: 324.255 \n");
    scanf(" %f", &pib_2);

    //Efetuar Calculos de densidade Populacional e PIB per Capita
    pib_percapta_1 = (float) pib_1 / populacao_1;
    pib_percapta_2 = (float) pib_2 / populacao_2;

    densidade_1 = (float) populacao_1 / area_1;
    densidade_2 = (float) populacao_2 / area_2;

    //Agora vamos exibir
    printf("Sao as cartas abaixos cadastradas ! \n"); 
    printf("######################################## \n"); 
    printf("\n"); 

    printf("Carta 1: %s \n" , cod_1);
    printf("Estado: %s \n" , estado_1);
    printf("Cidade: %s \n" , cidade_1);
    printf("Populacao: %i \n" , populacao_1);
    printf("Area: %f \n" , area_1);
    printf("PIB: %f \n" , pib_1);
    printf("Pontos Turisticos: %i \n" , turistico_1);
    printf("Densidade Populacional: %.2f \n" , densidade_1);
    printf("PIB per Capita: %.2f \n" , pib_percapta_1);
    


    printf("\n"); 


    printf("Carta 2: %s \n" , cod_2);
    printf("Estado: %s \n" , estado_2);
    printf("Cidade: %s \n" , cidade_2);
    printf("Populacao: %i \n" , populacao_2);
    printf("Area: %f \n" , area_2);
    printf("PIB: %f \n" , pib_2);
    printf("Pontos Turisticos: %i \n" , turistico_2);
    printf("Densidade Populacional: %.2f \n" , densidade_2);
    printf("PIB per Capita: %.2f \n" , pib_percapta_2);
      
    printf("\n");
    printf("########## RESULTADO ##########\n");
    printf("Populacao da carta 1 e maior que a 2: (%i)\n", (populacao_1 > populacao_2));
    printf("Area da carta 1 e maior que a 2: (%i)\n", (area_1 > area_2));
    printf("PIB da carta 1 e maior que a 2: (%i)\n", (pib_1 > pib_2));
    printf("Pontos turisticos carta 1 venceu ?: (%i)\n", (turistico_1 > turistico_2));
    printf("Densidade populacional carta 1 venceu? (%i)\n", (densidade_1 < densidade_2));
    printf("PIB per Capita carta 1 venceu ? (%i)\n", (pib_percapta_1 > pib_percapta_2));

    return 0;

}
