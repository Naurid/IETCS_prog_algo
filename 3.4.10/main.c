//
// Created by vilic on 02/10/2026.
// Écrivez un programme qui demande à l’utilisateur de saisir un nombre entier compris entre 97 et 122 . Si
// l’utilisateur introduit un nombre inférieur à 97 ou un nombre supérieur à 122, le programme affiche un message
// d’erreur. Si le nombre introduit par l’utilisateur se trouve bien dans l’intervalle [97 122] ,le programme affiche
// la lettre dont le code ASCII correspond à ce nombre

#include <stdio.h>
#include <stdlib.h>

int main() {
    int code;

    int c; // Variable pour vider le tampon

    do {
        printf("Introduis un chiffre entre 97 et 122 : \n");

        // Si scanf ne renvoie pas 1, cela signifie que la saisie n'est pas un entier valide
        if (scanf("%d", &code) != 1) {
            printf("Erreur : Ce n'est pas un charactere valide.\n");

            // CORRECTION : On vide le tampon manuellement jusqu'au saut de ligne
            while ((c = getchar()) != '\n' && c != EOF);

            // On force une valeur invalide pour rester dans la boucle
            code = 0;
        }
    } while (code < 97 || code > 122);

    printf("voici le charactere correspondant: %c \n", (char)code);
    system("pause");
    return 0;
}
