#include <stdio.h>

void ordena(float lista[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        float chave = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > chave) {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = chave;
    }
}

int main() {
    int quantidade;

    printf("digite o numero de produtos: ");
    scanf("%d", &quantidade);

    float precos[quantidade];
    printf("digite os precos dos produtos:\n");
    for (int i = 0; i < quantidade; i++) {
        scanf("%f", &precos[i]);
    }

    ordena(precos, quantidade);

    printf("precos ordenados:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.2f ", precos[i]);
    }

    printf("\n");
    return 0;
}
