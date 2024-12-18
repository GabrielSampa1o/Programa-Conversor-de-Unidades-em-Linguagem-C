#include <stdio.h>

void metros_para_centimetros(){
    float metros;
    printf("\nDigite o valor em metros: ");
    scanf("%f", &metros);
    printf("%.1f metros é igual a %.2f centímetros.\n", metros, metros * 100);
}

void metros_para_milimetros(){
    float metros;
    printf("\nDigite o valor em metros: ");
    scanf("%f", &metros);
    printf("%.1f metros é igual a %.2lf milimetros.\n", metros, metros * 1000);

}

void centimetros_para_metros(){
    float centimetros;
    printf("\nDigite o valor em centímetros: ");
    scanf("%f", &centimetros);
    printf("%.1f centímetros é igual a %.2lf metros.\n", centimetros, centimetros / 100);


}

void milimetros_para_metros(){
    float milimetros;
    printf("\nDigite o valor em milímetros: ");
    scanf("%f", &milimetros);
    printf("%.1f milímetros é igual a %.2lf metros.\n", milimetros, milimetros / 1000);
}

void menu_comprimento(){
        int opcao;

    do {
        printf("\n--- Conversor de Medidas ---\n");
        printf("1. Metros para Centímetros\n");
        printf("2. Metros para Milímetros\n");
        printf("3. Centímetros para Metros\n");
        printf("4. Milímetros para Metros\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                metros_para_centimetros();
                break;
            case 2:
                metros_para_milimetros();
                break;
            case 3:
                centimetros_para_metros();
                break;
            case 4:
                milimetros_para_metros();
                break;
            case 5:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 5);


}