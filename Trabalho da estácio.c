#include <stdio.h>
int main(){
char país[30] = "Brasil";
char estado[50] = "rio de janeiro";
char cidade [80] = "rio de janeiro";
char sigla [99] = "rio de janeiro";
int população = 90;
float pib = 34.8;
double area = 9999.99;
int turismo = 89;

printf("Qual o seu país?\n");
scanf("%s", &país);

printf("Qual seu estado? (insira apenas a sigla)\n");
scanf(" %s", &estado);

printf("Qual sua cidade?(insira apenas a sigla)\n");
scanf(" %s", &cidade);


printf("Qual a população do seu estado?\n");
scanf("%d", &população);


printf("Qual o PIB do seu país?\n");
scanf("%f", &pib);

printf("Qual a área do seu páis Km²:\n");
scanf("%lf", &area);

printf("Quantos pontos turísticos tem na sua cidade?\n");
scanf("%d",&turismo);





























}



