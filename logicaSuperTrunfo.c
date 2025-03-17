#include <stdio.h>

int main() {
    char estado, codigodacarta[4], nomedacidade[50];
    int populacao, pontosturisticos;
    float area, pib, densidade, pibpc, superpoder;

    char estado2, codigodacarta2[4], nomedacidade2[50];
    int populacao2, pontosturisticos2;
    float area2, pib2, densidade2, pibpc2, superpoder2;

    // Cadastro da primeira carta
    printf("Seja bem-vindo ao Super Trunfo das Cidades!\n");

    printf("Digite o nome de um estado (A - H): ");
    scanf(" %c", &estado); 

    printf("Digite o código da cidade: ");
    scanf(" %s", codigodacarta); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade);

    printf("Digite a população dessa cidade: ");
    scanf(" %d", &populacao);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area); 

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib); 

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos); 

    // Cálculo dos atributos derivados
    densidade = (float) populacao / area;
    pibpc = (pib * 1e9) / populacao;
    superpoder = populacao + area + pib + pontosturisticos + (1 / densidade);

    // Cadastro da segunda carta
    printf("\nDigite os dados da segunda cidade:\n");

    printf("Digite o nome de um estado (A - H): ");
    scanf(" %c", &estado2); 

    printf("Digite o código da cidade: ");
    scanf(" %s", codigodacarta2); 

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomedacidade2);

    printf("Digite a população dessa cidade: ");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2); 

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf(" %f", &pib2); 

    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontosturisticos2); 

    // Cálculo dos atributos derivados
    densidade2 = (float) populacao2 / area2;
    pibpc2 = (pib2 * 1e9) / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + (1 / densidade2);

    int opcao;
    do {
        // Menu de escolha do atributo para comparação
        printf("\nEscolha um atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica (vence o menor valor)\n");
        printf("6 - PIB per capita\n");
        printf("7 - Super poder\n");
        printf("0 - Sair\n");
        printf("Opção: ");
        scanf(" %d", &opcao);

        printf("\nComparando as cartas...\n");

        switch (opcao) {
            case 1: // População
                printf("População - %s: %d habitantes | %s: %d habitantes\n",
                        nomedacidade, populacao, nomedacidade2, populacao2);
                if (populacao > populacao2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (populacao < populacao2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 2: // Área
                printf("Área - %s: %.2f km² | %s: %.2f km²\n",
                        nomedacidade, area, nomedacidade2, area2);
                if (area > area2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (area < area2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 3: // PIB
                printf("PIB - %s: R$ %.2f bi | %s: R$ %.2f bi\n",
                        nomedacidade, pib, nomedacidade2, pib2);
                if (pib > pib2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (pib < pib2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 4: // Pontos turísticos
                printf("Pontos Turísticos - %s: %d | %s: %d\n",
                        nomedacidade, pontosturisticos, nomedacidade2, pontosturisticos2);
                if (pontosturisticos > pontosturisticos2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (pontosturisticos < pontosturisticos2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 5: // Densidade demográfica (vence o menor valor)
                printf("Densidade - %s: %.2f hab/km² | %s: %.2f hab/km²\n",
                        nomedacidade, densidade, nomedacidade2, densidade2);
                if (densidade < densidade2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (densidade > densidade2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 6: // PIB per capita
                printf("PIB per capita - %s: R$ %.2f | %s: R$ %.2f\n",
                        nomedacidade, pibpc, nomedacidade2, pibpc2);
                if (pibpc > pibpc2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (pibpc < pibpc2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 7: // Super poder
                printf("Super Poder - %s: %.2f | %s: %.2f\n",
                        nomedacidade, superpoder, nomedacidade2, superpoder2);
                if (superpoder > superpoder2)
                    printf("Vencedor: %s\n", nomedacidade);
                else if (superpoder < superpoder2)
                    printf("Vencedor: %s\n", nomedacidade2);
                else
                    printf("Empate!\n");
                break;

            case 0:
                printf("Saindo do jogo...\n");
                break;

            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}

