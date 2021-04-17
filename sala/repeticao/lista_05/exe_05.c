// 5) Elaborar um programa que valide o número de uma conta corrente com três dígitos, retorne o dígito verificador e
// informe se o número da conta está correto. Ler os quatro dígitos como um único número, validando para que esse
// número esteja em um intervalo de 1000 a 9999. Separar os dígitos de forma que os três primeiros sejam o número da
// conta e o último o dígito verificador. Validar a entrada, ou seja, repetir a entrada do número até que seja informado um
// número com somente quatro dígitos.
// Por exemplo: Se o número informado for 1234, 123 é o número da conta e 4 é o dígito verificador.
// Para obter o dígito verificador:
// - Somar o número da conta com o seu inverso = 123 + 321 = 444
// - Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 4 *1 + 4 * 2 + 4 * 3 = 24
// - O último dígito desse resultado é o verificador: 4
// Outro exemplo:
// Se o usuário informar 1290:
// - Somar o número da conta com o seu inverso = 129 + 921 = 1050
// - Multiplicar cada dígito pela sua ordem posicional e somar os resultados = 1 * 0 + 0 *1 + 5 * 2 + 0 * 3 = 10
// - O último dígito desse resultado é o verificador: 0

#include <stdio.h>

int main(void) {

    int conta = 0, somaConta = 0, digito = 0, x = 0;

    do {
        printf("Informe o numero da conta com ate 4 digitos: ");
        scanf("%d", &conta);

        if (conta < 1000 || conta > 9999) {
            printf("\n\nO numero da conta deve estar entre 1000 e 9999\n\n");
        }
    } while (conta < 1000 || conta > 9999);
    printf("\nCONTA: %d\n", conta);
    printf("Conta corrente = %d%d%d", (conta / 1000), (conta / 100 % 10), (conta / 10 % 10));
    somaConta = (((int)conta/10) + (((conta / 10 % 10) * 100) + ((conta / 100 % 10) * 10) + (conta / 1000)));

    x = (somaConta / 1000 * 0) + (somaConta / 100 % 10 * 1) + (somaConta / 10 % 10 * 2) + (somaConta % 10 * 3);
    digito = x % 10;  

    printf("\nPrimeiro digito: %d\nSegundo digito: %d\nTerceiro digito: %d\nQuarto digito: %d", conta / 1000, conta / 100 % 10, conta / 10 % 10, conta % 10);
    printf("\nInverso = %d%d%d", (conta / 10 % 10), (conta / 100 % 10), (conta / 1000));
    printf("\n%d%d%d + %d%d%d = %d", (conta / 1000), (conta / 100 % 10), (conta / 10 % 10), (conta / 10 % 10), (conta / 100 % 10), (conta / 1000), somaConta);
    printf("\nx = %d\nDigito = %d", x, digito);
    if (digito == conta % 10) {
        printf("\nDigito valido");
    } else {
        printf("\nDigito invalido");
    }
}