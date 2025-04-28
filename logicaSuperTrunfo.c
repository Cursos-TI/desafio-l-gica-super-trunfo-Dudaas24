#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  

int main() {

    //VARIÁVEIS DAS COMPARAÇÃO
    int opcao;

   //VARIÁVEIS DA CARTA 1 (foi necessário ter variáveis separadas para ser feita a comparação das cartas e determinar a carta vencedora).
    char cidade1[50], pais1[50];
    char codigo1[2];
    char estado1[5];
    //EXEMPLO
    int pontos_turiticos1;
    unsigned long int  populacao1;
    float area1, pib1;
    //Aventureiro 1: variável de densidade e PIB per carpita
    float pib_percapita1, densidade1;
    //Mestre 1: super poder (soma dos atributos numéricos)
    int resultado1;

    //VARIÁVEIS DA CARTA 2
    char cidade2[50], pais2[50];
    char codigo2[2];
    char estado2[5];
    int pontos_turiticos2;
    unsigned long int populacao2;
    float area2, pib2;
    //Aventureiro 1: variável de densidade e PIB per carpita
    float pib_percapita2, densidade2;
    //Mestre 1: super poder (soma dos atributos numéricos)
    int resultado2;

    printf("------------- DESAFIO SUPER TRUNFO -------------\n" );

    printf("\n***CARTA 1***\n");
    printf("Digite o nome do País:\n");
    scanf("%s", &pais1);
    printf("Digite o Estado (de A a H):\n");
    getchar();  // Para limpar o caractere de nova linha no buffer
    scanf("%c", &estado1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);
    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", &codigo1);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);
    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib1);
    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%d", &pontos_turiticos1);


    printf("\n***CARTA 2***\n");
    printf("Digite o nome do País:\n");
    scanf("%s", &cidade2);
    printf("Digite o Estado (de A a H):\n");
    getchar();  // Para limpar o caractere de nova linha no buffer
    scanf("%c", &estado2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);
    printf("Digite o código da carta (ex: A01):\n");
    scanf("%s", &codigo2);
    printf("Digite a população da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);
    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib2);
    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%d", &pontos_turiticos2);

    //Atribuição de operadores matemáticos da CARTA 1
    pib_percapita1 = (pib1 * 1000000000) / populacao1;
    densidade1 = populacao1 / area1;
    resultado1 = populacao1 + (int)area1 + (int)pib1 + pontos_turiticos1 + (int)pib_percapita1;

    //Atribuição de operadores matemáticos da CARTA 2
    pib_percapita2 = (pib2 * 1000000000) / populacao2;
    densidade2 = populacao2 / area2;
    resultado2 = populacao2 + (int)area2 + (int)pib2 + pontos_turiticos2 + (int)pib_percapita2;

    //Exibição de dados da Carta 1
    printf("\n***DADOS DA CARTA 1***\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1); 
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km/2\n", area1);
    printf("PIB (Produto Interno Bruto): %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turiticos1);
    printf("Densidade Demográfica: %.2f\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pib_percapita1);

    //Exibição de dados da Carta 2
    printf("*** DADOS DA CARTA 2***\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km/2\n", area2);
    printf("PIB (Produto Interno Bruto): %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turiticos2);
    printf("Densidade Demográfica: %.2f\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pib_percapita2);

    //COMPARAÇÃO DAS CARTAS
    int opcao1, opcao2;

    printf("\n***COMPARAÇÃO DAS CARTAS***\n");
    
    printf("Escolha o primeiro atributo a ser comparado:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite uma das opções (1 a 5)\n");
    scanf("%d", &opcao1);

    printf("Escolha o segundo atributo a ser comparado (diferente do primeiro):\n");
    scanf("%d", &opcao2);

     // Primeiro atributo
     printf("Atributo escolhido 1: ");
     switch(opcao1) {
         case 1:
             printf("População\n");
             break;
         case 2:
             printf("Área\n");
             break;
         case 3:
             printf("PIB\n");
             break;
         case 4:
             printf("Pontos Turísticos\n");
             break;
         case 5:
             printf("Densidade Demográfica\n");
             break;
         default:
             printf("Opção inválida!\n");
             return 1;
     }
 
     // Segundo atributo
     printf("Atributo escolhido 2: ");
     switch(opcao2) {
         case 1:
             printf("População\n");
             break;
         case 2:
             printf("Área\n");
             break;
         case 3:
             printf("PIB\n");
             break;
         case 4:
             printf("Pontos Turísticos\n");
             break;
         case 5:
             printf("Densidade Demográfica\n");
             break;
         default:
             printf("Opção inválida!\n");
             return 1;
     }
 
     // Implementação das comparações
     if(opcao1 == 1) {
         if(populacao1 > populacao2) {
             printf("Carta 1 venceu no primeiro atributo!\n");
         } else if(populacao1 < populacao2) {
             printf("Carta 2 venceu no primeiro atributo!\n");
         } else {
             printf("Empate no primeiro atributo!\n");
         }
     }
 
     if(opcao2 == 2) {
         if(area1 > area2) {
             printf("Carta 1 venceu no segundo atributo!\n");
         } else if(area1 < area2) {
             printf("Carta 2 venceu no segundo atributo!\n");
         } else {
             printf("Empate no segundo atributo!\n");
         }
     }
     // Adicione as comparações para PIB, pontos turísticos, e densidade de acordo com o solicitado.
     return 0;
 }