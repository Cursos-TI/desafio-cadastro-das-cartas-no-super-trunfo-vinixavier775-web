#include <stdio.h>

int main() {
    char estado = 'A';
    char codigo[5] = "A01";
    char nome[14] = "São Paulo";
    int populacao = 123250000;
    float area = 1521.11; //Em KM²
    float pib = 699.28; //Bilhões de Reais
    int numerodepontosturisticos = 50;
    float densidadepopulacional = (float)populacao/area;
    float pibpercapita = pib/populacao;

    char estado2 = 'B';
    char codigo2[5] = "B02";
    char nome2[14] = "Rio de Janeiro";
    int populacao2 =67480000;
    float area2 = 1200.25; //Em KM²
    float pib2 = 300.50; //Bilhões de Reais
    int numerodepontosturisticos2 = 30;
    float densidadepopulacional2 = (float)populacao2/area2;
    float pibpercapita2 = pib2/populacao2;

    printf("Carta 1: \n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Carta: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área (em KM²): %.2f\n", area);
    printf("PIB: %.2f Bilhões Em Reais\n", pib);
    printf("Número de Pontos Turisticos: %d\n", numerodepontosturisticos);
    printf("Dividindo a População: %d Com a Área: %.2f Em KM²\n", populacao, area);
    printf("A Densidade populacional será: %.2f\n", populacao/area);
    printf("Dividindo o PIB: %.2f Em Bilhões de Reais Com a PopulaçãO: %d\n", pib, populacao);
    printf("O PIB Per Capita Será: %e\n", pib/populacao);

    printf("Carta 2: \n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Carta: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área (em KM²): %.2f\n", area2);
    printf("PIB: %.2f Bilhões Em Reais\n", pib2);
    printf("Número de Pontos Turisticos: %d\n", numerodepontosturisticos2);
    printf("Dividindo a População: %d Com a Área: %.2f Em KM²\n", populacao2, area2);
    printf("A Densidade populacional será: %.2f\n", populacao2/area2);
    printf("Dividindo o PIB: %.2f Em Bilhões de Reais Com a PopulaçãO: %d\n", pib2, populacao2);
    printf("O PIB Per Capita Será: %e\n", pib2/populacao2);



    return 0;
}