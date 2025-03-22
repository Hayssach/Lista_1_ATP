#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declaração das variáveis
    int num1, num2;

    // Solicita ao usuário que insira os dois números
    printf("Digite o primeiro número (inteiro): ");
    scanf("%d", &num1);

    printf("Digite o segundo número (inteiro): ");
    scanf("%d", &num2);

    // Usando incremento para calcular a soma
    for (int i = 0; i < num2; ++i) {
        ++num1; // Incrementa num1 pelo valor de num2
    }

    // Exibe o resultado
    printf("A soma é: %d\n", num1);
    
    getchar();
    return 0;
}

