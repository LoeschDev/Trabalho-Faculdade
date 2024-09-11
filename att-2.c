#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int notas[50];
    int contagem[5] = {0, 0, 0, 0, 0};
    int i;

    srand(time(NULL));

    for (i = 0; i < 50; i++) {
        notas[i] = (rand() % 5) + 1;
        contagem[notas[i] - 1]++;
    }

    printf("resultado da pesquisa de notas:\n");
    for (i = 0; i < 5; i++) {
        printf("nota %d: %d vezes\n", i + 1, contagem[i]);
    }

    return 0;
}
