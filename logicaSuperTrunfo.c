#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    //VARIÁVEIS DA CARTA 1;
    char nome_pais_carta_1[30];
    int pontos_turisticos_carta_1;
    unsigned long int populacao_carta_1;
    float area_carta_1, pib_carta_1;
    //VARIÁVEIS DA CARTA 2;
    char nome_pais_carta_2[30];
    int pontos_turisticos_carta_2;
    unsigned long int populacao_carta_2;
    float area_carta_2, pib_carta_2;

    //int MAX_NUMBER = 5;
    //int MIN_NUMBER = 1;

    //COLETANDO OS DADOS DO USUÁRIO PARA A CARTA 1
    printf("\n----- DADOS DO PAÍS 1: -----\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome_pais_carta_1);
    printf("Digite a população: ");
    scanf("%lu", &populacao_carta_1);
    printf("Digite a área: ");
    scanf("%f", &area_carta_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_1);

    //CALCULANDO A DENSIDADE DEMOGRÁFICA PARA A CARTA 1
    float densidade_populacional_1 = (float) populacao_carta_1 / area_carta_1;
    //float pib_per_capita_1 = (pib_carta_1 * (float) pow(10,9)) / (float) populacao_carta_1;
    
    //COLETANDO OS DADOS DO USUÁRIO PARA A CARTA 2
    printf("\n----- DADOS DO PAÍS 2: -----\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome_pais_carta_2);
    printf("Digite a população: ");
    scanf("%lu", &populacao_carta_2);
    printf("Digite a área: ");
    scanf("%f", &area_carta_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_2);

    //CALCULANDO A DENSIDADE DEMOGRÁFICA PARA A CARTA 2
    float densidade_populacional_2 = (float) populacao_carta_2 / area_carta_2;
    //float pib_per_capita_2 = (pib_carta_2 * (float) pow(10,9)) / (float) populacao_carta_2;
    
    //int numeroAleatorio = rand() % (MAX_NUMBER + 1 - MIN_NUMBER) + MIN_NUMBER;

    //DESENVOLVENDO O MENU PRINCIPAL COM 5 OPÇÕES DE ATRIBUTOS E 1 OPÇÃO PARA O USUÁRIO SAIR
    //AQUI O USUÁRIO ESCOLHE O ATRIBUTO QUE DESEJA COMPARAR ENTRE AS DUAS CARTAS
    int opcao;
    printf("\n\n----- Escolha um atributo no qual deseja comparar as cartas: -----\n\n");
    printf("1. PIB\n");
    printf("2. Densidade Populacional\n");
    printf("3. População\n");
    printf("4. Área\n");
    printf("5. Pontos turísticos\n");
    printf("6. Sair\n");
    scanf("%d", &opcao);

    //SWITCH COM AS OPÇÕES BASEADA NA ESCOLHA DO USUÁRIO
    switch (opcao)
    {
    case 1:
        printf("O atributo escolhido foi: PIB\n");
        if (pib_carta_1 > pib_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, pib_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else if (pib_carta_1 < pib_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, pib_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_pais_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
        break;
    case 2:
        printf("O atributo escolhido foi: Densidade Populacional\n");
        if (densidade_populacional_1 < densidade_populacional_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, densidade_populacional_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, densidade_populacional_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else if (densidade_populacional_1 > densidade_populacional_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, densidade_populacional_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, densidade_populacional_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_pais_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
        break;
    case 3:
        printf("O atributo escolhido foi: População\n");
        if (populacao_carta_1 > populacao_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %lu\n", nome_pais_carta_1, populacao_carta_1);
            printf("\nCarta 2 - %s: %lu\n", nome_pais_carta_2, populacao_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else if (populacao_carta_1 < populacao_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %lu\n", nome_pais_carta_1, populacao_carta_1);
            printf("\nCarta 2 - %s: %lu\n", nome_pais_carta_2, populacao_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_pais_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
        break;
    case 4:
        printf("O atributo escolhido foi: Área\n");
        if (area_carta_1 > area_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, area_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, area_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else if (area_carta_1 < area_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, area_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, area_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
        break;
    case 5:
        printf("O atributo escolhido foi: Pontos Turísticos\n");
        if (pontos_turisticos_carta_1 > pontos_turisticos_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, pib_carta_2);
            printf("\nResultado: Carta 1 (%s) venceu!\n", nome_pais_carta_1);
        } else if (pontos_turisticos_carta_1 < pontos_turisticos_carta_2) {
            getchar();
            printf("\nCarta 1 - %s: %.2f\n", nome_pais_carta_1, pib_carta_1);
            printf("\nCarta 2 - %s: %.2f\n", nome_pais_carta_2, pib_carta_2);
            printf("\nResultado: Carta 2 (%s) venceu!\n", nome_pais_carta_2);
        } else {
            printf("\nAs cartas são iguais!\n");
        }
        break;
    case 6:
        printf("Saindo do programa...\n");
        return 0;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }
}