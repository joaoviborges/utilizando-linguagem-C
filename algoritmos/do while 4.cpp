#include <stdio.h>

int main() {
    int numero, somaPares = 0, somaImpares = 0;
    int contadorPares = 0, contadorImpares = 0;
    int maiorPar = 0, menorImpar = 0;
    int primeiroImpar = 1;

    printf("Digite os n�meros (negativo para encerrar):\n");

    do {
        scanf("%d", &numero);

        if (numero >= 0) {
            if (numero % 2 == 0) {
                somaPares += numero;
                contadorPares++;

                if (numero > maiorPar) {
                    maiorPar = numero;
                }
            } else {
                somaImpares += numero;
                contadorImpares++;

                if (primeiroImpar || numero < menorImpar) {
                    menorImpar = numero;
                    primeiroImpar = 0;
                }
            }
        }
    } while (numero >= 0);

    float mediaPares = 0.0, mediaImpares = 0.0;

    if (contadorPares > 0) {
        mediaPares = (float) somaPares / contadorPares;
    }

    if (contadorImpares > 0) {
        mediaImpares = (float) somaImpares / contadorImpares;
    }

    printf("\nM�dia dos valores pares: %.2f\n", mediaPares);
    printf("M�dia dos valores �mpares: %.2f\n", mediaImpares);
    printf("Maior n�mero par digitado: %d\n", maiorPar);
    printf("Menor n�mero �mpar digitado: %d\n", menorImpar);

    return 0;
}

