#include <stdio.h>
#include <stdlib.h>

int* progressao_aritmetica(int elementos, int inicial, int razao) {
    int* array = (int)malloc(elementos sizeof(int));
    array[0] = inicial;
    for (int i = 1; i < elementos; i++) {
        array[i] = array[i - 1] + razao;
    }
    return array;
}

void imprimir_array(int* array, int elementos) {
    for (int i = 0; i < elementos; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int* array = progressao_aritmetica(5, 2, 3);
    imprimir_array(array, 5);
    free(array);
    return 0;
}