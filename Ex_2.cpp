#include <stdio.h>
#include <stdlib.h>

int main() {

// Declaração das variáveis
int numero1, numero2;

// Solicita que o usuário preencha os dois números
printf("Digite o primeiro número (inteiro): ");
scanf("%d", &numero1);

printf("Digite o segundo número (inteiro): ");
scanf("%d", &numero2);

// Adicionar num2 a num1 sem usar o operador adicional
for (int i = 0; i < numero2; ++i)
{
    ++numero1;
}

// Exibe o resultado
printf("A soma é: %d\n", numero1);

getchar();
return 0;
}
