#include<stdio.h>intmain() {
    float pesoPeixe, excesso, multa;

    printf("Informe o peso de peixes pescados (Kg): ");
    scanf("%f", &pesoPeixe);

    if (pesoPeixe > 50) {
        excesso = pesoPeixe - 50;
        multa = excesso * 4.00;
        printf("Excesso de peso: %.2f Kg\n", excesso);
        printf("Multa: R$ %.2f\n", multa);
    } else {
        printf("Peso dentro do limite. Sem multa.\n");
    }

    return0;
}
