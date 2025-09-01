// Gabriela Albino Dias
// Matrícula: 2512082002

#include <stdio.h>

void exibir_funcao_da_reta(double x1, double y1, double x2, double y2) {
    double a = y1 - y2; 
    double b = x2 - x1; 
    double c = x1 * y2 - x2 * y1;

    if (b > 0){
        double m = -a / b;
        double n = -c / b;
        printf("Funcao da reta: f(x) = %.2fx %+.2f\n", m, n); }
    else {
        double x_constante = -c / a;
        printf("A reta e vertical (x = %.2f) e NAO define y = f(x)\n", x_constante);
    }
}

int main() {
    double x1 = 2.0, y1 = 4.0;
    double x2 = 6.0, y2 = 8.0;  
    exibir_funcao_da_reta(x1, y1, x2, y2);

    return 0;
}
