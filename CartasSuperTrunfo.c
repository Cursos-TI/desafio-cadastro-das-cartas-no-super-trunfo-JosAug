#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas


int main () {
    //Atributos
    char nome_1[20], codigo_1[10], nome_2 [20], codigo_2 [10];
    float area_1, pib_1, area_2, pib_2;
    int populacao_1, turistico_1,populacao_2, turistico_2;

    //Dados cidade 1:
    printf("Digite o nome da cidade 1:\n");
    scanf("%s", nome_1);

    printf("Digite o código da cidade 1:\n");
    scanf("%s", codigo_1);

    printf("Digite a area da cidade 1:\n");
    scanf("%f", &area_1);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib_1);

    printf("Digite a população da cidade 1:\n");
    scanf("%i", &populacao_1);

    printf("Digite o numero de pontos turisticos da cidade 1:\n");
    scanf("%i", &turistico_1);


    //Dados cidade 2:
printf("Digite o nome da cidade 2:\n");
    scanf("%s", nome_2);

    printf("Digite o código da cidade 2:\n");
    scanf("%s", codigo_2);

    printf("Digite a area da cidade 2:\n");
    scanf("%f", &area_2);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib_2);

    printf("Digite a população da cidade 2:\n");
    scanf("%i", &populacao_2);

    printf("Digite o numero de pontos turisticos da cidade 2:\n");
    scanf("%i", &turistico_2);

    // Exibição dos Dados das Cartas:
   
    //Exibe Cidade 1:
    printf ("Cidade 1:\n");
    printf("Nome da cidade: %s\n", nome_1);
    printf("Código: %s\n"), codigo_1;
    printf("Área:%f\n", area_1);
    printf("PIB:%f\n", pib_1);
    printf("Populaçao:%i\n", populacao_1);
    printf("Pontos turisticos:%i\n\n\n", turistico_1);

    //Exibe Cidade 2:
    printf ("Cidade 2:\n");
    printf("Nome da cidade:%s\n", nome_2 );
    printf("Codigo:%s\n"), codigo_2 ;
    printf("Área:%f\n", area_2);
    printf("PIB:%f\n", pib_2);
    printf("Populaçao:%i\n", populacao_2);
    printf("Pontos turisticos:%i\n", turistico_2);

    return 0;
}