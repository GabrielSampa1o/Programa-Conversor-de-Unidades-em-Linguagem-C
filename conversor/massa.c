#include <stdio.h>
#include "massa.h"

void converterMassa() {
    int unidadeOrigem, unidadeDestino;
    float valor, resultado;

    printf("Escolha a unidade de origem: \n");
    printf("1. Quilograma\n");
    printf("2. Grama\n");
    printf("3. Tonelada\n");
    scanf("%d", &unidadeOrigem);

    printf("Escolha a unidade de destino: \n");
    printf("1. Quilograma\n");
    printf("2. Grama\n");
    printf("3. Tonelada\n");
    scanf("%d", &unidadeDestino);

    printf("Digite o valor a ser convertido: \n");
    scanf("%f", &valor);

    // Convertendo a unidade de origem para quilogramas
    if (unidadeOrigem == 1) {
        // Quilograma
        resultado = valor;
    } else if (unidadeOrigem == 2) {
        // Grama
        resultado = valor / 1000;
    } else if (unidadeOrigem == 3) {
        // Tonelada
        resultado = valor * 1000;
    } else {
        printf("Unidade de origem invalida!\n");
        return;
    }

    // Convertendo de quilogramas para a unidade de destino
    if (unidadeDestino == 1) {
        // Quilograma
        printf("Resultado: %.2f Quilogramas\n", resultado);
    } else if (unidadeDestino == 2) {
        // Grama
        printf("Resultado: %.2f Gramas\n", resultado * 1000);
    } else if (unidadeDestino == 3) {
        // Tonelada
        printf("Resultado: %.2f Toneladas\n", resultado / 1000);
    } else {
        printf("Unidade de destino invalida!\n");
    }
}
