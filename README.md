#include <stdio.h>

 int main() {


    char estado[50], codigodacarta[50], nomedacidade[50],estado2[50], codigodacarta2[50], nomedacidade2[50];
    int populacao, numerodepontosturisticos,populacao2, numerodepontosturisticos2;
    float PIB,area,PIB2,area2;

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
    scanf("%i", &populacao);

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
    scanf("%i", &populacao2);

    printf("Area (em km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Numero de pontos turisticos: ");
    scanf("%i", &numerodepontosturisticos2);

    //informaçoes das cartas //

    //carta 1//

    printf("\nSUA PIMEIRA CARTA TEM OS SEGUINTES ATRIBUTOS!\n");
    printf("carta: 1");
    printf("Estado: %s \n", estado);
    printf("codigo da carta: %s \n", codigodacarta);
    printf("nome da cidade: %s \n", nomedacidade);
    printf("populaçao: %i \n", populacao);
    printf("Area: %.3f (em km2) \n", area);
    printf("PIB: %.3f de reais \n", PIB);
    printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos);

    //carta 2//

     printf("\nSUA SEGUNDA CARTA TEM OS SEGUINTES ATRIBUTOS!\n");
    printf("carta: 2");
    printf("Estado: %s \n", estado2);
    printf("codigo da carta: %s \n", codigodacarta2);
    printf("nome da cidade: %s \n", nomedacidade2);
    printf("populaçao: %i \n", populacao2);
    printf("Area: %.3f (em km2) \n", area2);
    printf("PIB: %.3f de reais \n", PIB2);
    printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos2);

    return 0;

 }
