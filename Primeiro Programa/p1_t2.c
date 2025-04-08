#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

// NÃO ESTOU CONSEGUINDO AVANÇAR NO DESAFIO
// QUANDO TENTO EXECUTAR O PROGRAMA COM AS DUAS CARTAS DECLARADAS
// OS VALORES SE EMBARALHAM
// SOMENTE QUANDO EXECUTO COM SOMENTE UMA DAS CARTAS DECLARADAS O PROGFRAMA FUNCIONA

int main() {
    // criação das variáveis da carta 1
    char estado[20];
    char codigo[20];
    char cidade[20];
    long long int populacao;
    float area;
    float densidade;
    float percapita;
    long long int pib;
    int pontos;
    float superpoder;
    
      // criação das variáveis da carta 2
    char ESTADO[30];
    char CODIGO[30];
    char CIDADE[30];
    long long int POPULACAO;
    float AREA;
    float DENSIDADE;
    float PERCAPITA;
    long long int PIB;
    int PONTOS;
    float SUPERPODER;

    // criação de variáveis para comparar
    int atributo;


    // inserindo dados da carta 1
    printf("Cidade 1\nDigite o Estado 1:");
    scanf("%s", &estado );
    printf("\n");
    printf("Digite o Código da Carta 1: ");
    scanf("%s", &codigo );
    printf("\n");
    printf("Digite o nome da cidade 1: ");
    scanf("%s", &cidade );
    printf("\n");
    printf("Digite o número da população 1: ");
    scanf("%lli", &populacao);
    printf("\n");
    printf("Digite o valor da área 1: ");
    scanf("%f", &area);
    printf("\n");
    printf("Digite o valor do PIB 1: ");
    scanf("%lli", &pib);
    printf("\n");
    printf("Digite o número de pontos turísticos 1: ");
    scanf("%i", &pontos);
    printf("\n");
      
    
      // inserindo dados da carta 2
    printf("Cidade 2\n");
    printf("Digite o Estado 2: ");
    scanf("%s", &ESTADO);
    printf("\n");
    printf("Digite o Código da Carta 2: ");
    scanf("%s", &CODIGO );
    printf("\n");
    printf("Digite o nome da cidade 2: ");
    scanf("%s", &CIDADE );
    printf("\n");
    printf("Digite o número da população 2: ");
    scanf("%lli", &POPULACAO);
    printf("\n");
    printf("Digite o valor da área 2: ");
    scanf("%f", &AREA);
    printf("\n");
    printf("Digite o valor do PIB 2: ");
    scanf("%lli", &PIB);
    printf("\n");
    printf("Digite o número de pontos turísticos 2: ");
    scanf("%i", &PONTOS);
    printf("\n");
    
    /*
    // apresentando os valores inseridos para carta 1
    printf("Cidade 1 \nEstado: %s \n", estado);
    printf("Código da Carta: %s \n", codigo); 
    printf("Nome da Cidade: %s \n", cidade); 
    printf("População: %lli \n", populacao); 
    printf("Área: %.2f \n", area);
    densidade = (float)populacao / area;
    printf("Densidade Populacional: %.2f \n", densidade);
    printf("PIB: %lli \n", pib);
    percapita = (float)pib / (float)populacao;
    printf("PIB Per Capita: %.2f \n", percapita);
    printf("Pontos Turísticos: %i \n", pontos);
    printf("\n");
    superpoder = (float)populacao + area + (float)pib + pontos + percapita + (1/densidade);
    printf("Superpoder de carta %s: %f", codigo, superpoder);
    printf("\n");
    
     
      // apresentando os valores inseridos para carta 2
    printf("Cidade 2 \nEstado: %s \n", ESTADO);
    printf("Código da Carta: %s \n", CODIGO); 
    printf("Nome da Cidade: %s \n", CIDADE); 
    printf("População: %lli \n", POPULACAO); 
    printf("Área: %.2f \n", AREA);
    DENSIDADE = POPULACAO / AREA  ;
    printf("Densidade Populacional: %.2f \n", DENSIDADE);
    printf("PIB: %lli \n", PIB);
    PERCAPITA = (float)PIB / (float)POPULACAO;
    printf("PIB Per Capita: %.2f \n", PERCAPITA);
    printf("Pontos Turísticos: %i \n", PONTOS);
    SUPERPODER = (float)POPULACAO + AREA + (float)PIB + PONTOS + PERCAPITA, (1/DENSIDADE);
    printf("Superpoder de carta %s: %f", CODIGO, SUPERPODER);
    printf("\n");

    */

    percapita = (float)pib / (float)populacao;
    PERCAPITA = (float)PIB / (float)POPULACAO;


    densidade = (float)populacao / area;
    DENSIDADE = (float)POPULACAO / AREA;

    printf("---------------------\n");
    printf("Comparação das cartas\n");
    printf("---------------------\n");

    printf("Escolha o atributo das cartas que você quer comparar:\n");
    printf("1. Nome do Estado\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Número de pontos turísticos\n");
    printf("6. Densidade demográfica\n");
    scanf("%d", &atributo);

    switch (atributo) {
      case 1: 
        printf("Atributo: Nome do Estado\n");
        printf("Carta 1: %s - Carta 2: %s", estado, ESTADO);
      break;

      case 2: 
        printf("Carta 1: %s - Carta 2: %s\n", estado, ESTADO);
        printf("Atributo: População\n");
        printf("Carta 1: %lli - Carta 2: %lli\n", populacao, POPULACAO);
        if (populacao > POPULACAO) {
          printf("Resultado: Carta 1 venceu!");
        } else if (populacao == POPULACAO) {
          printf("Resultado: Empate!");
        } else {
          printf("Resultado: Carta 2 venceu!");
        }
      break;

      case 3: 
        printf("Carta 1: %s - Carta 2: %s\n", estado, ESTADO);
        printf("Atributo: Área\n");
        printf("Carta 1: %f - Carta 2: %f\n", area, AREA);
        if (area > AREA) {
          printf("Resultado: Carta 1 venceu!");
        } else if (area == AREA) {
          printf("Resultado: Empate!");
        } else {
          printf("Resultado: Carta 2 venceu!");
        }
      break;

      case 4: 
        printf("Carta 1: %s - Carta 2: %s\n", estado, ESTADO);
        printf("Atributo: PIB\n");
        printf("Carta 1: %lli - Carta 2: %lli\n", pib, PIB);
        if (pib > PIB) {
          printf("Resultado: Carta 1 venceu!");
        } else if (pib == PIB) {
          printf("Resultado: Empate!");
        } else {
          printf("Resultado: Carta 2 venceu!");
        }
      break;

      case 5: 
        printf("Carta 1: %s - Carta 2: %s\n", estado, ESTADO);
        printf("Atributo: Número de pontos turísticos\n");
        printf("Carta 1: %i - Carta 2: %i\n", pontos, PONTOS);
        if (pontos > PONTOS) {
          printf("Resultado: Carta 1 venceu!");
        } else if (pontos == PONTOS) {
          printf("Resultado: Empate!");
        } else {
          printf("Resultado: Carta 2 venceu!");
        }
      break;

      case 6: 
        printf("Carta 1: %s - Carta 2: %s\n", estado, ESTADO);
        printf("Atributo: Densidade demográfica \n");
        printf("Carta 1: %f - Carta 2: %f\n", densidade, DENSIDADE);
        if (densidade > DENSIDADE) {
          printf("Resultado: Carta 2 venceu!");
        } else if (densidade == DENSIDADE) {
          printf("Resultado: Empate!");
        } else {
          printf("Resultado: Carta 1 venceu!");
        }
      break;
    }

    
    
    return 0;
    }