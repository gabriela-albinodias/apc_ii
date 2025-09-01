#include <stdio.h>

char tela[60][20]; // matriz da tela 60x20

void limpar_tela() {
    for (int x = 0; x < 60; x++) {
        for (int y = 0; y < 20; y++) {
            tela[x][y] = ' ';
        }
    }
}

void desenhar_reta(int x1, int y1, int x2, int y2) {
    if (x1 == x2) {
        // reta vertical
        int passo = (y2 > y1) ? 1 : -1;
        for (int y = y1; ; y += passo) {
            if (x1 >= 0 && x1 < 60 && y >= 0 && y < 20)
                tela[x1][y] = '@';
            if (y == y2) break;
        }
    } else if (y1 == y2) {
        // reta horizontal
        int passo = (x2 > x1) ? 1 : -1;
        for (int x = x1; ; x += passo) {
            if (x >= 0 && x < 60 && y1 >= 0 && y1 < 20)
                tela[x][y1] = '@';
            if (x == x2) break;
        }
    } else {
        // caso geral
        double a = y1 - y2;
        double b = x2 - x1;
        double c = x1 * y2 - x2 * y1;
        double m = -a / b;
        double n = -c / b;

        double passo = (x2 > x1) ? 0.25 : -0.25;
        for (double xd = x1; ; xd += passo) {
            double yd = m * xd + n;
            int xi = (int)(xd + 0.5); // arredonda
            int yi = (int)(yd + 0.5);
            if (xi >= 0 && xi < 60 && yi >= 0 && yi < 20)
                tela[xi][yi] = '@';
            if ((passo > 0 && xd >= x2) || (passo < 0 && xd <= x2))
                break;
        }
    }
}

void desenhar_triangulo(int x1, int y1, int x2, int y2, int x3, int y3) {
    int area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if (area == 0) {
        printf("Pontos colineares, nao formam triangulo.\n");
        return;
    }
    desenhar_reta(x1, y1, x2, y2);
    desenhar_reta(x2, y2, x3, y3);
    desenhar_reta(x3, y3, x1, y1);
}

int main() {
    limpar_tela();
    desenhar_reta(5, 2, 50, 15);
    for (int y = 19; y >= 0; y--) {
        for (int x = 0; x < 60; x++) {
            putchar(tela[x][y]);
        }
        putchar('\n');
    }

    limpar_tela();
    desenhar_triangulo(10, 2, 50, 2, 30, 15);
    for (int y = 19; y >= 0; y--) {
        for (int x = 0; x < 60; x++) {
            putchar(tela[x][y]);
        }
        putchar('\n');
    }

    return 0;
}
