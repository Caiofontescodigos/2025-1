//questão 6 Soma de Matrizes. O objetivo do código é somar duas matrizes de inteiros e exibir o resultado. O código lê duas matrizes de inteiros e exibe a soma das duas matrizes.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para português

    int matriz1[3][3], matriz2[3][3], soma[3][3]; // Declaração de matrizes 3x3
    int i, j; // Declaração de variáveis de controle

    // Leitura da primeira matriz
    printf("Digite os elementos da primeira matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz1[i][j]); // Lê os elementos da primeira matriz
        }
    }

    // Leitura da segunda matriz
    printf("Digite os elementos da segunda matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz2[i][j]); // Lê os elementos da segunda matriz
        }
    }

    // Soma das matrizes
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            soma[i][j] = matriz1[i][j] + matriz2[i][j]; // Soma os elementos correspondentes
        }
    }

    // Exibir a soma das matrizes
    printf("Soma das matrizes:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", soma[i][j]); // Exibe os elementos da soma
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}