#include <stdio.h>
#include "comprimento.h"

int main() {
    int opcao;

    do {
        printf("\n--- Conversor de Unidades ---\n");
        printf("1. Comprimento\n2. Massa\n3. Volume\n4. Temperatura\n5. Velocidade\n6. Potência\n7. Área\n8. Tempo\n9. Dados\n0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                menu_comprimento(); //chama o menu comprimento.c 
                break;
            case 2:  break;
            case 3:  break;
            case 4:  break;
            case 5:  break;
            case 6:  break;
            case 7:  break;
            case 8:  break;
            case 9:  break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
