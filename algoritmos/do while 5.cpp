#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Clientes\n");
        printf("2. Fornecedores\n");
        printf("3. Encomendas\n");
        printf("4. Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Op��o selecionada: Clientes\n");
                // Coloque aqui o c�digo para a op��o Clientes
                break;
            case 2:
                printf("Op��o selecionada: Fornecedores\n");
                // Coloque aqui o c�digo para a op��o Fornecedores
                break;
            case 3:
                printf("Op��o selecionada: Encomendas\n");
                // Coloque aqui o c�digo para a op��o Encomendas
                break;
            case 4:
                printf("Op��o selecionada: Sair\n");
                break;
            default:
                printf("Op��o inv�lida. Por favor, escolha uma op��o v�lida.\n");
                break;
        }

        printf("\n");
    } while (opcao != 4);

    printf("Programa encerrado.\n");

    return 0;
}

