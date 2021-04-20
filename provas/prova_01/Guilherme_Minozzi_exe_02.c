// Questão 2 (3 pontos) - Fazer um programa que receba a quantidade de caracteres (tamanho) do seu primeiro
// nome e use essa informação para a estrutura de repetição que lerá o nome caractere a caractere verificando a
// quantidade de divisores que cada caractere possui (verificar pelo código correspondente da tabela ASCII,
// disponível em https://www.ricardoarrigoni.com/tabela-ascii-completa/).
// Exemplo: Quantidade de caracteres do nome Ana: 3
// Sabendo o tamanho do nome, usar uma estrutura de repetição para ler os caracteres do nome Ana:
// A – 65 na tabela ASCII tem 4 divisores
// n – 110 na tabela ASCII tem 8 divisores
// a – 97 na tabela ASCII tem 2 divisores

//inicializo com esta bibliteoca sem a stdio.h padrao pois esta é uma exentsao (ext) da propria stdio.h
//porem ela suporta o __fpurge() que a stdio.h n suporta no linux
#include <stdio_ext.h>

int main(void) {
    //declaro a variavel de repeticao do programa
    char opt = ' ';
    //com a estrutura faça e dps verifique se esta correto valido se o usuario quer repetir o programa, otima para validações de entradas
    do {
        //declaro as variaveis inicializando elas
        char letra = ' ';
        int tamanhoNome = 0, i = 1, num = 0, inicioDivs = 1, contDivs = 0;

        //qtd de letras do nome e dps limpo o buffer do teclado com sistema linux e valido para que a quantidade seja maior que 0
        do {
            printf("Informe a quantidade de letras do seu primeiro nome: ");
            scanf("%d", &tamanhoNome);
            __fpurge(stdin);

        } while (tamanhoNome <= 0);

        //inicializo o for que inicia com a variavel i e vai até o numero final representando a quantidade de letras do nome da essoa
        for (i; i <= tamanhoNome; i++) {
            //peço a primeira letra do nome inicialmente e dps conforme o for vai avançando peço sequencialmente a 2, 3, 4 letra do nome ate 
            //o total de letras do nome da pessoa limpando o buffer do teclado
            printf("Informe o %d caractere do seu primeiro nome: ", i);
            scanf("%c", &letra);
            __fpurge(stdin);

            //gravo a conversao da letra para inteiro em uma variavel para verificar os divisores desse valor
            num = (int)letra;

            //realizo outro for iniciando em 1 com a variavel inicioDivs e vamos ate o numero convertido da letra para verificar 
            //a quantidade de divisores desse numero
            for (inicioDivs; inicioDivs <= num; inicioDivs++) {
                if (num % inicioDivs == 0) {
                    contDivs++;
                } 
            }
            //listo na tela o valor do numero convertido e seus divisores
            printf("%d na tabela ASCII tem %d divisores\n", num, contDivs);
            //limpo o valor da variavel contDivs para nao somar com o valor anterior dela e a inicioDivs para somar os divisores corretamente
            contDivs = 0;
            inicioDivs = 1;
        }

        //depois de mostrado os calculos necessarios do programa, solicito uma resposta ao usuario para se ele quer repetir o programa ou nao
        //sempre limpando o buffer do teclado 
        printf("\n\nDeseja repetir ? ");
        scanf("%c", &opt);
        __fpurge(stdin);
    } while (opt == 'S' || opt == 's');
}