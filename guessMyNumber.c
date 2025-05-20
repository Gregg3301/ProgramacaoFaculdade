#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroEscolhido;
    int numeroAleatorio;

    // Inicializa o gerador de números aleatórios com base na hora atual
    srand(time(NULL));
    numeroAleatorio = rand() % 10 + 1;  // de 1 a 10

    printf("Seja bem-vindo ao jogo da sorte!\n");
    printf("Tente adivinhar o meu número de 1 a 10 --> ");
    scanf("%d", &numeroEscolhido);

    printf("Calculando...\n");

    if (numeroEscolhido == numeroAleatorio) {
        printf("VOCÊ GANHOU! O MEU NÚMERO ERA MESMO O %d\n", numeroAleatorio);
    } else {
        printf("VOCÊ PERDEU! O MEU NÚMERO ERA O %d\n", numeroAleatorio);
    }

    return 0;
}
