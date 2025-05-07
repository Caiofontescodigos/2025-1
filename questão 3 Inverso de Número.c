// Questão 3 inversor de números, o código tem como objetivo inverter um número inteiro, ou seja, transformar 123 em 321. mas é um bom começo para entender o funcionamento da função inversor.
#include <stdio.h>
#include <locale.h>

void inversor(int numero) { // Função que inverte o número

    int inverso = 0; // Variável para armazenar o número invertido

    while (numero != 0) { // Enquanto o número não for zero

        inverso = inverso * 10 + numero % 10; // Inverte o número

        numero /= 10; // Remove o último dígito do número original
    }
    printf("Número invertido: %d\n", inverso); // Exibe o número invertido
}
int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para português

    int numero; // Declaração de variável

    printf("Digite um número inteiro: "); // Solicita ao usuário um número inteiro

    scanf("%d", &numero); // Lê o número digitado pelo usuário

    inversor(numero); // Chama a função inversor para inverter o número

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}