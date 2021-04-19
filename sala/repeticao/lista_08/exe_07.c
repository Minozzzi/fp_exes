// 7) Construa um programa que leia um conjunto de dados contendo altura (que deve ser maior que 0) e sexo
// (que deve ser masculino ou feminino) de um grupo de pessoas. Quando fornecida uma altura igual a 0, é
// encerrada a entrada de dados. O programa deve calcular e fornecer:
// a) A maior e a menor altura do grupo.
// b) A média de altura das mulheres.
// c) A média de altura dos homens.
// d) O número de homens e o percentual que eles representam no grupo.
// e) O número de mulheres e o percentual que elas representam no grupo.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    int contHom = 0, contMul = 0, totalPessoas = 0, primeiraVez = 0;
    float altura = 0, somaHom = 0, somaMul = 0, maiorAltura = 0, menorAltura = 0;
    char sexo = ' ';

    do { 
        printf("Informe a altura: ");
        scanf("%f", &altura);
        __fpurge(stdin);

        if (altura > 0) {

            do {
                printf("Informe o sexo (F = Feminino e M = Masculino): ");
                scanf("%c", &sexo);
                __fpurge(stdin);
            } while (toupper(sexo) != 'M' && toupper(sexo) != 'F');

            if (toupper(sexo) == 'M') {
                contHom++;
                somaHom += altura;
            } else {
                contMul++;
                somaMul += altura;  
            }
            if (maiorAltura < altura) {
                maiorAltura = altura;
            }
            if (primeiraVez == 0) {
                menorAltura = altura;
                primeiraVez = 1;
            }
            if (menorAltura > altura && primeiraVez != 0) {
                menorAltura = altura;
            }
            totalPessoas++;
        }
    } while (altura > 0);    

    printf("\n\nA maior altura = %.2f\nA menor altura = %.2f", maiorAltura, menorAltura);
    printf("\n\n=== MULHERES ===");
    printf("\nQuantidade: %d\nMedia de altura: %.2f", contMul, contMul > 0 ? (float)somaMul/contMul : 0);
    printf("\nPercentual: %.2f", ((float)(contMul * 100)) /totalPessoas);
    printf("\n\n=== HOMENS ===");
    printf("\nQuantidade: %d\nMedia de altura: %.2f", contHom, contHom > 0 ? (float)somaHom/contHom : 0);
    printf("\nPercentual: %.2f", (contHom * 100) / (float)totalPessoas);
}