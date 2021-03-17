/*
8) Faça um programa que leia três notas de um aluno e calcule a média ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a média obtida está entre 6 a 10 informar que o aluno está aprovado;
b) Se a média obtida está entre 4 e 5,9 informar que o aluno está em recuperação. Nesse caso, ler a nota de
recuperação e calcular a média final (que é a média entre a média anual e a nota de recuperação);
b.1) Se a média final é menor que 5 informar que o aluno está reprovado após recuperação;
b.2) Se é igual ou maior que 5 informar que o aluno está aprovado após recuperação;
c) Se a média obtida é menor que 4 informar que o aluno está reprovado antes da recuperação.
*/

#include <stdio.h>

int main(void) {

    float nota1, nota2, nota3, media, notaRec;
    int peso1 = 1, peso2 = 3, peso3 = 4;


    printf("Informe suas tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    if (media < 4) {
        return printf("Reprovado antes da recuperacao");
    } else if (media >= 6 && media <= 10) {
        return printf("Aprovado");
    } else {
        printf("Voce ficou de recuperacao, informe sua nota da recuperacao: ");
        scanf("%f", &notaRec);

        media = (notaRec + media) / 2;

        if (media < 5) {
            return printf("Reprovado após a recuperacao");
        }

        return printf("Aprovado após a recuperacao");
    }
}