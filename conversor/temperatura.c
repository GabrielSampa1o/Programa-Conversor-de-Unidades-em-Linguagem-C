#include <stdio.h>
#include "temperatura.h"

void converter_temperatura() {
        double resultado, temperatura;
    int option;

    printf("Qual tipo de conversao deseja fazer?\n");
    printf("1: Celsius    -> Fahrenheit\n");
    printf("2: Celsius    -> Kelvin\n");
    printf("3: Fahrenheit -> Celsius\n");
    printf("4: Fahrenheit -> Kelvin\n");
    printf("5: Kelvin     -> Celsius\n");
    printf("6: Kelvin     -> Fahrenheit\n");
    scanf("%d", &option);
    printf("Digite a temperatura:\n");
    scanf("%lf", &temperatura);

    switch(option) {
        case 1:
            resultado = (temperatura * 9.0 / 5) + 32;
            break;
        case 2:
            resultado = temperatura + 273.15;
            break;
        case 3:
            resultado = (temperatura - 32)*(5/9.0);
            break;
        case 4:
            resultado = (temperatura - 32)*(5/9.0) + 273.15;
            break;
        case 5:
            resultado = temperatura - 273.15;
            break;
        case 6:
            resultado = (temperatura - 273.15)*(9.0/5)+32;
            break;
    }

    printf("\nSeu resultado eh: %.2lf\n\n", resultado);
}
