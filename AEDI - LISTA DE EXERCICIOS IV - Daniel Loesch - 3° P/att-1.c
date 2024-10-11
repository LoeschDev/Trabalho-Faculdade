#include <stdio.h>

int main() {
    int idade;

    printf("digite a idade: ");
    scanf("%d", &idade);

    switch (idade) {
        case 0 ... 17:
            printf("menor de idade\n");
            break;
        case 18 ... 65:
            printf("maior de idade\n");
            break;
        default:
            printf("idoso\n");
            break;
    }

    return 0;
}
