// Questão 2 Implemente uma função int potencia(int base, int expoente) que calcule potências usando apenas multiplicações.
// O codigo não aguenta valores negativos (printa 1) e valores muito grandes, mas é um bom começo para entender o funcionamento da função potencia.
#include <stdio.h>
#include <stdlib.h>

// A função potencia calcula a potência de um número inteiro base elevado a um expoente inteiro usando multiplicação.
int potencia(int base, int expoente)
{
    int resultado = 1; // Inicializa o resultado como 1.

    // Verifica se o expoente é negativo. Se for, retorna 1 (não lida com expoentes negativos).
    if (expoente < 0)
    {
        return 1; // Não lida com expoentes negativos, retorna 1.
    }
    // Estrutura de repetição que multiplica a base pelo resultado o número de vezes igual ao expoente.
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    //Retorna o resultado da potência calculada.
    return resultado;
}
int main()
{
    int base, expoente; // varriaveis para armazenar a base e o expoente.
    // Solicita ao usuário que insira a base e o expoente.
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    // Chamada da função potencia.
    int resultado = potencia(base, expoente);
    // Exibe o resultado da potência calculada.
    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}