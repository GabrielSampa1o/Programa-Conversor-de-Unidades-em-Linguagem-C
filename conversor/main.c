#include <stdio.h>
#include "area.h"
#include "comprimento.h"
#include "volume.h"
#include "massa.h"

int main()
{
    int opcao;

    do
    {
        printf("\n--- Conversor de Unidades ---\n");
        printf("1. Comprimento\n2. Massa\n3. Volume\n4. Temperatura\n5. Velocidade\n6. Potência\n7. Área\n8. Tempo\n9. Dados\n0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            menu_comprimento(); // Chama o menu do comprimento
            break;
        case 2:
            converterMassa(); // Chama a função para converter massa           
            break;
        case 3:
            converter_volume(); // Chama a função para converter volume
            break;
        case 4:
            printf("Conversão de Temperatura ainda não implementada.\n");
            break;
        case 5:
            printf("Conversão de Velocidade ainda não implementada.\n");
            break;
        case 6:
            printf("Conversão de Potência ainda não implementada.\n");
            break;
        case 7:
            converter_area(); // Chama a função para converter área
            break;
        case 8:
            printf("Conversão de Tempo ainda não implementada.\n");
            break;
        case 9:
            printf("Conversão de Dados ainda não implementada.\n");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
