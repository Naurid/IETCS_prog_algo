// Écrivez un programme qui demande à l’utilisateur d’introduire les cotes (sur 30) obtenues lors de l’examen
// d’informatique par les 5 étudiants d’une même classe. Le programme doit vérifier, lors de chaque saisie, que
// la cote introduite par l’utilisateur est correcte (comprise entre 0 et 30). Si une cote introduite par l’utilisateur
// n’est pas correcte, le programme envoie à l’utilisateur un message d’erreur et le réinvite à introduire une
// nouvelle cote et ce jusqu’au moment où la cote saisie est correcte. Les 5 cotes seront stockées dans un
// tableau et le programme devra calculer puis afficher la moyenne (sur 100) de la classe des 5 étudiants.
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#define TAILLE 5
int main() {
    int cotes [TAILLE];
    float moyenne = 0;

    // PRENDRE LA COTE DES 5 PELOS
    for (int i = 0; i < TAILLE; i++) {
        cotes[i] = getInt("Donnez une cote sur 30 a l'eleve: ", 0, 30);
    }
    // CALCULER LA MOYENNE

    for (int i = 0; i < TAILLE; i++) {
        moyenne += cotes[i];
    }

    moyenne /= (float)TAILLE;
    // CALCULER SUR 100
    moyenne *= (100/30);
    printf("Moyenne: %.2f%% \n", moyenne);
    system("pause");
    return 0;
}