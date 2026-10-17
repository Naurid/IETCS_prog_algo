//
// Created by vilic on 02/10/2026.
// Lisez quatre nombres entiers et affichez les deux plus grands. Envisagez tous les cas de figure.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, max1, max2;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    printf("Introduis le troisieme chiffre: \n");
    scanf("%d", &c);

    printf("Introduis le quatrieme chiffre: \n");
    scanf("%d", &d);

    if (a >= c && a >= b && a >= d) {
        max1 = a;
        if (b >= c && b >= d) {
            max2 = b;
        }
        else if (c >= b && c >= d) {
            max2 = c;
        }
        else {
            max2 = d;
        }
    }
    else if (b >= c && b >= a && b >= d) {
        max1 = b;
        if (a >= c && a >= d) {
            max2 = a;
        }
        else if (c >= a && c >= d) {
            max2 = c;
        }
        else {
            max2 = d;
        }
    }
    else if (c >= a && c >= b && c >= d) {
        max1 = c;
        if (b >= a && b >= d) {
            max2 = b;
        }
        else if (a >= b && a >= d) {
            max2 = a;
        }
        else {
            max2 = d;
        }

    }
    else {
        max1 = d;
        if (a >= b && a >= c) {
            max2 = a;
        }
        else if (b >= a && b >= c) {
            max2 = b;
        }
        else {
            max2 = c;
        }
    }

    printf("les deux plus grands chiffres sont %d et %d \n", max1, max2);
    system("pause");
    return 0;
}
