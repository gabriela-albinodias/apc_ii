#include <stdio.h>

void zera_impares(int vetor[], int n) {
    for (int i = 0; i < n; i++) {
        if (vetor[i] % 2 != 0) {
            vetor[i] = 0;
        }
    }
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5, 6};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);

    printf("Antes:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    zera_impares(numeros, tamanho);

    printf("\nDepois de zerar impares:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", numeros[i]);
    }

    return 0;
}
