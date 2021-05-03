#include <stdio.h>

int fatorialOneToEight() {
    for (int i = 1; i <= 8; i++) {
        int j = i, fat = 1;
       
        printf("\n%d! = ", i);
        while(j >= 1) {
            if (j == 1) {
                printf("%d = ", j);
            } else {
                printf("%d * ", j);
            }

            fat *= j;
            j--;
        }
        printf("%d", fat);
    }
}

int fatorialOneToTwelve() {
    for (int i = 1; i <= 12; i++) {
        int j = i, fat = 1;
       
        printf("\n%d! = ", i);
        while(j >= 1) {
            if (j == 1) {
                printf("%d = ", j);
            } else {
                printf("%d * ", j);
            }

            fat *= j;
            j--;
        }
        printf("%d", fat);
    }
}

int fatorialOf(int value) {
    int i = value, fat = 1;
    while (i >= 1) {
        if (i == 1) {
            printf("%d = ", i);
        } else {
            printf("%d * ", i);
        }

        fat *= i;
        i--;
    }
    printf("%d\n", fat);
}