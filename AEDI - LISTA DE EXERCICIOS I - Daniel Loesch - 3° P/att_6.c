#include<stdio.h>intmain() {
    float tempoGasto, velocidadeMedia, distancia, litrosUsados;
    float kmPorLitro = 12.0;

    printf("Informe o tempo gasto na viagem (horas): ");
    scanf("%f", &tempoGasto);
    printf("Informe a velocidade media (Km/h): ");
    scanf("%f", &velocidadeMedia);

    distancia = tempoGasto * velocidadeMedia;
    litrosUsados = distancia / kmPorLitro;

    printf("Litros de gasolina usados: %.2f\n", litrosUsados);

    return0;
}
