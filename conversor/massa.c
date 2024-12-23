#include <stdio.h>
#include "massa.h"

void converterMassa(float valor, int unidadeOrigem, int unidadeDestino)
{
    float resultado;

    //convertendo a unidade de origem para quilogramas
    if(unidadeOrigem == 1){
        //quilograma
        resultado = valor;
    }
    else if(unidadeOrigem == 2){
        //grama
        resultado = valor/1000;
    }
    else if(unidadeOrigem == 3){
        //tonelada
        resultado = valor*1000;
    }

    //convertendo de quilogramas para a unidade de destino
    if(unidadeDestino == 1){
        //quilograma
        printf("Resultado: %.2f Quilogramas \n", resultado);
    }
    else if(unidadeDestino == 2){
        //grama
        printf("Resultado: %.2f Gramas \n", resultado*1000);
    }
    else if(unidadeDestino == 3){
        //tonelada
        printf("Resultado: %.2f Toneladas \n", resultado/1000);
    }
}

int main(){
    int unidadeOrigem, unidadeDestino;
    float valor;

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

    converterMassa(valor, unidadeOrigem, unidadeDestino);

return 0;
}
