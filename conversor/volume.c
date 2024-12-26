#include <stdio.h>
#include "volume.h"

double litros_para_mililitros(double litros)
{
  return litros * 1000;
}

double litros_para_metros_cubicos(double litros)
{
  return litros / 1000;
}

double mililitros_para_litros(double mililitros)
{
  return mililitros / 1000;
}

double mililitros_para_metros_cubicos(double mililitros)
{
  return mililitros / 1e6;
}

double metros_cubicos_para_litros(double metros_cubicos)
{
  return metros_cubicos * 1000;
}

double metros_cubicos_para_mililitros(double metros_cubicos)
{
  return metros_cubicos * 1e6;
}

// Menu de Volume
void converter_volume()
{
  int opcao_in, opcao_out;
  double valor, resultado;
  const char *unidades[] = {"litro(s)", "mililitro(s)", "metro(s) cubico(s)"};

  printf("\n--- Conversao de Volume ---\n");
  printf("Escolha a unidade de entrada:\n");
  printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
  scanf("%d", &opcao_in);

  printf("Digite o valor a ser convertido: ");
  scanf("%lf", &valor);

  printf("Escolha a unidade de saida:\n");
  printf("1. Litros\n2. Mililitros\n3. Metros cubicos\n");
  scanf("%d", &opcao_out);

  switch (opcao_in)
  {
  case 1: // Litros
    if (opcao_out == 2)
      resultado = litros_para_mililitros(valor);
    else if (opcao_out == 3)
      resultado = litros_para_metros_cubicos(valor);
    else
      resultado = valor;
    break;
  case 2: // Mililitros
    if (opcao_out == 1)
      resultado = mililitros_para_litros(valor);
    else if (opcao_out == 3)
      resultado = mililitros_para_metros_cubicos(valor);
    else
      resultado = valor;
    break;
  case 3: // Metros cúbicos
    if (opcao_out == 1)
      resultado = metros_cubicos_para_litros(valor);
    else if (opcao_out == 2)
      resultado = metros_cubicos_para_mililitros(valor);
    else
      resultado = valor;
    break;
  default:
    printf("Opcao invalida!\n");
    return;
  }

  printf("\n%.3lf %s e igual a %.3lf %s.\n",
         valor, unidades[opcao_in - 1], resultado, unidades[opcao_out - 1]);
}
