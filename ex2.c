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

    printf("---------Carta 1-----------\n");

    printf("Estado: %c\n", estadoA);
    printf("Codigo: %s\n", codigoA01);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %f\n", pib1);
    printf("Turismo: %d\n", turismo1);

    printf("---------Carta 2-----------\n");
    printf("Estado: %c\n", estadoB);
    printf("Codigo: %s\n", codidoB02);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %f\n", pib2);
    printf("Turismo: %d\n", turismo2);



    return 0;


}