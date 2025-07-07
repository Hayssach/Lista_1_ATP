#include <stdio.h>
#include <stdlib.h>

int main() {
    float b, c;

    
    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Calcula as operações
    float soma = b + c;
    float subt = b - c;
    float mult = b * c;
    float div;

    // Verifica se b é diferente de zero para evitar divisão por zero
    if (c != 0) {
        div = b / c;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1; 
    }

    // Exibe os resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subt);
    printf("Multiplicação: %.2f\n", mult);
    printf("Divisão: %.2f\n", div);

    getchar(); 
    return 0;
}

