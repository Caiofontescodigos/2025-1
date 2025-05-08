//Quest�o 4 Frequ�ncia de N�meros. O objetivo do c�digo � contar a frequ�ncia de cada d�gito em 10 n�meros inteiros. 10 n�meros inteiros e mostre quantas vezes cada n�mero distinto aparece.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para portugu�s

    int numero, i=0; // Declara��o de vari�veis
    int frequencia[10] = {0}; // Inicializa um array para armazenar a frequ�ncia de cada d�gito (0 a 9)
    while(i < 10) // Loop para garantir que o array de frequ�ncia tenha 10 elementos
    {
    i++; // Incrementa o contador
    printf("Digite um n�mero inteiro: "); // Solicita ao usu�rio um n�mero inteiro
    scanf("%d", &numero); // L� o n�mero digitado pelo usu�rio
    
    while (numero != 0) { // Enquanto o n�mero n�o for zero
        int digito = numero % 10; // Obt�m o �ltimo d�gito do n�mero
        frequencia[digito]++; // Incrementa a frequ�ncia do d�gito correspondente
        numero /= 10; // Remove o �ltimo d�gito do n�mero
    }
    }
    printf("Frequ�ncia dos d�gitos:\n"); // Exibe o cabe�alho da tabela de frequ�ncia
    for (i = 0; i < 10; i++) { // Percorre os d�gitos de 0 a 9
        if (frequencia[i] > 0) { // Se a frequ�ncia do d�gito for maior que zero
            printf("D�gito %d: %d vez(es)\n", i, frequencia[i]); // Exibe a frequ�ncia do d�gito
        }
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}