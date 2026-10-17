//
// Created by vilic on 02/10/2026.
// Lisez quatre nombres entiers et affichez le plus petit ainsi que le plus grand.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, min, max;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    printf("Introduis le troisieme chiffre: \n");
    scanf("%d", &c);

    printf("Introduis le quatrieme chiffre: \n");
    scanf("%d", &d);

    if (a <= c && a <= b && a <= d) {
        min = a;
    }
    else if (b <= c && b <= a && b <= d) {
        min = b;
    }
    else if (c <= a && c <= b && c <= d) {
        min = c;
    }
    else {
        min = d;
    }

    if (a >= c && a >= b && a >= d) {
        max = a;
    }
    else if (b >= c && b >= a && b >= d) {
        max = b;
    }
    else if (c <= a && c <= b && c <= d) {
        max = c;
    }
    else {
        max = d;
    }

    printf("le plus grand est %d et le plus petit est %d \n", max, min);
    system("pause");
    return 0;
}
