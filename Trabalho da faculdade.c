#include <stdio.h>
int main(){
char cidade[99] = "Rio de janeiro";
char nome = 'c';
char codigo[99] = "A02";
int populacao = 3333;
float area = 444.9;
float pib = 333.9;
int turismo = 40;

//introdução da cara 01
printf("Insira a sigla do seu estado: \n");
scanf("%s", &cidade);
 
printf("Insira a primeira letra do seu estado: \n");
scanf(" %c", &nome);

printf("Coloque a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf("%s",&codigo);

printf("Insra a população da sua cidade:\n");
scanf("%d", &populacao);

printf("Coloque o PIB da sua cidade:\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos tem na sua cidade?:\n");
scanf("%d", &turismo);

// Cálculo da densidade populacional 01
area = (float) populacao / area;
printf("\n\nA densidade poulacional é: %f\n", area);

// Cálculo do PIB per capta 01
pib = (float) populacao/pib;
printf("\nO PIB per capta da sua cidade é: %f\n", pib);

//introdução da cara 02
printf("\n\nSegunda carta:\n\n");

printf("Insira a sigla do seu estado: \n");
scanf("%s", &cidade);
 
printf("Insira a primeira letra do seu estado: \n");
scanf(" %c", &nome);

printf("Coloque a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf("%s",&codigo);

printf("Insra a população da sua cidade:\n");
scanf("%d", &populacao);

printf("Coloque o PIB da sua cidade:\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos tem na sua cidade?:\n");
scanf("%d", &turismo);

// Cálculo da densidade populacional carta 02
area = (float) populacao / area;
printf("\n\nA densidade poulacional é: %f\n", area);

// Cálculo do PIB per capta carta 02
pib = (float) populacao /pib;
printf("\nO PIB per capta da sua cidade é: %f\n", pib);








}