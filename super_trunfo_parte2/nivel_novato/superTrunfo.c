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

//comparacoes e resultado:

    printf ("\n====QUEM VENCEEEU? =====\n");
    printf ("\nComparação de cartas (Atributo: População):\n");
    printf ("\nCarta 1 - Cidade: %s População: %d pessoas\n", nome_da_cidade1, populacao1);
    printf ("\nCarta 2 - Cidade: %s População: %d pessoas\n", nome_da_cidade2, populacao2);

    if (populacao1 > populacao2) {
        printf ("\nCidade %s venceu!\n", nome_da_cidade1);
    } else {
        printf ("\nCidade %s venceu!\n", nome_da_cidade2);
    }

  return 0;
}
