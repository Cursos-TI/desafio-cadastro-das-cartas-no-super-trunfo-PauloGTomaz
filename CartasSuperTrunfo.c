#include <stdio.h>

int main() {
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    char codigo2[4];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("Cadastro da primeira carta:\n");
    printf("Código da cidade (ex: A01): ");
    scanf(" %3s", codigo1);
    printf("OK: Código 1 recebido.\n");

    printf("População: ");
    scanf("%d", &populacao1);
    printf("OK: População 1 recebida.\n");

    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("OK: Área 1 recebida.\n");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("OK: PIB 1 recebido.\n");

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("OK: Pontos turísticos 1 recebidos.\n");

    printf("\nCadastro da segunda carta:\n");
    printf("Código da cidade (ex: B02): ");
    scanf(" %3s", codigo2);
    printf("OK: Código 2 recebido.\n");

    printf("População: ");
    scanf("%d", &populacao2);
    printf("OK: População 2 recebida.\n");

    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("OK: Área 2 recebida.\n");

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("OK: PIB 2 recebido.\n");

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("OK: Pontos turísticos 2 recebidos.\n");

    printf("\n===== Dados das Cartas Cadastradas =====\n");

    printf("\nCarta 1 - Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2 - Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos2);

    return 0;
}
