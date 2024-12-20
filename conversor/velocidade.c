#include <stdio.h>
#include "velocidade.h"

void converter_velocidade() {
    double valor, resultado;
    int opcao;

    printf("\n-----Escolha a conversão:-----\n");
    printf("1. km/h para m/s\n");
    printf("2. km/h para mph\n");
    printf("3. m/s para km/h\n");
    printf("4. m/s para mph\n");
    printf("5. mph para km/h\n");
    printf("6. mph para m/s\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("Digite o valor de velocidade: ");
    scanf("%lf", &valor);

    switch (opcao) {
        case 1: // km/h --> m/s
            resultado = valor / 3.6;
            printf("%.2lf km/h = %.2lf m/s\n", valor, resultado);
            break;
        case 2: // km/h --> mph
            resultado = valor / 1.609;
            printf("%.2lf km/h = %.2lf mph\n", valor, resultado);
            break;
        case 3: // m/s --> km/h
            resultado = valor * 3.6;
            printf("%.2lf m/s = %.2lf km/h\n", valor, resultado);
            break;
        case 4: // m/s -->mph
            resultado = (valor * 3.6) / 1.609;
            printf("%.2lf m/s = %.2lf mph\n", valor, resultado);
            break;
        case 5: // mph --> km/h
            resultado = valor * 1.609;
            printf("%.2lf mph = %.2lf km/h\n", valor, resultado);
            break;
        case 6: // mph --> m/s
            resultado = (valor * 1.609) / 3.6;
            printf("%.2lf mph = %.2lf m/s\n", valor, resultado);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}