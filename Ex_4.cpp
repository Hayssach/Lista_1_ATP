#include <stdio.h>
#include <stdlib.h>
int main() {
    // Declaração das variáveis
    int a, b;

    // Solicita ao usuário que insira os valores
    printf("Digite um valor para a: ");
    scanf("%d", &a);

    printf("Digite um valor para b: ");
    scanf("%d", &b);

    // Troca os valores usando operações aritméticas
    a = a + b; // a agora contém a soma dos dois valores
    b = a - b; // b agora contém o valor original de a
    a = a - b; // a agora contém o valor original de b

    // Exibe os resultados
    printf("Após a troca: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    getchar();
    return 0;
}

