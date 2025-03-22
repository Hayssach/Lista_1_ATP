#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declara��o das vari�veis
    float a, b;

    // Solicita ao usu�rio que insira os valores
    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    // Calcula as opera��es
    float soma = a + b;
    float subtracao = a - b;
    float multiplicacao = a * b;
    float divisao;

    // Verifica se b � diferente de zero para evitar divis�o por zero
    if (b != 0) {
        divisao = a / b;
    } else {
        printf("Erro: Divis�o por zero n�o � permitida.\n");
        return 1; // Retorna um c�digo de erro
    }

    // Exibe os resultados
    printf("Soma: %.2f\n", soma);
    printf("Subtra��o: %.2f\n", subtracao);
    printf("Multiplica��o: %.2f\n", multiplicacao);
    printf("Divis�o: %.2f\n", divisao);

    getchar(); 
    return 0;
}

