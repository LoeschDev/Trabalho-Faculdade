#include <stdio.h>

int busca_binaria(int arr[], int tamanho, int chave) {
    int inicio = 0, fim = tamanho - 1, meio;

    while (inicio <= fim) {
        meio = (inicio + fim) / 2;
        if (arr[meio] == chave) {
            return meio;
        } else if (arr[meio] < chave) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;
}

int main() {
    int primos[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 
                    53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int numero, resultado;

    printf("digite um numero entre 1 e 100: ");
    scanf("%d", &numero);

    resultado = busca_binaria(primos, 25, numero);

    if (resultado != -1) {
        printf("o numero %d ta na lista de primos.\n", numero);
    } else {
        printf("o numero %d n ta na lista de primos.\n", numero);
    }

    return 0;
}
