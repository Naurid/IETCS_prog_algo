//
// Created by vilic on 02/10/2026.
// Lisez trois nombres entiers a, b et c puis affichez les deux plus petits.
// Testez votre programme dans chacun des 13 cas évoqués dans l’exercice 2.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, max1, max2;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    printf("Introduis le troisieme chiffre: \n");
    scanf("%d", &c);

    if (a >= c && a >= b) {
        max1 = b;
        max2 = c;
    }
    else if (b >= c && b >= a) {
        max1 = a;
        max2 = c;
    }
    else {
        max1 = a;
        max2 = b;
    }

    printf("les deux plus grands chiffres sont %d et %d \n", max1, max2);
    system("pause");
    return 0;
}
