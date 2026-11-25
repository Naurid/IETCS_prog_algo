// Écrivez un programme qui demande à l’utilisateur d’introduire les cotes (sur 20) obtenues lors de l’examen
// d’informatique par les 8 étudiants d’une même classe. Dans un premier temps, le programme doit stocker ces
// 8 cotes dans un tableau puis doit calculer et afficher la moyenne (sur 20) de la classe des 8 étudiants.

#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAILLE 8

int main () {
    int notes [TAILLE];
    char message[100];
    float moyenne = 0;

    for (int i = 0; i < TAILLE; i++) {
        snprintf(message, 100, "Veuillez entrer une cote sur 20 pour l'eleve n%d :\n", i+1);
        while (notes[i] > 20 || notes[i] < 0) {
            system("cls");
            notes[i] = getInt(message);
        }
    }

    for (int i = 0; i < TAILLE; i++) {
        moyenne += notes[i];
    }

    moyenne /= (float)TAILLE;

    printf("%.2f \n", moyenne);
    system("pause");
    return 0;
}