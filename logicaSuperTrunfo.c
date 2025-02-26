#include <stdio.h>
#include <time.h>

int main() {
    char nome1[50], nome2[50];
    int populacao1, area1, densidade1, pib1;
    int populacao2, area2, densidade2, pib2;
    int escolha_pais_jogador = 0, escolha_pais_computador = 0;

    printf("Bem-vindo ao Super Trunfo - Desafio Final!\n\n");

    // Inserção dos dados do primeiro país
    printf("Cadastro do primeiro país:\n");
    printf("Nome: ");
    scanf("%49s", nome1);
    printf("População: ");
    scanf("%d", &populacao1);
    printf("Área (km²): ");
    scanf("%d", &area1);
    printf("Densidade Demográfica (hab/km²): ");
    scanf("%d", &densidade1);
    printf("PIB (bilhões USD): ");
    scanf("%d", &pib1);

    printf("\n-----------------------------\n\n");

    // Inserção dos dados do segundo país
    printf("Cadastro do segundo país:\n");
    printf("Nome: ");
    scanf("%49s", nome2);
    printf("População: ");
    scanf("%d", &populacao2);
    printf("Área (km²): ");
    scanf("%d", &area2);
    printf("Densidade Demográfica (hab/km²): ");
    scanf("%d", &densidade2);
    printf("PIB (bilhões USD): ");
    scanf("%d", &pib2);

    printf("\n-----------------------------\n\n");

    // Escolha do país pelo jogador
    printf("Escolha o país que você deseja usar para jogar:\n");
    printf("1 - %s\n", nome1);
    printf("2 - %s\n", nome2);
    printf("Digite sua escolha: ");

    if (scanf("%d", &escolha_pais_jogador) != 1 || (escolha_pais_jogador != 1 && escolha_pais_jogador != 2)) {
        printf("\nEntrada inválida. Reinicie o programa.\n");
        return 1;
    }

    // Definindo automaticamente o país adversário
    escolha_pais_computador = (escolha_pais_jogador == 1) ? 2 : 1;

    printf("\nVocê escolheu o país: %s\n", (escolha_pais_jogador == 1) ? nome1 : nome2);
    printf("O computador ficou com o país: %s\n", (escolha_pais_computador == 1) ? nome1 : nome2);

    // Comparação baseada na soma dos atributos
    int soma_jogador = (escolha_pais_jogador == 1) ? populacao1 + area1 + densidade1 + pib1 : populacao2 + area2 + densidade2 + pib2;
    int soma_computador = (escolha_pais_computador == 1) ? populacao1 + area1 + densidade1 + pib1 : populacao2 + area2 + densidade2 + pib2;

    printf("\nResultado da rodada:\n");
    printf("%s (Você): Soma dos atributos = %d\n", (escolha_pais_jogador == 1) ? nome1 : nome2, soma_jogador);
    printf("%s (Computador): Soma dos atributos = %d\n", (escolha_pais_computador == 1) ? nome1 : nome2, soma_computador);

    printf("\nResultado final: ");
    if (soma_jogador > soma_computador) {
        printf("Você venceu! \n");
    } else if (soma_jogador < soma_computador) {
        printf("O computador venceu! \n");
    } else {
        printf("Empate! \n");
    }

    printf("-----------------------------\n");
    return 0;
}
