#include <stdio.h>

int main() {

char estado[50], codigodacarta[50], nomedacidade[50],estado2[50], codigodacarta2[50], nomedacidade2[50];
int  numerodepontosturisticos, numerodepontosturisticos2;
float PIB,area,PIB2,area2;
unsigned long int populacao,populacao2;

//carta 1//

printf("Insira os dados da sua primeira carta\n");
printf("UM EXEMPLO DE MODELO:\nCarta 1:\nEstado: A\nCódigo: A01\nNome da Cidade: São Paulo\nPopulação: 12325000\nÁrea: 1521.11 km²\nPIB: 699.28 bilhões de reais\nNúmero de Pontos Turísticos: 50\n");

printf("\nCarta 1:\n");

printf("Estado: ");
scanf("%s", estado);

printf("Codigo da carta: ");
scanf("%s", codigodacarta);

printf("Nome da cidade: ");
scanf("%s", nomedacidade);

printf("Populacao: ");
scanf("%lu", &populacao);

printf("Area (em km2): ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &PIB);

printf("Numero de pontos turisticos: ");
scanf("%i", &numerodepontosturisticos);

//carta 2//

 printf("\nINSIRA OS DADOS DA SUA SEGUNDA CARTA!\n");


printf("\nCarta 2:\n");


printf("Estado: ");
scanf("%s", estado2);

printf("Codigo da carta: ");
scanf("%s", codigodacarta2);

printf("Nome da cidade: ");
scanf("%s", nomedacidade2);

printf("Populacao: ");
scanf("%lu", &populacao2);

printf("Area (em km2): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("Numero de pontos turisticos: ");
scanf("%i", &numerodepontosturisticos2);

//Calcular a Densidade Populacional//

//carta 1

float densidade;
densidade=populacao/area;

//carta 2//

float densidade2;
densidade2=populacao2/area2;

//Calcular o PIB per Capita//

//carta 1//

float capital;
capital=PIB/populacao;

//carta 2//

float capital2;
capital2=PIB2/populacao2;

//poder//

//carta 1//

float poder;
poder = densidade+capital+populacao+PIB+area+numerodepontosturisticos;

//carta 2//

float poder2;
poder2 = densidade2+capital2+populacao2+PIB2+area2+numerodepontosturisticos2;

//super trunfo//

//cartas 1 //

int rp;
rp= populacao>populacao2;

int ra;
ra= area>area2;

int rpib;
rpib= PIB>PIB2;

int rnp;
rnp= numerodepontosturisticos>numerodepontosturisticos2;

int rpibpc;
rpibpc= capital>capital2;

int rdp;
rdp= densidade<densidade2;

int  rpoder;
rpoder= poder>poder2;

//carta2//

int rp2;
rp2= populacao<populacao2;

int ra2;
ra2= area<area2;

int rpib2;
rpib2= PIB<PIB2;

int rnp2;
rnp2= numerodepontosturisticos<numerodepontosturisticos2;

int rpibpc2;
rpibpc2= capital<capital2;

int rdp2;
rdp2= densidade>densidade2;

int  rpoder2;
rpoder2= poder<poder2;



//informaçoes das cartas //

//carta 1//

printf("\nSUA PIMEIRA CARTA TEM OS SEGUINTES ATRIBUTOS!\n");
printf("carta: 1");
printf("Estado: %s \n", estado);
printf("codigo da carta: %s \n", codigodacarta);
printf("nome da cidade: %s \n", nomedacidade);
printf("populaçao: %lu \n", populacao);
printf("Area: %.3f (em km2) \n", area);
printf("PIB: %.3f de reais \n", PIB);
printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos);
printf("a Densidade Populacional e de :%.2f hab/km²\n", densidade);
printf("o PIB per Capita e de:%.2f reais\n", capital);

//carta 2//

printf("\nSUA SEGUNDA CARTA TEM OS SEGUINTES ATRIBUTOS!\n");
printf("carta: 2");
printf("Estado: %s \n", estado2);
printf("codigo da carta: %s \n", codigodacarta2);
printf("nome da cidade: %s \n", nomedacidade2);
printf("populaçao: %lu \n", populacao2);
printf("Area: %.3f (em km2) \n", area2);
printf("PIB: %.3f de reais \n", PIB2);
printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos2);
printf("a Densidade Populacional e de :%.2f hab/km²\n", densidade2);
printf("o PIB per Capita e de:%.2f reais\n", capital2);

//COMPARAÇAO DE CARTAS//

printf(" \nAGORA VAMOS COMPARA AS CARTAS!\n");
printf("\nSE O RESULTADO FOR (1) O ATRIBUTO GANHOU, MAS SE FOR (0) O ATRIBUTO PERDEU!\n");
printf("carta 1: (%i) / carta 2: (%i) \n", rp,rp2);
printf("carta 1: (%i) / carta 2: (%i) \n", ra,ra2);
printf("carta 1: (%i) / carta 2: (%i) \n", rpib,rpib2);
printf("carta 1: (%i) / carta 2: (%i) \n", rnp,rnp2);
printf("carta 1: (%i) / carta 2: (%i) \n", rpibpc,rpibpc2);
printf("carta 1: (%i) / carta 2: (%i) \n", rdp,rdp2);
printf("carta 1: (%i) / carta 2: (%i) \n", rpoder,rpoder2);



return 0;
}