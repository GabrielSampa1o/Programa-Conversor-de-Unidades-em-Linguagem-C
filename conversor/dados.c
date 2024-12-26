#include <stdio.h>
#include "dados.h"

#define UNITS 6

// Nomes das unidades
const char* unitNames[UNITS] = {"Bits", "Bytes", "Kilobytes", "Megabytes", "Gigabytes", "Terabytes"};

// Fatores de conversão diretos para Bits
const unsigned long long factors[UNITS] = {1, 8, 8 * 1024, 8 * 1024 * 1024, 8 * 1024 * 1024 * 1024, 8ULL * 1024 * 1024 * 1024 * 1024};

// Função para calcular e exibir valores exatos
void converter_dados(unsigned long long valor, int origem, int destino) {
    unsigned long long numerador = valor * factors[origem]; // Converte para Bits
    unsigned long long denominador = factors[destino];      // Fator da unidade de destino

    // Exibir o valor exato como fração
    printf("\n%llu %s equivalem a:\n", valor, unitNames[origem]);
    printf("  - Valor exato: %llu/%llu %s\n", numerador, denominador, unitNames[destino]);

    // Exibir o valor aproximado em ponto flutuante
    double aproximado = (double)numerador / denominador;
    printf("  - Valor aproximado: %.12lf %s\n", aproximado, unitNames[destino]);
}

int main() {
    unsigned long long valor;
    int origem, destino;

    printf("=== Conversor de Unidades de Armazenamento ===\n");
    for (int i = 0; i < UNITS; i++) {
        printf("  %d - %s\n", i, unitNames[i]);
    }

    printf("Escolha a unidade de origem: ");
    scanf("%d", &origem);
    printf("Escolha a unidade de destino: ");
    scanf("%d", &destino);
    printf("Digite o valor a ser convertido: ");
    scanf("%llu", &valor);

    if (origem < 0 || origem >= UNITS || destino < 0 || destino >= UNITS) {
        printf("Opção inválida.\n");
        return 1;
    }

    converter_dados(valor, origem, destino);

    return 0;
}