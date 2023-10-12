#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("Menu:\n");
        printf("1. Clientes\n");
        printf("2. Fornecedores\n");
        printf("3. Encomendas\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Opção selecionada: Clientes\n");
                // Coloque aqui o código para a opção Clientes
                break;
            case 2:
                printf("Opção selecionada: Fornecedores\n");
                // Coloque aqui o código para a opção Fornecedores
                break;
            case 3:
                printf("Opção selecionada: Encomendas\n");
                // Coloque aqui o código para a opção Encomendas
                break;
            case 4:
                printf("Opção selecionada: Sair\n");
                break;
            default:
                printf("Opção inválida. Por favor, escolha uma opção válida.\n");
                break;
        }

        printf("\n");
    } while (opcao != 4);

    printf("Programa encerrado.\n");

    return 0;
}

