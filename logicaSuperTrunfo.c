#include <stdio.h>
#include <stdlib.h>  
#include <time.h>  

int main() {

   //VARIÁVEIS DA CARTA 1 (foi necessário ter variáveis separadas para ser feita a comparação das cartas e determinar a carta vencedora).
    char cidade1[15];
    char codigo1[5];
    char estado1;
    int populacao1, pontos_turiticos1;
    float area1, pib1;
    //Aventureiro 1: variável de densidade e PIB per carpita
    float pib_percapita1, densidade1;
    //Mestre 1: super poder (soma dos atributos numéricos)
    int resultado1;


    //VARIÁVEIS DA CARTA 2
    char cidade2[15];
    char codigo2[5];
    char estado2;
    int populacao2, pontos_turiticos2;
    float area2, pib2;
    //Aventureiro 1: variável de densidade e PIB per carpita
    float pib_percapita2, densidade2;
    //Mestre 1: super poder (soma dos atributos numéricos)
    int resultado2;

    
    printf("Cadastro de Cartas do Super Trunfo Países\n");

    //Leitura de dados da Carta 1
    printf("CARTA 1\n");

    printf("Insira o Estado:\n");
    scanf("%c", &estado1);

    printf("Digite o código:\n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao1);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib1);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%d", &pontos_turiticos1);

    //Atribuição de operadores matemáticos
    pib_percapita1 = pib1 / populacao1;
    densidade1 = populacao1 / area1;
    resultado1 = populacao1 + (int)area1 + (int)pib1 + pontos_turiticos1 + (int)pib_percapita1;

    //Exibição de dados da Carta 1
    printf("CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1); 
    printf("População: %d\n", populacao1);
    printf("Área: %.2f\n", area1);
    printf("PIB (Produto Interno Bruto): %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turiticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pib_percapita1);


     //Leitura de dados da Carta 2
    printf("CARTA 2\n");

    printf("Insira o Estado:\n");
    while (getchar() != '\n');
    scanf("%c", &estado2);

    printf("Digite o código da cidade:\n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a população da cidade:\n");
    scanf("%d", &populacao2);

    printf("Qual a área da cidade?\n");
    scanf("%f", &area2);

    printf("Digite o PIB (Produto Interno Bruto):\n");
    scanf("%f", &pib2);

    printf("Qual o número de Pontos Turísticos?\n");
    scanf("%d", &pontos_turiticos2);

    //Atribuição de operadores matemáticos
    pib_percapita2 = pib2 / populacao2;
    densidade2 = populacao2 / area2;
    resultado2 = populacao2 + (int)area2 + (int)pib2 + pontos_turiticos2 + (int)pib_percapita2;

    //Exibição de dados da Carta 2
    printf("CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %c\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f\n", area2);
    printf("PIB (Produto Interno Bruto): %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turiticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pib_percapita2);


    //COMPARAÇÕES DAS CARTAS
    printf("\n***Comparações***\n");
    
    printf("Carta 1 - %s: %d\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d\n", cidade2, populacao2);
    
    //POPULAÇAO
    if(populacao1 > populacao2){
        printf("População: carta 1 venceu (1)\n"); 
    } else if(populacao1 < populacao2){
         printf("População: carta 2 venceu (0)\n");
        } else{
         printf("Densidade: Houve um empate!\n");
    }

    //DENSIDADE
    if(densidade1 < densidade2){
        printf("Densidade: carta 1 venceu (1)\n"); 
    } else if(densidade1 > densidade2){
            printf("Densidade: carta 2 venceu (0)\n");
        } else{
            printf("Densidade: Houve um empate!\n");
        }

    return 0;

}
