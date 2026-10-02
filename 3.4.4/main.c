//
// Created by vilic on 02/10/2026.
// Lisez trois nombres entiers et affichez le plus petit

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, min;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    printf("Introduis le troisieme chiffre: \n");
    scanf("%d", &c);

    if (a <= c && a <= b) {
        min = a;
    }
    else if (b <= c && b <= a) {
        min = b;
    }
    else {
        min = c;
    }

    printf("le plus petit chiffre est %d \n", min);
    system("pause");
    return 0;
}
