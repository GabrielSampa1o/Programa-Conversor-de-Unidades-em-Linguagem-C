#include <stdio.h>
#include "tempo.h"

//função de conversao de tempo 
void converter_tempo() {
    int opcao;           // variavel de escolha
    double valor, resultado; // variaves dos valores

    // conversoes
    printf("Selecione o método de conversão:\n");
    printf("1. Segundos para Minutos\n");
    printf("2. Minutos para Horas\n");
    printf("3. Horas para Segundos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);  // opcao escolhida

    // valores
    printf("Digite o valor: ");
    scanf("%lf", &valor);  

 
    switch (opcao) {
        case 1:
            // conversao de minutos para segundos
            resultado = valor / 60.0;  // 1 minuto = 60 segundos
            printf("%.2lf segundos equivalem a %.2lf minutos.\n", valor, resultado);
            break;

        case 2:
            // conversao de minutos para horas
            resultado = valor / 60.0;  // 1 hora = 60 minutos
            printf("%.2lf minutos equivalem a %.2lf horas.\n", valor, resultado);
            break;

        case 3:
            // conversar de hora para segundos
            resultado = valor * 3600.0;  // 1 hora = 3600 segundos
            printf("%.2lf horas equivalem a %.2lf segundos.\n", valor, resultado);
            break;

        default:
            // mensagem de erro caso a opcao nao seja valida
            printf("Opção inválida!\n");
            break;
    }
}