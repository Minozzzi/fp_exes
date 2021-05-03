#include <stdio.h>

int primo(int value) {
    int contDivs = 0;

    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            contDivs++;
        }
    }

    return contDivs;
}