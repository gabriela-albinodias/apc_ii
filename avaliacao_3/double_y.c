// Gabriela Albino Dias
// Matrícula: 2512082002

#include <stdio.h>
#include <stdlib.h>

double valor_y(double x1, double y1, double x2, double y2, double x) {
    double a = y1 - y2; 
    double b = x2 - x1; 
    double c = x1 * y2 - x2 * y1;

    if (b < 0) {
        printf("A reta e vertical e nao define y para um dado x.\n");
        exit (1); 
    }
    double m = -a / b;
    double n = -c / b;      

    return m * x + n;
}
int main() {
    double x1 = 2.0, y1 = 4.0;
    double x2 = 6.0, y2 = 8.0;  
    double x = 5.0; 
    double y = valor_y(x1, y1, x2, y2, x);
    if (y != 0) {
        printf("Para x = %.2f, y = %.2f\n", x, y);
    }
return 0;
}
