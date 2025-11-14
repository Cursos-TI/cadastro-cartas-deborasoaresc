/**
 * @file CartasSuperTrunfo.c
 * @author 
 * @brief 
 * @version 0.1
 * @date 2025-11-14
 */

#include <stdio.h>

int main() 
{
// Desafio Super Trunfo - Países 
// Tema 2 - Calculando a Densidade Populacional e PIB per Capita 
// Objetivo: Neste nível, você implementará a lógica para calcular e exibir a densidade populacional e o PIB per capita.

// Carta 1
  char estado1;
  char codigo_da_carta1[5];
  char nome_da_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1;
  float densidade_populacional1;
  float pib_percapita1;

  // Carta 2
  char estado2;
  char codigo_da_carta2[5];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;
  float densidade_populacional2;
  float pib_percapita2;

  // Entrada Carta 1
  printf("Olá! Bem vindo ao jogo do Super Trunfo.\n");
  printf("Vamos iniciar com os dados da primeira carta: \n\n");

  printf("Insira uma letra de A a H para representar o Estado: \n");
  scanf(" %c", &estado1);

  printf("Crie um código para essa carta:\n");
  printf("(A letra do estado seguida de um número de 01 a 04)\n");
  scanf("%s", codigo_da_carta1);

  printf("Insira o nome da cidade: \n");
  scanf(" %[^\n]", nome_da_cidade1);

  printf("Insira o número de habitantes: \n");
  scanf("%d", &populacao1);

  printf("Insira a área da cidade em Km2: \n");
  scanf("%f", &area1);

  printf("Insira o PIB: \n");
  scanf("%f", &pib1);

  printf("Insira a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &num_pontos_turisticos1);

  // Entrada Carta 2
  printf("\nAgora vamos inserir os dados da segunda carta!\n");

  printf("Insira uma letra de A a H para representar o Estado: \n");
  scanf(" %c", &estado2);

  printf("Crie um código para essa carta:\n");
  printf("(A letra do estado seguida de um número de 01 a 04)\n");
  scanf("%s", codigo_da_carta2);

  printf("Insira o nome da cidade: \n");
  scanf(" %[^\n]", nome_da_cidade2);

  printf("Insira o número de habitantes: \n");
  scanf("%d", &populacao2);

  printf("Insira a área da cidade em Km2: \n");
  scanf("%f", &area2);

  printf("Insira o PIB: \n");
  scanf("%f", &pib2);

  printf("Insira a quantidade de pontos turísticos na cidade: \n");
  scanf("%d", &num_pontos_turisticos2);

  // Cálculos
  densidade_populacional1 = populacao1 / area1;
  pib_percapita1 = (pib1 * 1000000000.0) / populacao1;

  densidade_populacional2 = populacao2 / area2;
  pib_percapita2 = (pib2 * 1000000000.0) / populacao2;

  // Saída
  printf("\n\n==== Carta 1 ====\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo_da_carta1);
  printf("Nome da cidade: %s\n", nome_da_cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f Km²\n", area1);
  printf("PIB: %.2f bilhões de reais\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
  printf("PIB per capita: %.2f reais\n", pib_percapita1);

  printf("\n\n==== Carta 2 ====\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo_da_carta2);
  printf("Nome da cidade: %s\n", nome_da_cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f Km²\n", area2);
  printf("PIB: %.2f bilhões de reais\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
  printf("PIB per capita: %.2f reais\n", pib_percapita2);

  return 0;
}
