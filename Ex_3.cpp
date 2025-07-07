#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    float num1, num2, s;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número (use '.' para separar as casas decimais): ");
    scanf("%f", &num1);

    printf("Digite o segundo número (use '.' para separar as casas decimais): ");
    scanf("%f", &num2);

    // Calcula a soma
    s = num1 + num2;

    // Exibe o resultado
    printf("A soma de %.2f e %.2f é: %.2f\n", num1, num2, s);
    
    getchar();
    return 0;
}

