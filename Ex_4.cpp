#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declara��o das vari�veis
    int a, b;

    // Solicita ao usu�rio que insira os valores
    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("Digite um valor para b: ");
    scanf("%d", &b);

    // Troca os valores usando opera��es aritm�ticas
    a = a + b; // a agora cont�m a soma dos dois valores
    b = a - b; // b agora cont�m o valor original de a
    a = a - b; // a agora cont�m o valor original de b

    // Exibe os resultados
    printf("Ap�s a troca: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    getchar();
    return 0;
}

