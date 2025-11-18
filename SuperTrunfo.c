#include <stdio.h>

int main() {

    //Declaração das variáveis para a primeira e segunda carta

    char estado1, estado2, cidade1[50], cidade2[50];
    int codigo1, codigo2, populacao1, populacao2, ponto1, ponto2;
    float area1, area2, pib1, pib2;

    //Coleta das informações da primeira carta

    printf("Vamos começar com as informações da sua primeira carta do Super Trunfo!\n");

    printf("Insira uma letra de A até H para representar um estado: ");
    scanf(" %c", &estado1);
    printf("Digite um número de 1 a 4 para representar o código da carta: ");
    scanf("%d" , &codigo1);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade1);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao1);   
    printf("Insira a área da cidade: ");   
    scanf("%f", &area1);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib1);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d" , &ponto1);

    printf("\nColetado as informações da primeira carta com sucesso!\n");
    printf("Agora vamos começar com as informações da sua segunda carta!\n");

    //Coleta das informações da segunda carta reutilizando o mesmo processo

    printf("Insira uma letra de A até H para representar um estado: ");
    scanf(" %c", &estado2);
    printf("Digite um número de 1 a 4 para representar o código da carta: ");
    scanf("%d" , &codigo2);
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade2);
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao2);   
    printf("Insira a área da cidade: ");   
    scanf("%f", &area2);
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Insira o número de pontos turísticos da cidade: ");
    scanf("%d" , &ponto2);

    //Finalizado a coleta de dados, agora vamos exibir as informações coletadas

    printf("\nColetado as informações da segunda carta com sucesso!\n");
    printf("Agora vamos ver as informações registradas!\n\n");

    printf("Primeira Carta:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %d\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", ponto1);

    printf("\nSegunda Carta:\n");   
    printf("Estado: %c\n", estado2);
    printf("Código: %d\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes \n" , populacao2);
    printf("Área: %.2f km² \n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", ponto2);

    return 0;
}