#include <stdio.h>
#include "area.h"

// Função para converter metros quadrados para centímetros quadrados
double metroQuadradoParaCentimetroQuadrado(double metros) {
    return metros * 10000;  // 1 m² = 10.000 cm²
}

// Função para converter centímetros quadrados para metros quadrados
double centimetroQuadradoParaMetroQuadrado(double centimetros) {
    return centimetros / 10000;  // 10.000 cm² = 1 m²
}

// Função que executa o menu de conversão de área
void converter_area() {
    int areaOpcao;
    double valor, resultado;

    // Exibe o menu de conversão de área
    printf("\n--- Conversão de Área ---\n");
    printf("1 - Metro quadrado para centímetro quadrado\n");
    printf("2 - Centímetro quadrado para metro quadrado\n");
    printf("Escolha uma opção: ");
    scanf("%d", &areaOpcao);

    if (areaOpcao == 1) {
        printf("Digite o valor em metros quadrados: ");
        scanf("%lf", &valor);
        resultado = metroQuadradoParaCentimetroQuadrado(valor);
        printf("%.2lf m² = %.2lf cm²\n", valor, resultado);
    } else if (areaOpcao == 2) {
        printf("Digite o valor em centímetros quadrados: ");
        scanf("%lf", &valor);
        resultado = centimetroQuadradoParaMetroQuadrado(valor);
        printf("%.2lf cm² = %.2lf m²\n", valor, resultado);
    } else {
        printf("Opção inválida para conversão de área.\n");
    }
}
