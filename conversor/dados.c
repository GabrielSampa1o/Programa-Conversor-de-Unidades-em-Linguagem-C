#include <stdio.h>
#include "dados.h"

#define UNITS 6

// Nomes das unidades
const char* unitNames[UNITS] = {"Bits", "Bytes", "Kilobytes", "Megabytes", "Gigabytes", "Terabytes"};

// Fatores de conversão diretos para Bits
const unsigned long long factors[UNITS] = {
    1,
    8,
    8 * 1024,
    8 * 1024 * 1024,
    8ULL * 1024 * 1024 * 1024,
    8ULL * 1024 * 1024 * 1024 * 1024
};

void converter_dados() {
    unsigned long long valor;
    int origem, destino;

    printf("=== Conversor de Unidades de Armazenamento ===\n");
    printf("Escolha a unidade de origem:\n");
    for (int i = 0; i < UNITS; i++) {
        printf("  %d - %s\n", i, unitNames[i]);
    }
    scanf("%d", &origem);

    printf("Escolha a unidade de destino:\n");
    for (int i = 0; i < UNITS; i++) {
        printf("  %d - %s\n", i, unitNames[i]);
    }
    scanf("%d", &destino);

    printf("Digite o valor a ser convertido: ");
    scanf("%I64u", &valor); // Corrigido para `%I64u` em vez de `%llu`

    if (origem < 0 || origem >= UNITS || destino < 0 || destino >= UNITS) {
        printf("Opção inválida.\n");
        return;
    }

    unsigned long long numerador = valor * factors[origem];
    unsigned long long denominador = factors[destino];

    // Exibir o valor exato como fração
    printf("\n%I64u %s equivalem a:\n", valor, unitNames[origem]); // Corrigido para `%I64u`
    printf("  - Valor exato: %I64u/%I64u %s\n", numerador, denominador, unitNames[destino]); // Corrigido para `%I64u`

    // Exibir o valor aproximado
    double aproximado = (double)numerador / denominador;
    printf("  - Valor aproximado: %.12lf %s\n", aproximado, unitNames[destino]);
}
