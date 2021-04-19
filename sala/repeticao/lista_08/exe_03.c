// 3) Ler a idade, o tipo (E = Estudante e P = Professor) de cinco pessoas. Se o tipo for P, solicitar o salário e
// fazer a média dos salários informados. Se o tipo for E, solicitar se o mesmo recebe mesada. Contar quantos
// recebem e quantos não recebem mesada. Garantir que o usuário informe uma idade válida, ou seja, maior
// que 0, que o tipo seja E ou P e que recebe mesada seja S ou N. Validar essas entradas, ou seja, solicitar
// essas entradas até que sejam válidas. Validar para que não seja realizada uma divisão por zero.

#include <stdio_ext.h>
#include <ctype.h>

int main(void) {

    char opt = ' ';
    do {
        
        int idade = 0, contRecebeMesada = 0, contNaoRecebeMesada = 0, soma = 0, contSalarios = 0;
        char profissao = ' ', mesada = ' ';        
        float salario = 0;

        for (int i = 1; i <=5; i++) {
            do {
                printf("Informe a idade da pessoa %d: ", i);
                scanf("%d", &idade);
                __fpurge(stdin);

            } while (idade <= 0);

            do {
                printf("Informe o tipo (P = Professor e E = Estudante): ");
                scanf("%c", &profissao);
                __fpurge(stdin);

            } while (toupper(profissao) != 'E' && toupper(profissao) != 'P');

            if (toupper(profissao) == 'E') {
                do {
                    printf("Recebe mesada (S = Sim e N = Nao) ? ");
                    scanf("%c", &mesada);
                    __fpurge(stdin);

                } while (toupper(mesada) != 'S' && toupper(mesada) != 'N');

                if (toupper(mesada) == 'S') {
                    contRecebeMesada++;
                } else {
                    contNaoRecebeMesada++;
                }
            } else {
                do {
                    printf("Informe o salario: R$ ");
                    scanf("%f", &salario);
                    __fpurge(stdin);

                } while (salario <= 0);

                soma += salario;
                contSalarios++;
            }
        }

        printf("\n\nMedia salarial dos professores = R$ %.2f", contSalarios > 0 ? (float)soma/contSalarios : 0);
        printf("\n%d Estudantes recebem mesada\n%d Estudantes nao recebem mesada", contRecebeMesada, contNaoRecebeMesada);
        printf("\nDeseja repetir ? (S/s ou N/n) \n");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (toupper(opt) == 'S');    
}