#include <stdio.h>

int main() {
    int numero;

    printf("digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    printf("numeros pares entre 1 e %d:\n", numero);
    for (int i = 2; i <= numero; i += 2) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}
