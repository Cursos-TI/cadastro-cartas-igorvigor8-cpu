#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // ===== CARTA 1 =====
   char codigo1 [4]="A01";
   char cidade1[50]="Brasilia";
   int populacao1=1202554;
   float area1=1000000;
   float pib1=3000000;
   int pontos1=30;

   // ===== CARTA 2 =====
   char codigo2[4]="B01";
   char cidade2[50]="Fortaleza";
   int populacao2=13823908;
   float area2=200000;
   float pib2=500000;
   int pontos2=10;

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

       printf("\n\n===== CARTAS CADASTRADAS =====\n");

       printf("\n--- CARTA 1 ---\n");
       printf("Codigo: %s\n", codigo1);
       printf("Cidade: %s\n", cidade1);
       printf("Populacao: %d habitantes\n", populacao1);
       printf("Area: %.2f km²\n", area1);
       printf("PIB: %.2f bilhoes\n", pib1);
       printf("Pontos turisticos: %d\n", pontos1);
      
       printf("\n--- CARTA 2 ---\n");
       printf("Codigo: %s\n", codigo2);
       printf("Cidade: %s\n", cidade2);
       printf("Populacao: %d habitantes\n", populacao2);
       printf("Area: %.2f km²\n", area2);
       printf("PIB: %.2f bilhoes\n", pib2);
       printf("Pontos Turisticos: %d\n", pontos2);

       printf("\nCadastro finalizado com sucesso!\n");

  return 0;
} 
