// Écrire un programme qui demande à l’utilisateur d’entrer 7 cotes (nombre entier compris entre 0 et 10) sur
// dix qu’il stockera dans un tableau. Le programme vérifiera que chaque cote saisie n’est pas < 0 ou > 10
// auquel cas l’utilisateur est invité à réintroduire une nouvelle valeur. Le programme devra ensuite afficher le
// nombre de cotes supérieures ou égales à 5.

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAILLE 7
int main() {
    int cotes [TAILLE];
    int above5;

    // PRENDRE LA COTE DES 7 PELOS
    for (int i = 0; i < TAILLE; i++) {
        cotes[i] = getInt("Donnez une cote sur 10 a l'eleve: ", 0, 10);
    }
    // CALCULER LA MOYENNE

    for (int i = 0; i < TAILLE; i++) {
        if (cotes[i] >= 5) above5++;
    }

    printf("%d notes au dessus de 5 \n", above5);
    system("pause");
    return 0;
}