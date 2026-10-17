//
// Created by vilic on 02/10/2026.
// Écrivez un programme qui demande à l’utilisateur de saisir une des 26 lettres de l’alphabet que le programme
// stockera ensuite dans une variable de type « char » nommée « lettre ». Attention, il faut placer l’instruction
// « fflush(stdin) ; »
// 1
// avant l’instruction de saisie « scanf(" %c",&lettre) ; » et ce afin de vider la "mémoire
// tempon" (buffer en anglais). Le programme doit indiquer à l’utilisateur s’il a entré une lettre minuscule ou une
// lettre majuscule ou éventuellement un caractère autre qu’une lettre. Pour ce faire, le programme utilisera le
// code ASCII du caractère saisi par l’utilisateur. Pour rappel, le code ASCII de la lettre « a » vaut 97, le code
// ASCII de la lettre « b » vaut 98, …, le code ASCII de la lettre « z » vaut 122, le code ASCII de la lettre « A »
// vaut 65, le code ASCII de la lettre « B » vaut 66, …, le code ASCII de la lettre « Z » vaut 90. D’autre part,
// l’instruction « a = (int) lettre ;» permet de stocker dans la variable de type « int » nommée « a » la valeur du
// code ASCII du caractère stocké dans la variable de type « char » nommée « lettre ».

#include <stdio.h>
#include <stdlib.h>

int main() {
    char lettre;

    printf("Introduisez une lettre de l'alphabet: \n");
    fflush(stdin);
    scanf("%c", &lettre);

    if (lettre >= 'a' && lettre <= 'z') {
        printf("le charactere %c est une minsucule \n", lettre);
    }
    else if (lettre >= 'A' && lettre <= 'Z') {
        printf("le charactere %c est une majuscule \n", lettre);
    }
    else {
        printf("le charactere %c est un charactere autre \n", lettre);
    }

    system("pause");
    return 0;
}
