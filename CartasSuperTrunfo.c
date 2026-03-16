#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // ===== CARTA 1 =====
   char codigo1 [4]="A01";
   char cidade1[20]="Brasilia";
   int populacao1=1202554;
   float area1=1000000;
   float pib1=3000000;
   int pontos1=30;
   float pibcapita1;
   float densidade1;
   float SuperPoder1;
   float inversoDensidade1;
   int resultadoP1_P2;
   int resultadoPIB1_PIB2;
   int resultadoDP1_DP2;
   int resultadoPC1_PC2;

   // ===== CARTA 2 =====
   char codigo2[4]="B01";
   char cidade2[20]="Fortaleza";
   int populacao2=13823908;
   float area2=200000;
   float pib2=500000;
   int pontos2=10;
   float pibcapita2;
   float densidade2;
   float SuperPoder2;
   float inversoDensidade2;
   int resultadoA1_A2;
   int resultadoPT1_PT2;
   int resultadoS1_S2;
   

    printf("===== CADASTRO DE CARTAS - SUPER TRUNFO =====\n\n");
    
      printf("=== CARTA 1 ===\n");
      printf("Codigo (ExA01): ");
      scanf("%s", codigo1);
      
      printf("Nome da cidade: ");
      scanf("%s", cidade1);
      
      printf("Populacao: ");
      scanf("%d", &populacao1);

      printf("Area (km²): ");
      scanf("%f", &area1);

      printf("Pib (em bilhoes): ");
      scanf("%f", &pib1);

      printf("Numero de pontos turisticos: ");
      scanf("%d", &pontos1);

      densidade1 = (populacao1 / area1);
      pibcapita1 = (pib1 / populacao1);
      inversoDensidade1 = ( 1 / densidade1);
      SuperPoder1 = (populacao1 + area1 + pib1 + pontos1 + pibcapita1 + inversoDensidade1);
      resultadoP1_P2 = (populacao1 > populacao2);
      resultadoA1_A2 = ( area1 > area2);
      resultadoPT1_PT2 = (pontos1 > pontos2);
      resultadoPIB1_PIB2 = (pib1 > pib2);
      resultadoDP1_DP2 = (densidade1 > densidade2);
      resultadoPC1_PC2 = (pibcapita1 > pibcapita2);
      resultadoS1_S2 = (SuperPoder1 > SuperPoder2);



      printf("\n=== CARTA 2 ===\n");
      printf("Codigo (ex: B02): ");
      scanf("%s", codigo2);

      printf("Nome da cidade: ");
      scanf("%s", &cidade2);

      printf("Populacao: ");
      scanf("%d", &populacao1);
      
      printf("Area (km²): ");
      scanf("%f", &area2);

      printf("PIB (em bilhoes): ");
      scanf("%f", &pib2);

      printf("Numero de pontos turisticos: ");
      scanf("%d", &pontos2);


      densidade2 = (populacao2 / area2);
      pibcapita2 = (pib2 / populacao2);
      inversoDensidade2 = (1 / densidade2);
      SuperPoder2 = (populacao2 + area2 + pib2 + pontos2 + pibcapita2 + inversoDensidade2);

       printf("\n\n===== CARTAS CADASTRADAS =====\n");

       printf("\n--- CARTA 1 ---\n");
       printf("Codigo: %s\n", codigo1);
       printf("Cidade: %s\n", cidade1);
       printf("Populacao: %d habitantes\n", populacao1);
       printf("Area: %.2f km²\n", area1);
       printf("PIB: %.2f bilhoes\n", pib1);
       printf("Pontos turisticos: %d\n", pontos1);
       printf("Densidade populacional1: %.2f\n", densidade1);
       printf("PIB por capita 1: %.2f\n", pibcapita1);
       printf("Resultado das Comparações\n");
       printf("População: %s (%d)\n",resultadoP1_P2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoP1_P2);
       printf("Área: %s (%d)\n",resultadoA1_A2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoA1_A2);
       printf("PIB: %s (%d)\n",resultadoPIB1_PIB2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoPIB1_PIB2);
       printf("Pontos Turísticos: %s (%d)\n",resultadoPT1_PT2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoPT1_PT2);
       printf("Densidade Populacional: %s (%d)\n",resultadoDP1_DP2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoDP1_DP2);
       printf("PIB per Capita: %s (%d)\n",resultadoPC1_PC2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoPC1_PC2);
       printf("Super Poder: %s (%d)\n",resultadoS1_S2 ? "Carta 1 venceu" : "Carta 2 venceu",resultadoS1_S2);

      
       printf("\n--- CARTA 2 ---\n");
       printf("Codigo: %s\n", codigo2);
       printf("Cidade: %s\n", cidade2);
       printf("Populacao: %d habitantes\n", populacao2);
       printf("Area: %.2f km²\n", area2);
       printf("PIB: %.2f bilhoes\n", pib2);
       printf("Pontos Turisticos: %d\n", pontos2);
       printf("Densiade populacional2:%.2f\n", densidade2);
       printf("PIB por capita 2: %.2f\n", pibcapita2);

       printf("\nCadastro finalizado com sucesso!\n");

  return 0;
} 
