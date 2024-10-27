#include <stdio.h>

int mcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return mcd(b, a % b);
}

int main() {
    int resultado = mcd(48, 18);
    printf("Resultado: %d\n", resultado);
    return 0;
}