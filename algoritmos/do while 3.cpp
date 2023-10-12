#include <stdio.h>

int main() {
    int numero, soma = 0;

    printf("Digite os valores inteiros positivos (-1 para encerrar):\n");

    do {
        scanf("%d", &numero);

        if (numero != -1 && numero > 0) {
            soma += numero;
        }
    } while (numero != -1);

    printf("A soma dos valores digitados é: %d\n", soma);

    return 0;
}

