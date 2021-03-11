/*
2) Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo como no
exemplo a seguir.
*/

#include <stdio.h>

int main(void)
{
    double salario, aumento, desconto, salarioAumentado, salarioLiquido;

    printf("Infome o salario: R$");
    scanf("%lf", &salario);

    printf("Informe o percentual de aumento (Ex: 5 para 5%%): ");
    scanf("%lf", &aumento);

    printf("Informe o percentual de desconto (Ex: 5 para 5%%): ");
    scanf("%lf", &desconto);

    salarioAumentado = (salario * (aumento/100)) + salario;
    salarioLiquido = salarioAumentado - (salarioAumentado * (desconto/100));
    printf("Salario aumentado R$%.2lf", salarioAumentado);
    printf("\nSalario liquido R$%.2lf", salarioLiquido);
    printf("\n\nO salario liquido eh %d reai(s) %.0lf centavo(s)", (int)salarioLiquido, (salarioLiquido - (int)salarioLiquido) * 100);
}