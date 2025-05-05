// Quest�o 2 Implemente uma fun��o int potencia(int base, int expoente) que calcule pot�ncias usando apenas multiplica��es.
// O codigo n�o aguenta valores negativos (printa 1) e valores muito grandes, mas � um bom come�o para entender o funcionamento da fun��o potencia.
#include <stdio.h>
#include <stdlib.h>

// A fun��o potencia calcula a pot�ncia de um n�mero inteiro base elevado a um expoente inteiro usando multiplica��o.
int potencia(int base, int expoente)
{
    int resultado = 1; // Inicializa o resultado como 1.

    // Verifica se o expoente � negativo. Se for, retorna 1 (n�o lida com expoentes negativos).
    if (expoente < 0)
    {
        return 1; // N�o lida com expoentes negativos, retorna 1.
    }
    // Estrutura de repeti��o que multiplica a base pelo resultado o n�mero de vezes igual ao expoente.
    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }
    //Retorna o resultado da pot�ncia calculada.
    return resultado;
}
int main()
{
    int base, expoente; // varriaveis para armazenar a base e o expoente.
    // Solicita ao usu�rio que insira a base e o expoente.
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    // Chamada da fun��o potencia.
    int resultado = potencia(base, expoente);
    // Exibe o resultado da pot�ncia calculada.
    printf("%d^%d = %d\n", base, expoente, resultado);

    return 0;
}