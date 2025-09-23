#include <stdio.h>
int main() {

    char estadoA = 'A';
    char estadoB = 'B';

    char codigoA01[] = "A01";
    char codidoB02[] = "B02";

    char cidade1[] = "São Paulo"; 
    char cidade2[]= "Rio de Janeiro";

    int populacao1 = 12325000;
    int populacao2 = 6748000;

    float area1 = 1521.11;
    float area2 = 1200.25;

    float pib1 = 699.28;
    float pib2 = 699.28;

    int turismo1 = 50;
    int turismo2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibperc1 = pib1 / populacao1;
    float pibperc2 = pib2 / populacao2;

    float superpoder1 = populacao1 + area1 + pib1 + pibperc1 + (1/densidade1) + turismo1;
    float superpoder2 = populacao2 + area2 + pib2 + pibperc2 + (1/densidade2) + turismo2;

    int carta1;
    int carta2;

    printf("---------Carta 1-----------\n");

    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA01);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Turismo: %d\n", turismo1);
    printf("densidade: %f\n", densidade1);
    printf("Pib per capita: %f\n", pibperc1);
    printf("Superpoder: %.2f\n", superpoder1);




    printf("---------Carta 2-----------\n");
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codidoB02);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Turismo: %d\n", turismo2);
    printf("densidade: %.2f\n", densidade2);
    printf("Pib per capita: %.f\n", pibperc2);
    printf("Superpoder: %.2f\n", superpoder2);


    printf("----------Comparacao de cartas----------\n");
    carta1 = populacao1 > populacao2;
    carta1 = area1 > area2;
    carta1 = pib1 > pib2;
    carta1 = turismo1 > turismo2;
    carta2 = densidade1 > densidade2;
    carta1 = pibperc1 > pibperc2;


    printf("Populacao: Carta 1 venceu %d\n", carta2);
    printf("Area: Carta 1 venceu %d\n", carta2);
    printf("PIB: Carta 1 venceu %d\n", carta2);
    printf("Turismo: Carta 1 venceu %d\n", carta2);
    printf("Densidade: Carta 2 venceu %d\n", carta1);
    printf("PibPerc: Carta 1 venceu %d\n", carta2);
    printf("Superpoder: carta 1 venceu %d\n", carta2);


   





    return 0;

