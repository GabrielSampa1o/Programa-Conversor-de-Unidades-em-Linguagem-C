#include <stdio.h>
#include <string.h>

void converter_potencia() {
    char entrada[20], destino[3];
    float valor;
    char unidade_origem[3];

    // Solicitar entrada de valor e unidade de origem
    printf("Digite o valor e a unidade (exemplo: 300W, 0.3kW, 1HP): ");
    scanf("%s", entrada);

    // Solicitar a unidade de destino
    printf("Para qual unidade deseja converter? (W, kW, HP): ");
    scanf("%s", destino);

    // Separar o valor e a unidade de origem
    sscanf(entrada, "%f%2s", &valor, unidade_origem);

    // Realizar a conversão
    if (strcmp(unidade_origem, "W") == 0) {
        if (strcmp(destino, "kW") == 0) {
            printf("%.3fW equivale a %.3fkW\n", valor, valor / 1000.0);
        } else if (strcmp(destino, "HP") == 0) {
            printf("%.3fW equivale a %.3fHP\n", valor, valor / 745.0);
        } else {
            printf("Conversao invalida!\n");
        }
    } else if (strcmp(unidade_origem, "kW") == 0) {
        if (strcmp(destino, "W") == 0) {
            printf("%.3fkW equivale a %.3fW\n", valor, valor * 1000.0);
        } else if (strcmp(destino, "HP") == 0) {
            printf("%.3fkW equivale a %.3fHP\n", valor, valor / 0.745);
        } else {
            printf("Conversao invalida!\n");
        }
    } else if (strcmp(unidade_origem, "HP") == 0) {
        if (strcmp(destino, "W") == 0) {
            printf("%.3fHP equivale a %.3fW\n", valor, valor * 745.0);
        } else if (strcmp(destino, "kW") == 0) {
            printf("%.3fHP equivale a %.3fkW\n", valor, valor * 0.745);
        } else {
            printf("Conversao invalida!\n");
        }
    } else {
        printf("Unidade de origem invalida!\n");
    }
}