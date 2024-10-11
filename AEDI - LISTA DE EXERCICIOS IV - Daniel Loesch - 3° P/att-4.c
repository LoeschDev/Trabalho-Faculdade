#include <stdio.h>

void ordena(float lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int maior_indice = i;
        for (int j = i + 1; j < tamanho; j++) {
            if (lista[j] > lista[maior_indice]) {
                maior_indice = j;
            }
        }
        float temp = lista[i];
        lista[i] = lista[maior_indice];
        lista[maior_indice] = temp;
    }
}

int main() {
    int quantidade;

    printf("digite o numero de alunos: ");
    scanf("%d", &quantidade);

    float notas[quantidade];
    printf("digite as notas dos alunos:\n");
    for (int i = 0; i < quantidade; i++) {
        scanf("%f", &notas[i]);
    }

    ordena(notas, quantidade);

    printf("notas ordenadas em ordem decrescente:\n");
    for (int i = 0; i < quantidade; i++) {
        printf("%.2f ", notas[i]);
    }

    printf("\n");
    return 0;
}
