#include <stdio.h>

int main(){
    char Estado1[50];
    char Codigo1[50];
    char Cidade1[50];
    float Area1;
    float PIB1;
    int Populaçao1, Pontos1;

    printf("Carta 1: \n");
    
    printf("Digite o Estado:");
    scanf("%s", Estado1);

    printf("Digite o Código: ");
    scanf("%s", Codigo1);

    printf("Digite a cidade: ");
    scanf("%s", Cidade1);

    printf("Digite a Área: ");
    scanf("%f", &Area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite a População: ");
    scanf("%d", &Populaçao1);

    printf("Digite o número de Pontos Turisticos: ");
    scanf("%d", &Pontos1);


    char estado[40];
    char Codigo2[50];
    char Cidade2[50];
    float Area2;
    float PIB2;
    int Populaçao2, Pontos2;

    printf("\n");

    printf("Carta 2: \n");

    printf("Digite o Estado:");
    scanf("%s", estado);

    printf("Digite o Código: ");
    scanf("%s", Codigo2);

    printf("Digite a cidade: ");
    scanf("%s", Cidade2);

    printf("Digite a Área: ");
    scanf("%f", &Area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite a População: ");
    scanf("%d", &Populaçao2);

    printf("Digite o número de pontos turisticos: ");
    scanf("%d", &Pontos2);

    printf("\n");

    printf("Carta 1: \n");

    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", Codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("Área: %f km²\n", Area1);
    printf("PIB: %f\n", PIB1);
    printf("população: %d\n", Populaçao1);
    printf("Pontos Turisticos: %d\n", Pontos1);

    printf("\n");

    printf("Carta 2: \n");

    printf("Estado: %s\n", estado);
    printf("Código: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("Área: %f km²\n", Area2);
    printf("PIB: %f\n", PIB2);
    printf("população: %d\n", Populaçao2);
    printf("Pontos Turisticos: %d\n", Pontos2);








    



}
