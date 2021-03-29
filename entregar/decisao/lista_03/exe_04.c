/*
4) Faça um programa que receba o salário de um funcionário e o código correspondente ao seu cargo atual e mostre o
cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir:
*/

#include <stdio.h>

int main(void) {

    float salario;
    int cargo;

    printf("Informe seu salario: R$");
    scanf("%f", &salario);

    printf("\nCodigo\tCargo\t\tPercentual\n");
    printf("1\tEscriturario\t50%%\n");
    printf("2\tSecretario\t35%%\n");
    printf("3\tCaixa\t\t20%%\n");
    printf("4\tGerente\t\t10%%\n");
    printf("5\tDiretor\t\tNao tem aumento\n");

    printf("Informe o cargo do funcionario (1, 2, 3, 4 ou 5): ");
    scanf("%d", &cargo);

    switch (cargo) {
        case 1:
            printf("\nCargo eh Escriturario.");
            printf("\nO valor do aumento eh R$%.2f", salario * 0.5);
            printf("\nNovo salario R$%.2f", salario + (salario * 0.5));
            break;
        case 2:
            printf("\nCargo eh Secretario.");
            printf("\nO valor do aumento eh R$%.2f", salario * 0.35);
            printf("\nNovo salario R$%.2f", salario + (salario * 0.35));
            break;
        case 3:
            printf("\nCargo eh Caixa.");
            printf("\nO valor do aumento eh R$%.2f", salario * 0.2);
            printf("\nNovo salario R$%.2f", salario + (salario * 0.2));
            break;
        case 4:
            printf("\nCargo eh Gerente.");
            printf("\nO valor do aumento eh R$%.2f", salario * 0.1);
            printf("\nNovo salario R$%.2f", salario + (salario * 0.1));
            break;
        case 5:
            printf("\nCargo eh Diretor.");
            printf("\nNao tem aumento");
            break;
        default:
            printf("\nNenhum cargo com esse codigo.");
            break;
    }
}