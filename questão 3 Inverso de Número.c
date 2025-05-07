// Quest�o 3 inversor de n�meros, o c�digo tem como objetivo inverter um n�mero inteiro, ou seja, transformar 123 em 321. mas � um bom come�o para entender o funcionamento da fun��o inversor.
#include <stdio.h>
#include <locale.h>

void inversor(int numero) { // Fun��o que inverte o n�mero

    int inverso = 0; // Vari�vel para armazenar o n�mero invertido

    while (numero != 0) { // Enquanto o n�mero n�o for zero

        inverso = inverso * 10 + numero % 10; // Inverte o n�mero

        numero /= 10; // Remove o �ltimo d�gito do n�mero original
    }
    printf("N�mero invertido: %d\n", inverso); // Exibe o n�mero invertido
}
int main() {
    setlocale(LC_ALL, "Portuguese"); // Define o locale para portugu�s

    int numero; // Declara��o de vari�vel

    printf("Digite um n�mero inteiro: "); // Solicita ao usu�rio um n�mero inteiro

    scanf("%d", &numero); // L� o n�mero digitado pelo usu�rio

    inversor(numero); // Chama a fun��o inversor para inverter o n�mero

    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}