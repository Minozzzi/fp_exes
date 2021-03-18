/*
4) Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que é
inválido e finalizar o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7
*/

#include <stdio.h>

int main(void) {

    char sexo;
    float altura;

    printf("Informe seu sexo (m ou M para masculino e f ou F para feminino): ");
    scanf("%c", &sexo);

    if ((sexo == 'F' || sexo == 'f') || (sexo == 'M' || sexo == 'm')) {
        printf("Informe sua altura em metros: ");
        scanf("%f", &altura);
        return printf("\nPeso ideal = %.2f kg", sexo == 'M' || sexo == 'm' ? (72.7 * altura) - 58 : (62.1 * altura) - 44.7);
    }

    return printf("Caractere invalido");
}