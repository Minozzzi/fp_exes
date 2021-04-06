// DO - WHILE
// 10) Uma indústria fabrica roupas categorizadas em masculinas, femininas e infantis. Ler a quantidade e a
// respectiva categoria (M, F ou I). Após o loop, calcular e mostrar o percentual de produtos por categoria.
// Validar para que seja informada uma categoria válida. Finalizar a leitura quando informado um valor 0 ou
// negativo para a quantidade. Ler inicialmente a quantidade e depois a categoria. Se informada uma
// quantidade negativa, não ler a categoria

#include <stdio.h>
#include <ctype.h>
#include <stdio_ext.h>

int main(void) {

    char cat;
    int qtd, totalF = 0, totalM = 0, totalI = 0;
    float total = 0;
    do {
        printf("Informe a quantidade: ");
        scanf("%d", &qtd);
        __fpurge(stdin);

        if (qtd > 0) {
            do {
                printf("Informe a categoria Feminino (F), Masculino (M), Infantil (I): ");
                scanf("%c", &cat);
                __fpurge(stdin);

                if (toupper(cat) != 'I' && toupper(cat) != 'M' && toupper(cat) != 'F') {
                    printf("Categoria invalido\n"); 
                }
            } while (toupper(cat) != 'I' && toupper(cat) != 'M' && toupper(cat) != 'F');

            switch (toupper(cat)) {
                case 'M':
                    totalM += qtd;
                    break;
                case 'F':
                    totalF += qtd;
                    break;
                case 'I': 
                    totalI += qtd;
                    break;
            } 
        }
    } while (qtd > 0);
    total = totalF + totalM + totalI;
    printf("%.2f%% feminino\n%.2f%% masculino\n%.2f%% infantil", ((totalF * 100)/total), ((totalM * 100)/total), ((totalI * 100)/total));
}