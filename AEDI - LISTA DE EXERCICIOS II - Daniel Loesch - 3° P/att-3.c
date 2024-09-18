#include <stdio.h>

int busca_binaria(int contas[], int tamanho, int chave, int *comparacoes) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        (*comparacoes)++;
        meio = (inicio + fim) / 2;
        if (contas[meio] == chave) {
            return meio;
        } else if (contas[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int contas[100];
    int i, conta_busca, comparacoes = 0, resultado;

    for (i = 0; i < 100; i++) {
        contas[i] = i + 1;
    }

    printf("digite o numero da conta para buscar: ");
    scanf("%d", &conta_busca);

    resultado = busca_binaria(contas, 100, conta_busca, &comparacoes);

    if (resultado != -1) {
        printf("conta %d encontrada na posicao %d\n", conta_busca, resultado + 1);
    } else {
        printf("conta %d n existe\n", conta_busca);
    }

    printf("numero de comparacoes: %d\n", comparacoes);

    return 0;
}
