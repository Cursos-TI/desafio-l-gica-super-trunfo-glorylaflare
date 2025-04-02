#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    //VARIÁVEIS DA CARTA 1;
    char nome_pais_carta_1[30];
    int pontos_turisticos_carta_1;
    int populacao_carta_1;
    float area_carta_1, pib_carta_1;
    //VARIÁVEIS DA CARTA 2;
    char nome_pais_carta_2[30];
    int pontos_turisticos_carta_2;
    int populacao_carta_2;
    float area_carta_2, pib_carta_2;

    //COLETANDO OS DADOS DO USUÁRIO PARA A CARTA 1
    printf("\n----- DADOS DO PAÍS 1: -----\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome_pais_carta_1);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta_1);
    printf("Digite a área: ");
    scanf("%f", &area_carta_1);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_1);

    //CALCULANDO A DENSIDADE DEMOGRÁFICA PARA A CARTA 1
    float densidade_demografica_1 = (float) populacao_carta_1 / area_carta_1;
    
    //COLETANDO OS DADOS DO USUÁRIO PARA A CARTA 2
    printf("\n----- DADOS DO PAÍS 2: -----\n");
    printf("Digite o nome do país: ");
    scanf(" %[^\n]", nome_pais_carta_2);
    printf("Digite a população: ");
    scanf("%d", &populacao_carta_2);
    printf("Digite a área: ");
    scanf("%f", &area_carta_2);
    printf("Digite o PIB: ");
    scanf("%f", &pib_carta_2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos_carta_2);

    //CALCULANDO A DENSIDADE DEMOGRÁFICA PARA A CARTA 2
    float densidade_demografica_2 = (float) populacao_carta_2 / area_carta_2;

    //DESENVOLVENDO O MENU PRINCIPAL COM 5 OPÇÕES DE ATRIBUTOS E 1 OPÇÃO PARA O USUÁRIO SAIR
    //AQUI O USUÁRIO ESCOLHE O ATRIBUTO QUE DESEJA COMPARAR ENTRE AS DUAS CARTAS
    int opcao_1, opcao_2;

    char menu[90] = "1. PIB\n2. Densidade Demográfica\n3. População\n4. Área\n5. Pontos turísticos\n6. Sair\n";
    float soma_atributos_carta_1 = 0, soma_atributos_carta_2 = 0;

    printf("\n\n----- Escolha o atributo 1 no qual deseja comparar as cartas: -----\n\n");
    printf("%s", menu);
    scanf("%d", &opcao_1);

    //SWITCH COM AS OPÇÕES BASEADA NA ESCOLHA DO USUÁRIO
    switch (opcao_1)
    {
    case 1:
        printf("\n\nO atributo 1 escolhido foi: PIB\n");
        printf("Carta 1 (%s) - Valor do PIB: %.2f\n", nome_pais_carta_1, pib_carta_1);
        soma_atributos_carta_1 += pib_carta_1;
        printf("Carta 2 (%s) - Valor do PIB: %.2f\n", nome_pais_carta_2, pib_carta_2);
        soma_atributos_carta_2 += pib_carta_2;
        break;
    case 2:
        printf("\n\nO atributo 1 escolhido foi: Densidade Demográfica\n");
        printf("Carta 1 (%s) - Valor do Densidade Demográfica: %.2f\n", nome_pais_carta_1, densidade_demografica_1);
        soma_atributos_carta_1 += densidade_demografica_1;
        printf("Carta 2 (%s) - Valor do Densidade Demográfica: %.2f\n", nome_pais_carta_2, densidade_demografica_2);
        soma_atributos_carta_2 += densidade_demografica_2;
        break;
    case 3:
        printf("\n\nO atributo 1 escolhido foi: População\n");
        printf("Carta 1 (%s) - Valor do População: %d\n", nome_pais_carta_1, populacao_carta_1);
        soma_atributos_carta_1 += (float) populacao_carta_1;
        printf("Carta 2 (%s) - Valor do População: %d\n", nome_pais_carta_2, populacao_carta_2);
        soma_atributos_carta_2 += (float) populacao_carta_2;
        break;
    case 4:
        printf("\n\nO atributo 1 escolhido foi: Área\n");
        printf("Carta 1 (%s) - Valor do Área: %.2f\n", nome_pais_carta_1, area_carta_1);
        soma_atributos_carta_1 += area_carta_1;
        printf("Carta 2 (%s) - Valor do Área: %.2f\n", nome_pais_carta_2, area_carta_2);
        soma_atributos_carta_2 += area_carta_2;
        break;
    case 5:
        printf("\n\nO atributo 1 escolhido foi: Pontos Turísticos\n");
        printf("Carta 1 (%s) - Valor do Pontos Turísticos: %d\n", nome_pais_carta_1, pontos_turisticos_carta_1);
        soma_atributos_carta_1 += (float) pontos_turisticos_carta_1;
        printf("Carta 2 (%s) - Valor do Pontos Turísticos: %d\n", nome_pais_carta_2, pontos_turisticos_carta_2);
        soma_atributos_carta_2 += (float) pontos_turisticos_carta_2;
        break;
    case 6:
        printf("Saindo do programa...\n");
        exit(0);
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    printf("\n\n----- Escolha o atributo 2 no qual deseja comparar as cartas: -----\n\n");
    printf("%s", menu);
    scanf("%d", &opcao_2);

    if(opcao_2 == opcao_1) {
        printf("\n\nOs atributos escolhidos foram os mesmos, tente novamente.\n");
        return 0;
    }

    //SWITCH COM AS OPÇÕES BASEADA NA ESCOLHA DO USUÁRIO
    switch (opcao_2)
    {
    case 1:
        printf("\nO atributo 2 escolhido foi: PIB\n");
        printf("Carta 1 (%s) - Valor do PIB: %.2f\n", nome_pais_carta_1, pib_carta_1);
        soma_atributos_carta_1 += pib_carta_1;
        printf("Carta 2 (%s) - Valor do PIB: %.2f\n", nome_pais_carta_2, pib_carta_2);
        soma_atributos_carta_2 += pib_carta_2;
        break;
    case 2:
        printf("\nO atributo 2 escolhido foi: Densidade Demográfica\n");
        printf("Carta 1 (%s) - Valor do Densidade Demográfica: %.2f\n", nome_pais_carta_1, densidade_demografica_1);
        soma_atributos_carta_1 += densidade_demografica_1;
        printf("Carta 2 (%s) - Valor do Densidade Demográfica: %.2f\n", nome_pais_carta_2, densidade_demografica_2);
        soma_atributos_carta_2 += densidade_demografica_2;
        break;
    case 3:
        printf("\nO atributo 2 escolhido foi: População\n");
        printf("Carta 1 (%s) - Valor do População: %d\n", nome_pais_carta_1, populacao_carta_1);
        soma_atributos_carta_1 += (float) populacao_carta_1;
        printf("Carta 2 (%s) - Valor do População: %d\n", nome_pais_carta_2, populacao_carta_2);
        soma_atributos_carta_2 += (float) populacao_carta_2;
        break;
    case 4:
        printf("\nO atributo 2 escolhido foi: Área\n");
        printf("Carta 1 (%s) - Valor do Área: %.2f\n", nome_pais_carta_1, area_carta_1);
        soma_atributos_carta_1 += area_carta_1;
        printf("Carta 2 (%s) - Valor do Área: %.2f\n", nome_pais_carta_2, area_carta_2);
        soma_atributos_carta_2 += area_carta_2;
        break;
    case 5:
        printf("\nO atributo 2 escolhido foi: Pontos Turísticos\n");
        printf("Carta 1 (%s) - Valor do Pontos Turísticos: %d\n", nome_pais_carta_1, pontos_turisticos_carta_1);
        soma_atributos_carta_1 += (float) pontos_turisticos_carta_1;
        printf("Carta 2 (%s) - Valor do Pontos Turísticos: %d\n", nome_pais_carta_2, pontos_turisticos_carta_2);
        soma_atributos_carta_2 += (float) pontos_turisticos_carta_2;
        break;
    case 6:
        printf("Saindo do programa...\n");
        exit(0);
        break;
    default:
        printf("Opção inválida. Tente novamente.\n");
    }

    if(soma_atributos_carta_1 > soma_atributos_carta_2) {
        printf("\n###### RESULTADO FINAL ######");
        printf("\nSomatório Carta 1 (%s) : %.2f", nome_pais_carta_1, soma_atributos_carta_1);
        printf("\nSomatório Carta 2 (%s) : %.2f", nome_pais_carta_2, soma_atributos_carta_2);
        printf("\nCarta 1 venceu.\n");
    } else if (soma_atributos_carta_1 < soma_atributos_carta_2) {
        printf("\n###### RESULTADO FINAL ######");
        printf("\nSomatório Carta 1 (%s) : %.2f", nome_pais_carta_1, soma_atributos_carta_1);
        printf("\nSomatório Carta 2 (%s) : %.2f", nome_pais_carta_2, soma_atributos_carta_2);
        printf("\nCarta 2 venceu.\n");
    } else {
        printf("\nEmpate.\n");
    }
}