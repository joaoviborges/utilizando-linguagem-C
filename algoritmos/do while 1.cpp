#include <stdio.h>

int main() {
    int numero, contadorPares = 0, contadorImpares = 0;
    int somaPares = 0, somaTotal = 0;

    do {
        printf("Digite um número (0 para sair): ");
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

    printf("\nQuantidade de números pares: %d\n", contadorPares);
    printf("Quantidade de números ímpares: %d\n", contadorImpares);

    if (contadorPares > 0) {
        float mediaPares = (float) somaPares / contadorPares;
        printf("Média dos números pares: %.2f\n", mediaPares);
    } else {
        printf("Não foram digitados números pares.\n");
    }

    if (contadorPares + contadorImpares > 0) {
        float mediaGeral = (float) somaTotal / (contadorPares + contadorImpares);
        printf("Média geral dos números: %.2f\n", mediaGeral);
    } else {
        printf("Nenhum número foi digitado.\n");
    }

    return 0;
}

