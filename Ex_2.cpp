#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declara��o das vari�veis
    int num1, num2;

    // Solicita ao usu�rio que insira os dois n�meros
    printf("Digite o primeiro n�mero (inteiro): ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero (inteiro): ");
    scanf("%d", &num2);

    // Usando incremento para calcular a soma
    for (int i = 0; i < num2; ++i) {
        ++num1; // Incrementa num1 pelo valor de num2
    }

    // Exibe o resultado
    printf("A soma �: %d\n", num1);
    
    getchar();
    return 0;
}

