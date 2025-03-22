#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14159265358979323846;

double calcularAreaCirculo(double raio) {
    // Calcula a área usando a fórmula A = p * r^2
    double area = PI * pow(raio, 2); // Usando pow para calcular r^2
    return area;
}

int main() {
    double raio;

    printf("Digite o raio do círculo: ");
    scanf("%lf", &raio);

    if (raio < 0) {
        printf("O raio não pode ser negativo.\n");
    } else {
        double area = calcularAreaCirculo(raio);
        printf("A área do círculo com raio %.2lf é: %.2lf\n", raio, area);
    }
    getchar();
    return 0;
}

