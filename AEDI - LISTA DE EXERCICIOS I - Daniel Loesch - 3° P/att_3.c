#include<stdio.h>#include <math.h>intmain() {
    float num1, num2;
    float produtoDobro, somaTriploMetade, raizQuadrada;

    printf("Informe o primeiro numero: ");
    scanf("%f", &num1);
    printf("Informe o segundo numero: ");
    scanf("%f", &num2);

    produtoDobro = 2 * num1 * num1;
    somaTriploMetade = 3 * num1 + num2 / 2;
    raizQuadrada = sqrt(num1 + num2);

    printf("Produto do dobro do primeiro numero: %.2f\n", produtoDobro);
    printf("Soma do triplo do primeiro com a metade do segundo: %.2f\n", somaTriploMetade);
    printf("Raiz quadrada da soma dos numeros: %.2f\n", raizQuadrada);

    return0;
}
