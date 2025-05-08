//Quest�o 5 Interse��o de Vetores. O objetivo do c�digo � encontrar a interse��o entre dois vetores, ou seja, os elementos que est�o presentes em ambos os vetores. O c�digo l� dois vetores de inteiros e exibe os elementos que est�o presentes em ambos os vetores.

#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para portugu�s

    int vetor1[10], vetor2[10], intersecao[10]; // Declara��o de vetores e vetor de interse��o
    int i, j, k = 0; // Declara��o de vari�veis de controle

    // Leitura do primeiro vetor
    printf("Digite 10 n�meros inteiros para o primeiro vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor1[i]); // L� os elementos do primeiro vetor
    }
    // Leitura do segundo vetor
    printf("Digite 10 n�meros inteiros para o segundo vetor:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &vetor2[i]); // L� os elementos do segundo vetor
    }

    // Encontrar a interse��o entre os dois vetores
    for (i = 0; i < 10; i++) { // Percorre o primeiro vetor
        for (j = 0; j < 10; j++) { // Percorre o segundo vetor
            if (vetor1[i] == vetor2[j]) { // Se os elementos forem iguais
                intersecao[k] = vetor1[i]; // Adiciona � interse��o
                k++; // Incrementa o �ndice da interse��o
                break; // Sai do loop interno para evitar duplicatas
            }
        }
    }

    // Exibir a interse��o dos vetores
    printf("Interse��o dos vetores:\n");
    for (i = 0; i < k; i++) { // Percorre o vetor de interse��o
        printf("%d ", intersecao[i]); // Exibe os elementos da interse��o
    }
    printf("\n"); // Nova linha ap�s a exibi��o

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}