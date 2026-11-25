// Écrivez un programme qui stocke dans un tableau les 10 premiers multiples d’un nombre entier n introduit
// par l’utilisateur. Le programme doit afficher ensuite ces 10 valeurs par ordre décroissant.

#define TAILLE 10
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int main () {
    int multiplesCount = 0;
    int currentNumber = 1;
    int multiples [TAILLE];

    int n = getInt("Veuillez introduire un nombre entier: \n");
    printf("%d\n",n);

    while (multiplesCount < TAILLE) {
        if (currentNumber%n == 0) {
            multiples[multiplesCount] = currentNumber;
            multiplesCount++;
        }
        currentNumber++;
    }

    for (int i = TAILLE - 1; i >= 0; i--) {
        printf("%d \n",multiples[i]);
    }
    system("pause");
    return 0;
}
