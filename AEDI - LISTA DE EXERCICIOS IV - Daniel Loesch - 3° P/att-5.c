#include <stdio.h>

void ordena(int lista[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (lista[j] > lista[j + 1]) {
                int temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
            }
        }
    }
}

int busca(int lista[], int inicio, int fim, int valor) {
    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;
        if (lista[meio] == valor) {
            return meio;
        }
        if (lista[meio] < valor) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int quantidade, valor_pesquisa;

    printf("digite a quantidade de numeros: ");
    scanf("%d", &quantidade);

    int lista[quantidade];
    printf("digite os numeros:\n");
    for (int i = 0; i < quantidade; i++) {
        scanf("%d", &lista[i]);
    }

    ordena(lista, quantidade);

    printf("digite o valor que deseja pesquisar: ");
    scanf("%d", &valor_pesquisa);

    int resultado = busca(lista, 0, quantidade - 1, valor_pesquisa);

    if (resultado != -1) {
        printf("valor encontrado na posicao: %d\n", resultado);
    } else {
        printf("valor nao encontrado\n");
    }

    return 0;
}
