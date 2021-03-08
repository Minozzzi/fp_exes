// 12) Calcule e mostre a média de idade de três pessoas.

#include <stdio.h>

int main(void) 
{
    int idade1, idade2, idade3;

    printf("Informe a primeira idade: ");
    scanf("%d", &idade1);

    printf("Informe a segunda idade: ");
    scanf("%d", &idade2);

    printf("Informe a terceira idade: ");
    scanf("%d", &idade3);

    printf("A media da idade dessas tres pessoas seria de: %d", (idade1 + idade2 + idade3) / 3);
}