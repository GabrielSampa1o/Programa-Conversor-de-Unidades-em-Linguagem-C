#include <stdio.h>
#include "area.h"
#include "comprimento.h"
#include "velocidade.h"
#include "volume.h"
#include "massa.h"
#include "temperatura.h"
#include "potencia.h"
#include "tempo.h"
#include "dados.h"



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
            converter_temperatura(); // Chama a função para converter temperatura
            break;
        case 5:
            converter_velocidade(); // Chama a função para converter velocidade
            break;
        case 6:
            converter_potencia(); //chama a funçao para converter
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
        case 10:
            converter_dados(); // Chama a função para converter dados
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
