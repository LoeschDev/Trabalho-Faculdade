#include <stdio.h>

int busca_binaria(int array[], int inicio, int fim, int chave) {
    if (inicio <= fim) {
        int meio = (inicio + fim) / 2;
        if (array[meio] == chave)
            return meio;
        else if (array[meio] > chave)
            return busca_binaria(array, inicio, meio - 1, chave);
        else
            return busca_binaria(array, meio + 1, fim, chave);
    }
    return -1;
}

int main() {
    int array[] = {1, 3, 5, 7, 9};
    int indice = busca_binaria(array, 0, 4, 7);
    printf("Indice: %d\n", indice);
    return 0;
}