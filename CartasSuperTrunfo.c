#include <stdio.h>
int main(){
char cidade[99] = "Rio de janeiro";
char nome;
int opcao, opcao2;
char codigo[99] = "A02";
long int populacao1;
long int populacao2;
float area;
float area2;
float pib;
float pib2;
int turismo;
int turismo2;
float super1;
float super2;
int resultado;
int resultado2;
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
scanf("%f", &area2);

printf("Coloque o PIB da sua cidade:\n");
scanf("%f", &pib2);

printf("Quantos pontos turísticos tem na sua cidade?:\n");
scanf("%d", &turismo2);

// Cálculo da densidade populacional carta 02
area = (float) populacao2 / area2;
printf("\n\nA densidade poulacional é: %f\n", area2);

// Cálculo do PIB per capta carta 02
pib = (float) populacao2 / pib2;
printf("\n\nO PIB per capta da sua cidade é: %f\n", pib2);

// Cálculo do super poder da carta 02
super2 = (float) (populacao2 / area2) + (populacao2 / pib2) + populacao2 + pib2 + area2;
printf("\nO pder da sua carta é: %f\n", super2);

// Comparação das cartas  
printf("\n Escolha o primeiro método de comparação das cartas: \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Pib\n");
printf("4. Super-poder\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1:
     populacao1 > populacao2 ? 1 : 0;
   printf("Você escolheu a opção população\n");
break;
case 2:
    area > area2 ? 1 : 0;
   printf("Você escolheu a opção área\n");
break;
case 3:
    pib > pib2 ? 1 : 0;
   printf("Você escolheu a opção pib\n");
    break;
    case 4:
   super1 > super1 ? 1 : 0;
    printf("Você escolheu a opção super-poder\n");
   break;
   
   default:

    printf("Opção inválida!\n");
    break;
}

printf("\n Escolha o segundo método de comparação das cartas: \n");
printf("1. População\n");
printf("2. Área\n");
printf("3. Pib\n");
printf("4. Super-poder\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
   populacao2 > populacao1 ? 1 : 0;
   printf("Você escolheu a opção população \n");
break;
case 2:
    area2 > area ? 1 : 0;
   printf("Você escolheu a opção área\n");
break;
case 3:
     pib2 > pib ? 1 : 0;
   printf("Você escolheu a opção pib\n");
    break;
    case 4:
     super1 > super2 ? 1 : 0;
   printf("Você escolheu a opção super-poder\n");
   break;
   
   default:

    printf("Opção inválida!\n");
    break;
}

if (resultado > resultado2)
{
    printf("Jogador 1 venceu!\n");
} else if (resultado != resultado2)
{
    printf("Empatou!\n");
}else
{
    printf("Jogador 2 venceu!\n");
}



return 0;

}









