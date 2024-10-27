#include <stdio.h>

int maior(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > c)
        return b;
    else
        return c;
}

int main() {
    int resultado = maior(3, 5, 2);
    printf("Maior: %d\n", resultado);
    return 0;
}