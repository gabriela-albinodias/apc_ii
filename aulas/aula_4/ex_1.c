#include <stdio.h>

void troca (int *px, int *py) {
    int temp = *px; // Armazena o valor apontado por px em temp
    *px = *py; // Atribui o valor apontado por py ao local apontado por px
    *py = temp; // Atribui o valor armazenado em temp ao local apontado por py
}


int main() {
    int x = 5, y = 10;
    int temp = x;
    x = y;  
    y = temp;
    printf("Antes da troca: x = %d, y = %d\n", x, y);
    troca(&x, &y); // Chama a função troca passando os endereços de x e y
    printf("Depois da troca: x = %d, y = %d\n", x, y);

    return 0;   
}