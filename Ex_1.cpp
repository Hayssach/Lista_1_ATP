#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declara��o das vari�veis
    int num1, num2, soma;

    // Solicita ao usu�rio que insira os dois n�meros
    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &num2);

    // Calcula a soma
    soma = num1 + num2;

    // Exibe o resultado
    printf("A soma de %d e %d �: %d\n", num1, num2, soma);

    getchar();
    return 0;
}

