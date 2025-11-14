#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() 
{
  // Área para definição das variáveis para armazenar as propriedades das cidades
  //carta 1
  char estado1;
  char codigo_da_carta1[4];
  char nome_da_cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int num_pontos_turisticos1;

  //carta 2
  char estado2;
  char codigo_da_carta2[4];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int num_pontos_turisticos2;

  // Área para entrada de dados
  printf ("Olá! Bem vindo ao jogo do Super Trunfo.\n");
  printf ("Vamos iniciar com os dados da primeira carta: \n\n");

  printf ("Insira uma letra de A a H para representar o Estado: \n");
  scanf(" %c", &estado1);

  printf ("Crie um código para essa carta:\n");
  printf("(Que deve seguir a seguinte regra: a letra do estado seguida de um número de 01 a 04)\n");
  scanf("%s", codigo_da_carta1);

  printf ("Insira o nome da cidade: \n");
  scanf(" %[^\n]", nome_da_cidade1);

  printf ("Insira o número de habitantes: \n");
  scanf ("%d", &populacao1);

  printf ("Insira a área da cidade em Km2: \n");
  scanf ("%f", &area1);

  printf ("Insira o PIB: \n");
  scanf ("%f", &pib1);

  printf ("Insira a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &num_pontos_turisticos1);

  printf ("\nAgora vamos inserir os dados da segunda carta!\n");
  
  
  printf ("Insira uma letra de A a H para representar o Estado: \n");
  scanf(" %c", &estado2);

  printf ("Crie um código para essa carta:\n");
  printf("(Que deve seguir a seguinte regra: a letra do estado seguida de um número de 01 a 04)\n");
  scanf("%s", codigo_da_carta2);

  printf ("Insira o nome da cidade: \n");
  scanf(" %[^\n]", nome_da_cidade2);

  printf ("Insira o número de habitantes: \n");
  scanf ("%d", &populacao2);

  printf ("Insira a área da cidade em Km2: \n");
  scanf ("%f", &area2);

  printf ("Insira o PIB: \n");
  scanf ("%f", &pib2);

  printf ("Insira a quantidade de pontos turísticos na cidade: \n");
  scanf ("%d", &num_pontos_turisticos2);

  // Área para exibição dos dados da cidade

  printf ("\n\n==== Carta 1 ====\n");
  printf ("Estado: %c\n", estado1);
  printf ("Código: %s\n", codigo_da_carta1);
  printf ("Nome da cidade: %s\n", nome_da_cidade1);
  printf ("População: %d\n", populacao1);
  printf ("Área: %.2f Km2\n", area1);
  printf ("PIB: %.2f bilhões de reais\n", pib1);
  printf ("Número de Pontos Turísticos: %d\n", num_pontos_turisticos1);

  printf ("\n\n==== Carta 2 ====\n");
  printf ("Estado: %c\n", estado2);
  printf ("Código: %s\n", codigo_da_carta2);
  printf ("Nome da cidade: %s\n", nome_da_cidade2);
  printf ("População: %d\n", populacao2);
  printf ("Área: %.2f Km2\n", area2);
  printf ("PIB: %.2f bilhões de reais\n", pib2);
  printf ("Número de Pontos Turísticos: %d\n", num_pontos_turisticos2);
  
  return 0;
} 
