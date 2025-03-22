#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    float a, b;

    // Solicita ao usuário que insira os valores
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    // Calcula as operações
    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao;

    // Verifica se b é diferente de zero para evitar divisão por zero
    if (b != 0) {
        divisao = a / b;
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1; // Retorna um código de erro
    }

    // Exibe os resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtração: %.2f\n", subtracao);
    printf("Multiplicação: %.2f\n", multiplicacao);
    printf("Divisão: %.2f\n", divisao);

    getchar(); 
    return 0;
}

