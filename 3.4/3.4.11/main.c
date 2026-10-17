//
// Created by vilic on 02/10/2026.
// Écrivez un programme qui demande à l’utilisateur de saisir une des 26 lettres de l’alphabet. Si l’utilisateur
// introduit autre chose qu’une des 26 lettres de l’alphabet, un message d’erreur doit apparâitre. Si la lettre est
// saisie en minuscule (majuscule), le programme devra afficher cette lettre en majuscule (minuscule).

#include <stdio.h>

int main () {
    char lettre;

    printf("Introduisez une lettre de l'alphabet: \n");
    scanf("%c", &lettre);

    if (lettre >= 'a' && lettre <= 'z') {
        printf("le charactere %c est une minuscule \n", lettre - 32);
    }
    else if (lettre >= 'A' && lettre <= 'Z') {
        printf("le charactere %c est une majuscule \n", lettre + 32);
    }
    else {
        printf("le charactere %c est un charactere autre \n", lettre);
    }
}
