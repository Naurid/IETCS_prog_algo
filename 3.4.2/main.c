//
// Created by vilic on 02/10/2026.
// Lisez trois nombres entiers a, b et c puis affichez les deux plus grands.
// Testez votre programme dans chaque cas suivant :
// a) a = 8, b = 5 et c = 4 (a>b>c)
// b) a = 8, b = 3 et c = 4 (a>c>b)
// c) a = 4, b = 5 et c = 2 (b>a>c)
// d) a = 1, b = 3 et c = 2 (b>c>a)
// e) a = 4, b = 3 et c = 8 (c>a>b)
// f) a = 1, b = 3 et c = 8 (c>b>a)
// g) a = 8, b = 8 et c = 4 (a = b>c)
// h) a = 8, b = 8 et c = 9 (a = b<c)
// i) a = 8, b = 4 et c = 8 (a = c>b)
// j) a = 8, b = 9 et c = 8 (a = c<b)
// k) a = 4, b = 8 et c = 8 (b = c>a)
// l) a = 9, b = 8 et c = 8 (b = c<a)
// m) a = 8, b = 8 et c = 8 (b = c=a)

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

    if (a <= c && a <= b) {
       max1 = b;
       max2 = c;
    }
    else if (b <= c && b <= a) {
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
