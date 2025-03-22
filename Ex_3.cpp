#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaração das variáveis
    float n1, n2, soma;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número (use '.' para separar as casas decimais): ");
    scanf("%f", &n1);

    printf("Digite o segundo número (use '.' para separar as casas decimais): ");
    scanf("%f", &n2);

    // Calcula a soma
    soma = n1 + n2;

    // Exibe o resultado
    printf("A soma de %.2f e %.2f é: %.2f\n", n1, n2, soma);
    
    getchar();
    return 0;
}

