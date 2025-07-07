#include <stdio.h>
#include <stdlib.h>

int main() {

// Declaração das variáveis
int num1, num2;

// Solicita que o usuário preencha os dois números
printf("Digite o primeiro número (inteiro): ");
scanf("%d", &num1);

printf("Digite o segundo número (inteiro): ");
scanf("%d", &num2);

// Adicionar num2 a num1 sem usar o operador adicional
for (int i = 0; i < num2; ++i)
{
    ++num1;
}

// Exibe o resultado
printf("A soma é: %d\n", num1);

getchar();
return 0;
}
