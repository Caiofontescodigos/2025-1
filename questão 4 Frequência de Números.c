//Questão 4 Frequência de Números. O objetivo do código é contar a frequência de cada dígito em 10 números inteiros. 10 números inteiros e mostre quantas vezes cada número distinto aparece.

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para português

    int numero, i=0; // Declaração de variáveis
    int frequencia[10] = {0}; // Inicializa um array para armazenar a frequência de cada dígito (0 a 9)
    while(i < 10) // Loop para garantir que o array de frequência tenha 10 elementos
    {
    i++; // Incrementa o contador
    printf("Digite um número inteiro: "); // Solicita ao usuário um número inteiro
    scanf("%d", &numero); // Lê o número digitado pelo usuário
    
    while (numero != 0) { // Enquanto o número não for zero
        int digito = numero % 10; // Obtém o último dígito do número
        frequencia[digito]++; // Incrementa a frequência do dígito correspondente
        numero /= 10; // Remove o último dígito do número
    }
    }
    printf("Frequência dos dígitos:\n"); // Exibe o cabeçalho da tabela de frequência
    for (i = 0; i < 10; i++) { // Percorre os dígitos de 0 a 9
        if (frequencia[i] > 0) { // Se a frequência do dígito for maior que zero
            printf("Dígito %d: %d vez(es)\n", i, frequencia[i]); // Exibe a frequência do dígito
        }
    }

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}