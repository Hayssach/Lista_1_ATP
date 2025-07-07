#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero1, numero2, s;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    // Calcula a soma
    s = numero1 + numero2;

    printf("A soma de %d e %d é: %d\n", numero1, numero2, s);

    getchar();
    return 0;
}

