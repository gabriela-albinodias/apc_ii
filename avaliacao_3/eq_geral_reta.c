// Gabriela Albino Dias
// Matrícula: 2512082002


#include <stdio.h>

void exibir_equacao_geral_da_reta(double x1, double y1, double x2, double y2) {
    double a = y1 - y2; 
    double b = x2 - x1;
    double c = x1 * y2 - x2 * y1;   
    printf("Equacao geral da reta: %.2fx %+.2fy %+.2f = 0\n", a, b, c);

}
        int main() {
            double x1 = 2.0, y1 = 4.0;
            double x2 = 6.0, y2 = 8.0;  
            exibir_equacao_geral_da_reta(x1, y1, x2, y2);
            return 0;       

    }


