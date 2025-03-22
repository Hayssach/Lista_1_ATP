#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    int num1, num2, soma;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    // Calcula a soma
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d e %d é: %d\n", num1, num2, soma);

    getchar();
    return 0;
}

