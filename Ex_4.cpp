#include <stdio.h>
#include <stdlib.h>
int main() {
    int b, v;

    
    printf("Digite um valor para b: ");
    scanf("%d", &b);

    printf("Digite um valor para c: ");
    scanf("%d", &c);

    // Troca os valores usando operações aritméticas
    b = b + c; // a agora contém a soma dos dois valores
    c = b - c; // b agora contém o valor original de a
    b = b - c; // a agora contém o valor original de b

    printf("Após a troca: \n");
    printf("a = %d\n", b);
    printf("b = %d\n", c);

    getchar();
    return 0;
}

