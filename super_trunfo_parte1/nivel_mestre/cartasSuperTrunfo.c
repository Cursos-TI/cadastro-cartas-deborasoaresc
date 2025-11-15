#include <stdio.h>

int main() 
{
// Desafio Super Trunfo - Países 
// Tema 3 - implementar a lógica de comparação entre duas cartas do Super Trunfo 
// Objetivo: Neste nível avançado, você implementará a lógica de comparação entre duas cartas do Super Trunfo, determinando a vencedora de cada atributo e introduzindo o conceito de "Super Poder".

// Variaveis Carta 1
  char estado1;
  char codigo_da_carta1[5];
  char nome_da_cidade1[50];
  unsigned long int populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1;
  float densidade_populacional1;
  float pib_percapita1;
  float super_poder1;

  // Variaveis Carta 2
  char estado2;
  char codigo_da_carta2[5];
  char nome_da_cidade2[50];
  unsigned long int populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;
  float densidade_populacional2;
  float pib_percapita2;
  float super_poder2;

  //apresentacao
  printf("Olá! Bem vindo ao jogo do Super Trunfo.\n");

  // Entrada Carta 1

  printf("\n Vamos iniciar com os dados da primeira carta: \n\n");
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

  super_poder1 = (float)populacao1 + area1 + pib1 + (float)num_pontos_turisticos1 + pib_percapita1 + (1.0 / densidade_populacional1);
  super_poder2 = (float)populacao2 + area2 + pib2 + (float)num_pontos_turisticos2 + pib_percapita2 + (1.0 / densidade_populacional2);


  // Saídas

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

  //comparações

  printf ("\n=====Resultados====\n");
  
  // População — vence maior
  printf("\nPopulação: Carta 1 venceu (%d)\n", populacao1 > populacao2);
  
  // Área — maior vence
  printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
  
  // PIB — maior vence
  printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
  
  // Pontos turísticos — maior vence
  printf("Pontos Turísticos: Carta 1 venceu (%d)\n", num_pontos_turisticos1 > num_pontos_turisticos2);

  // Densidade — menor vence!
  printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade_populacional1 < densidade_populacional2);

  // PIB per capita — maior vence
  printf("PIB per Capita: Carta 1 venceu (%d)\n", pib_percapita1 > pib_percapita2);

  // Super Poder — maior vence
  printf("Super Poder: Carta 1 venceu (%d)\n", super_poder1 > super_poder2);

  return 0;
}
