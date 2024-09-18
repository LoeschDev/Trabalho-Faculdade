#include <stdio.h>
#include <string.h>

#define MAX_TENTATIVAS 10

int main() {
    char palavra_secreta[11]; 
    char letra;
    int vidas, tamanho, acertou = 0, encontrou;
    int i;
    
    strcpy(palavra_secreta, "computador");
    tamanho = strlen(palavra_secreta);
    vidas = tamanho + 2; 

    char progresso[tamanho];
    for (i = 0; i < tamanho; i++) {
        progresso[i] = '_';
    }

    printf("jogo da forca!\n");

    while (vidas > 0 && acertou < tamanho) {
        encontrou = 0;
        printf("\npalavra: ");
        for (i = 0; i < tamanho; i++) {
            printf("%c ", progresso[i]);
        }
        printf("\nvidas restantes: %d\n", vidas);
        
        printf("digite uma letra: ");
        scanf(" %c", &letra);

        for (i = 0; i < tamanho; i++) {
            if (palavra_secreta[i] == letra && progresso[i] == '_') {
                progresso[i] = letra;
                acertou++;
                encontrou = 1;
            }
        }

        if (!encontrou) {
            vidas--;
            printf("letra errada!\n");
        } else {
            printf("letra correta!\n");
        }
    }

    if (acertou == tamanho) {
        printf("\nvoce descobriu a palavra: %s\n", palavra_secreta);
    } else {
        printf("\nvoce perdeu! a palavra era: %s\n", palavra_secreta);
    }

    return 0;
}
