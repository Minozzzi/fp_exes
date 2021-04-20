// Questão 3 (4 pontos) - Ler dois números positivos que representam os limites inferior e superior de um
// intervalo. Apresentar os números quadrados perfeitos que tenham como raiz quadrada os valores do intervalo.
// Um número é um quadrado perfeito se possui como raiz quadrada um valor inteiro. Mostrar a série Fibonacci até
// o número quadrado perfeito. Fazer a média dos números quadrados perfeitos. Contar a quantidade de raízes que
// são números primos. A função para obter a raiz quadrada é a sqrt() e faz parte da biblioteca math.h.

#include <stdio.h>

int main(void) {

    //inicializacao das variaveis e declaracao delas
    int limInf = 0, limSup = 0, contQuadradoPerfeito = 0, contDivs = 0, contPrimos = 0, a = 0, b = 1, auxFibo = 0;
    float auxQuadradoPerfeito = 0, somaQuadradoPerfeito = 0;

    //solicito valores para os limites iniciais e finais onde o inicial tem q ser maior que 0 e o final maior ou igual ao inicial
    //repetira o programa ate isso ser valido
    do {
        printf("Informe o valor inicial do intervalo positivo: ");
        scanf("%d", &limInf);
    } while (limInf <= 0);

    do {
        printf("Informe o valor final do intervalo positivo maior ou igual ao valor inicial: ");
        scanf("%d", &limSup);
    } while (limInf > limSup);
    
    //inicio o for para o intervalo solicitado
    for (limInf; limInf <= limSup; limInf++) {
        //valido se o numero da vez iniciando no limite inferior é quadrado perfeito
        auxQuadradoPerfeito = limInf * limInf;
        if (auxQuadradoPerfeito - (int)auxQuadradoPerfeito == 0) {
            //listo os quadrados perfeitos pos validacao e faço a soma deles numa variavel, conto tambem qnts vzs foram somados 
            printf("\n%d (raiz %d) ==>", limInf * limInf, limInf);
            somaQuadradoPerfeito += limInf;
            contQuadradoPerfeito++;
        }

        //utilizo o while para ir sempre da soma do fibo ate o quadrado perfeito
        while (b <= auxQuadradoPerfeito) {
            printf(" %d", b);
            auxFibo = a + b; 
            a = b; 
            b = auxFibo; 
        }

        //faço um pequeno for para verificar se o numero atual (limInf) vulgo a raiz é primo para poder contar a qtd de raizes primas
        for (int initPrimo = 2; initPrimo < limInf; initPrimo++) {
            //verifico seus divisores ignorando o 1 e ele mesmo, se somar um divisor ja sei q ele nao é primo
            if (limInf % initPrimo == 0) {
                contDivs++;
                break;
            }
        }

        //se o contDivs permaneceu em 0, significa q ele so tem 2 divisores (ele mesmo e o 1) ai posso somar na variavel contPrimos
        if (contDivs == 0) {
            contPrimos++;
        }

        //limpo as variaveis de fibonacci para poder fazer o calculo do proximo numero
        a = 0;
        b = 1;
        auxFibo = 0;
    }

    //Listo a media dos quadrados perfeitos com validacao em if ternario para a divisao n ser feita por 0
    printf("\n\nMedia dos quadrados perfeitos = %.2f", contQuadradoPerfeito > 0 ? somaQuadradoPerfeito/contQuadradoPerfeito : 0);
    //listo a quantidade de raizes primas
    printf("\nQuantidade de numeros que sao raizes primas: %d", contPrimos);
}