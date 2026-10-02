//
// Created by vilic on 02/10/2026.
// Soient trois variables entières a, b et c et une variable entière nommée ordre. Placez dans ordre la valeur 1 si les
// valeurs de a, b et c prises dans cet ordre sont rangées par valeurs croissantes (a  b  c) et la valeur 0 dans le
// cas contraire. Vous chercherez deux solutions :
//  l'une employant une instruction if ,
//  l'autre n'employant pas d'instruction if

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, c, ordre;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &c);

    if (a <= b && b <= c) {
        ordre = 1;
    } else {
        ordre = 0;
    }

    // sans if
    // ordre = (a <= b) && (b <= c);

    system("pause");
    return 0;
}
