#include<stdio.h>intmain() {
    float custoFabrica, custoFinal;
    float percDistribuidor = 0.28, percImpostos = 0.45;

    printf("Informe o custo de fabrica do carro: R$ ");
    scanf("%f", &custoFabrica);

    custoFinal = custoFabrica + (custoFabrica * percDistribuidor) + (custoFabrica * percImpostos);

    printf("Valor final ao consumidor: R$ %.2f\n", custoFinal);

    return0;
}
