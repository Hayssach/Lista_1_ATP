#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declara��o das vari�veis
    float n1, n2, soma;

    // Solicita ao usu�rio que insira os dois n�meros
    printf("Digite o primeiro n�mero (use '.' para separar as casas decimais): ");
    scanf("%f", &n1);

    printf("Digite o segundo n�mero (use '.' para separar as casas decimais): ");
    scanf("%f", &n2);

    // Calcula a soma
    soma = n1 + n2;

    // Exibe o resultado
    printf("A soma de %.2f e %.2f �: %.2f\n", n1, n2, soma);
    
    getchar();
    return 0;
}

