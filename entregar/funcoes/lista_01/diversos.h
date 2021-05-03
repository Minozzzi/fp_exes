#include <stdio.h>
#include <ctype.h>

int multiply(int v1, int v2) {
    return v1 * v2;
}

float moneyConvert(float value, float cotacao, char tipo) {
    if (toupper(tipo) == 'D') {
        return value / cotacao;
    } else {
        return value * cotacao;
    }
}

float convertToInches(float value) {
    float anInche = 0.393701;

    return anInche * value;  
}

int quadrado(int value) {
    return value * value;
}