#include <stdio.h>

void divide (int x, int y, float *resultado) {
    if (y != 0) {
        *resultado = (float)x / y;}
    else {
        *resultado = 0; // Evita divisao por zero, atribuindo 0 
    }
}

int main() {
    int x = 10, y = 20;
    printf("Antes da divisao: x = %d, y = %d\n", x, y);

    float resultado;
    divide(x, y, &resultado); // Chama a função divide passando o endereço de resultado
    printf("Resultado da divisao: %.2f\n", resultado);

    divide(x, 0, &resultado); // Testa a divisao por zer
    printf("Resultado da divisao por zero: %.2f\n", resultado);

    return 0;
}