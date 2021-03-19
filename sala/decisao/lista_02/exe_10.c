/*
10) Faça um programa que solicite ao usuário o valor do salário de um funcionário e apresente o menu a
seguir e permita ao usuário escolher a opção desejada e mostre o resultado. Verifique a possibilidade de
opção inválida e não se preocupe com restrições, como salário negativo. Use switch - case, if e if - else para a
solução.Menu de opções:
1 – Imposto
2 – Novo salário
3 – Classificação
Digite a opção desejada:
Na opção 1 - Calcular e mostrar o valor do imposto sobre o salário usando as regras a seguir:
Salário Percentual do imposto
Menor que R$ 1.000,00 5%
De R$ 1.000,00 a R$ 1.500,00 10%
Acima de R$ 1.500,00 15%
Na opção 2 - Mostrar o valor de aumento de salário e o valor final do salário (salário aumentado) usando a
tabela a seguir:
Salário Aumento
Menor que R$ 1.000,00 R$ 75,00
De R$ 1.000,00 a R$ 1.500,00 R$ 100,00
Acima de R$ 1.500,00 R$ 150,00
Na opção 3 - Mostrar a classificação usando a tabela a seguir:
Salário Classificação
Maior ou igual a R$ 1.000,00 Categoria A
Menor que R$ 1.000,00 Categoria B
*/

#include <stdio.h>

int main(void) {

    float salario, aumento;
    int opcao;

    printf("Informe o salario de um funcionario: R$");
    scanf("%f", &salario);

    printf("Selecione uma opcao \n1 - Imposto\n2 - Novo salario\n3 - Classificacao\n");
    scanf("%d", &opcao);

    switch (opcao) {
    case 1:
        printf("O imposto sobre seu salario eh R$%.2f", salario < 1000 ? salario * 0.05 : salario >= 1000 && salario <= 1500 ? salario * 0.1 : salario * 0.15);
        break;
    case 2:
        if (salario < 1000) {
            aumento = 75;
        } else if (salario >= 1000 && salario <= 1500) {
            aumento = 100;
        } else {
            aumento = 150;
        }
        printf("O aumento do salario eh de R$%.2f sendo seu novo salario R$%.2f", aumento, salario + aumento);
        break;
    case 3:
        printf("Categoria %c", salario >= 1000 ? 'A' : 'B');
        break;
    default:
        printf("\nOpcao invalida");
        break;
    }
}