#include <stdio.h>

int main() {
    int numero, contadorPares = 0, contadorImpares = 0;
    int somaPares = 0, somaTotal = 0;

    printf("Digite os n�meros positivos (0 para sair):\n");
    do {
        scanf("%d", &numero);

        if (numero != 0) {
            somaTotal += numero;

            if (numero % 2 == 0) {
                contadorPares++;
                somaPares += numero;
            } else {
                contadorImpares++;
            }
        }
    } while (numero != 0);

    printf("\nQuantidade de n�meros pares: %d\n", contadorPares);
    printf("Quantidade de n�meros �mpares: %d\n", contadorImpares);

    if (contadorPares > 0) {
        float mediaPares = (float) somaPares / contadorPares;
        printf("M�dia dos valores pares: %.2f\n", mediaPares);
    } else {
        printf("N�o foram digitados n�meros pares.\n");
    }

    if (contadorPares + contadorImpares > 0) {
        float mediaGeral = (float) somaTotal / (contadorPares + contadorImpares);
        printf("M�dia geral dos n�meros: %.2f\n", mediaGeral);
    } else {
        printf("Nenhum n�mero foi digitado.\n");
    }

    return 0;
}

