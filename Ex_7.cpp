#include <stdio.h>
#include <stdlib.h>
const double PI = 3.14159265358979323846;

double calculaAreaCirculo(double r) {
    // Calcula a área usando a fórmula A = p * r^2
    double a = PI;
    // Multiplica o raio por ele mesmo para obter r^2
    a *= r * r;
    return a;
}

int main() {
    double r;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &r);

    if (r < 0) {
        printf("O raio não pode ser negativo.\n");
    } else {
        double a = calcularAreaCirculo(r);
        printf("A área do círculo com raio %.2lf é: %.2lf\n", r, a);
    }
    getchar();
    return 0;
}

