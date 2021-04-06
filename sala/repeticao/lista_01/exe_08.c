// WHILE
// 8) Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
// empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
// - Idade
// - Nacionalidade (B - Brasileiro ou E - Estrangeiro)
// - Possui curso superior (S - Sim ou N - Não)
// Determinar:
// a) A quantidade de brasileiros.
// b) A quantidade de estrangeiros.
// c) A idade média dos brasileiros sem curso superior.
// d) A menor idade entre os estrangeiros com curso superior.
// Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
// negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
// superior, e sair do programa.

#include <stdio.h>
#include <ctype.h>
#include <stdio_ext.h>


int main(void) {

    int idade = 1, contBr = 0, contBrSemCurso = 0, contEstrangeiro = 0, idadeMediaBrSemCurso = 0, menorIdadeEstrangeiroCurso = 0, primeiro = 0;
    char nac, cursoSuperior;

    while (idade > 0) {

        printf("Informe a idade: ");
        scanf("%d", &idade);
        __fpurge(stdin);

        if (idade > 0) {
            do {
                printf("Informe a nacionalidade: (B - Brasileiro ou E - Estrangeiro): ");
                scanf("%c", &nac);
                __fpurge(stdin);

                if ((toupper(nac) != 'B') && (toupper(nac) != 'E')) {
                    printf("Caractere invalido\n");
                }
            } while ((toupper(nac) != 'B' && toupper(nac) != 'E'));
            
            do {
                printf("Possui curso superior ? (S - Sim e N - Nao): ");
                scanf("%c", &cursoSuperior);
                __fpurge(stdin);

                if ((toupper(cursoSuperior) != 'S') && (toupper(cursoSuperior) != 'N')) {
                    printf("Caractere invalido\n");
                }
            } while ((toupper(cursoSuperior) != 'S') && (toupper(cursoSuperior) != 'N'));

            if (toupper(nac) == 'B') {
                
                contBr += 1;        

                if (toupper(cursoSuperior) == 'N') {
                    idadeMediaBrSemCurso += idade;
                    contBrSemCurso += 1;
                }

            } else if (toupper(nac) == 'E') {
        
                contEstrangeiro += 1;

                if (primeiro == 0 && (toupper(cursoSuperior) == 'S')) {
                    menorIdadeEstrangeiroCurso = idade;
                    primeiro = 1;
                } else if ((idade < menorIdadeEstrangeiroCurso) && (toupper(cursoSuperior) == 'S')) {
                    menorIdadeEstrangeiroCurso = idade;
                }
            }       
        } 
    }
    printf("\nQuantidade de brasileiros: %d", contBr);
    printf("\nQuantidade de estrangeiros: %d", contEstrangeiro);
    if (contBrSemCurso > 0) {
        printf("\nA idade media dos brasilerios sem curso: %.2f", (float)(idadeMediaBrSemCurso/contBrSemCurso));
    }
    printf("\nA menor idade de estrangeiro com curso superior: %d", menorIdadeEstrangeiroCurso);

}