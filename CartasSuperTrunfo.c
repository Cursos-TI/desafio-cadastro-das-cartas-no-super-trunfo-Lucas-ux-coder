#include <stdio.h>
int main(){
char cidade[99] = "Rio de janeiro";
char nome = 'c';
char codigo[99] = "A02";
long int populacao1 = 3333;
long int populacao2 = 3333;
float area = 444.9;
float pib = 333.9;
int turismo = 40;
float super1;
float super2;

//introdução da cara 01
printf("Insira a sigla do seu estado: \n");
scanf("%s", &cidade);
 
printf("Insira a primeira letra do seu estado: \n");
scanf(" %c", &nome);

printf("Coloque a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf("%s",&codigo);

printf("Insira a população da sua cidade:\n");
scanf("%ld", &populacao1);

printf("Insira a área da sua cidade Km²:\n");
scanf("%f", &area);

printf("Coloque o PIB da sua cidade:\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos tem na sua cidade?:\n");
scanf("%d", &turismo);

// Cálculo da densidade populacional 01
area = (float) populacao1 / area;
printf("\n\nA densidade poulacional é: %f\n", area);

// Cálculo do PIB per capta 01
pib = (float) populacao1 / pib;
printf("\n\nO PIB per capta da sua cidade é: %f\n", pib);

// super poder da carta 01
super1 = (float) (populacao1 / area) + (populacao1 / pib) + populacao1 + pib + area;
printf("\nO pder da sua carta é: %f\n", super1);




//introdução da cara 02
printf("\n\nSegunda carta:\n\n");

printf("Insira a sigla do seu estado: \n");
scanf("%s", &cidade);
 
printf("Insira a primeira letra do seu estado: \n");
scanf(" %c", &nome);

printf("Coloque a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)\n");
scanf("%s",&codigo);

printf("Insira a população da sua cidade:\n");
scanf("%ld", &populacao2);

printf("Insira a área da sua cidade Km²:\n");
scanf("%f", &area);

printf("Coloque o PIB da sua cidade:\n");
scanf("%f", &pib);

printf("Quantos pontos turísticos tem na sua cidade?:\n");
scanf("%d", &turismo);

// Cálculo da densidade populacional carta 02
area = (float) populacao2 / area;
printf("\n\nA densidade poulacional é: %f\n", area);

// Cálculo do PIB per capta carta 02
pib = (float) populacao2 / pib;
printf("\n\nO PIB per capta da sua cidade é: %f\n", pib);

// Cálculo do super poder da carta 02
super2 = (float) (populacao2 / area) + (populacao2 / pib) + populacao2 + pib + area;
printf("\nO pder da sua carta é: %f\n", super2);

// Comparação das cartas 
if (populacao1 > populacao2)
{
   printf("\nCarta 01 venceu!!\n");
} else
{
printf("\nCarta 02 venceu!!\n");
}




return 0;

}









