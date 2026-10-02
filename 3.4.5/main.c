//
// Created by vilic on 02/10/2026.
// Lisez trois nombres entiers et affichez le plus petit ainsi que le plus grand

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, min, max;

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

    if (a >= c && a >= b) {
        max = a;
    }
    else if (b >= c && b >= a) {
        max = b;
    }
    else {
        max = c;
    }

    printf("le plus grand est %d et le plus petit est %d \n", max, min);
    system("pause");
    return 0;
}
