//
// Created by vilic on 18/09/2026.
// Lisez deux nombres, A et B, et calculez un nombre C de telle façon que B soit la moyenne arithmétique de A et C.
// Par exemple, si on entre 3 pour A et 4.5 pour B, le programme doit afficher 6 pour C.


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a, b;

    printf("donnez un nombre entier: \n");
    scanf("%f", &a);

    printf("donnez un autre nombre entier: \n");
    scanf("%f", &b);

    float c = (b * 2) -  a;

    printf("C est le deuxieme nobre pour avoir B comme moyenne\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);
    printf("c = %.2f\n", c);

    system("pause");
    return 0;
}
