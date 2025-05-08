//Questão 5 Interseção de Vetores. O objetivo do código é encontrar a interseção entre dois vetores, ou seja, os elementos que estão presentes em ambos os vetores. O código lê dois vetores de inteiros e exibe os elementos que estão presentes em ambos os vetores.

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para português

    int vetor1[10], vetor2[10], intersecao[10]; // Declaração de vetores e vetor de interseção
    int i, j, k = 0; // Declaração de variáveis de controle

    // Leitura do primeiro vetor
    printf("Digite 10 números inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]); // Lê os elementos do primeiro vetor
    }
    // Leitura do segundo vetor
    printf("Digite 10 números inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]); // Lê os elementos do segundo vetor
    }

    // Encontrar a interseção entre os dois vetores
    for (i = 0; i < 10; i++) { // Percorre o primeiro vetor
        for (j = 0; j < 10; j++) { // Percorre o segundo vetor
            if (vetor1[i] == vetor2[j]) { // Se os elementos forem iguais
                intersecao[k] = vetor1[i]; // Adiciona à interseção
                k++; // Incrementa o índice da interseção
                break; // Sai do loop interno para evitar duplicatas
            }
        }
    }

    // Exibir a interseção dos vetores
    printf("Interseção dos vetores:\n");
    for (i = 0; i < k; i++) { // Percorre o vetor de interseção
        printf("%d ", intersecao[i]); // Exibe os elementos da interseção
    }
    printf("\n"); // Nova linha após a exibição

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}