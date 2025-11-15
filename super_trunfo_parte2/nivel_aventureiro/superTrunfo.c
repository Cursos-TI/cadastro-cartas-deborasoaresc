#include <stdio.h>

int main() 
{
// Desafio Super Trunfo - Países 
// Tema 3 - Interatividade  
// Objetivo: Neste nível, você implementará um menu interativo, com uso do switch case

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
  
  //menu interativo
  
  int opcao;
  
  printf("========= MENU DE COMPARAÇÃO =========\n");
  printf("Escolha o atributo para comparar as cartas:\n");
  printf("1 - População\n");
  printf("2 - Área\n");
  printf("3 - PIB\n");
  printf("4 - Pontos turísticos\n");
  printf("5 - Densidade demográfica (vence o MENOR)\n");
  printf("Digite sua opção: ");
  scanf("%d", &opcao);
  
  printf("\nComparando: %s  X  %s\n\n", nome_da_cidade1, nome_da_cidade2);

  switch (opcao) 
  {
    case 1:
    printf("Atributo escolhido: POPULACAO\n");
            printf("%s: %d habitantes\n", nome_da_cidade1, populacao1);
            printf("%s: %d habitantes\n", nome_da_cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nVencedora: %s\n", nome_da_cidade1);
            }
            else if (populacao2 > populacao1) {
                printf("\nVencedora: %s\n", nome_da_cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }
    break;
    
    case 2:
        printf("Atributo escolhido: AREA\n");
            printf("%s: %.2f km²\n", nome_da_cidade1, area1);
            printf("%s: %.2f km²\n", nome_da_cidade2, area2);

            if (area1 > area2) {
                printf("\nVencedora: %s\n", nome_da_cidade1);
            }
            else if (area2 > area1) {
                printf("\nVencedora: %s\n", nome_da_cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }

    break;

    case 3:
    printf("Atributo escolhido: PIB\n");
            printf("%s: %.3f\n", nome_da_cidade1, pib1);
            printf("%s: %.3f\n", nome_da_cidade2, pib2);

            if (pib1 > pib2) {
                printf("\nVencedora: %s\n", nome_da_cidade1);
            }
            else if (pib2 > pib1) {
                printf("\nVencedora: %s\n", nome_da_cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }
    break;

    case 4:
    printf("Atributo escolhido: PONTOS TURISTICOS\n");
            printf("%s: %d\n", nome_da_cidade1, num_pontos_turisticos1);
            printf("%s: %d\n", nome_da_cidade2, num_pontos_turisticos2);

            if (num_pontos_turisticos1 > num_pontos_turisticos2) {
                printf("\nVencedora: %s\n", nome_da_cidade1);
            }
            else if (num_pontos_turisticos2 > num_pontos_turisticos1) {
                printf("\nVencedora: %s\n", nome_da_cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }    
    break;

    case 5:
    printf("Atributo escolhido: DENSIDADE DEMOGRAFICA (menor vence)\n");
            printf("%s: %.4f hab/km²\n", nome_da_cidade1, densidade_populacional1);
            printf("%s: %.4f hab/km²\n", nome_da_cidade2, densidade_populacional2);

            if (densidade_populacional1 < densidade_populacional2) {
                printf("\nVencedora: %s\n", nome_da_cidade1);
            }
            else if (densidade_populacional2 < densidade_populacional1) {
                printf("\nVencedora: %s\n", nome_da_cidade2);
            }
            else {
                printf("\nEmpate!\n");
            }
    break;
  
  default:
    printf("Opcao invalida! Tente novamente.\n");

    break;
  }
  return 0;

}
