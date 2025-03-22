#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.14159265358979323846;

double calcularAreaCirculo(double raio) {
    // Calcula a �rea usando a f�rmula A = p * r^2
    double area = PI * pow(raio, 2); // Usando pow para calcular r^2
    return area;
}

int main() {
    double raio;

    printf("Digite o raio do c�rculo: ");
    scanf("%lf", &raio);

    if (raio < 0) {
        printf("O raio n�o pode ser negativo.\n");
    } else {
        double area = calcularAreaCirculo(raio);
        printf("A �rea do c�rculo com raio %.2lf �: %.2lf\n", raio, area);
    }
    getchar();
    return 0;
}

