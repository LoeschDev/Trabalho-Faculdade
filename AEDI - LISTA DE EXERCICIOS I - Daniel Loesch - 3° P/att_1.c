#include<stdio.h>intmain() {
    float lado, area, dobroArea;

    printf("Informe o lado do quadrado: ");
    scanf("%f", &lado);

    area = lado * lado;
    dobroArea = 2 * area;

    printf("O dobro da area do quadrado e: %.2f\n", dobroArea);

    return0;
}
