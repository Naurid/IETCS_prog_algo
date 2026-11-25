// Écrire un programme qui demande à l’utilisateur d’introduire 15 nombres entiers. Le programme doit
// afficher ensuite ces 15 nombres entiers par ordre croissant.

#define TAILLE 15
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

int main () {
    int numbers[TAILLE];
    int temp, sort = 0, sortNumber = 0;

    for (int i=0; i<TAILLE; i++) {
        system("cls");
        printf("nombre %d:\n", i+1);
        numbers[i] = getInt("Veuillez entrer un nombre entier: \n", INT_MIN, INT_MAX);
    }

    for (int i = 0; i<TAILLE; i++) {
        for (int j=0; j<TAILLE - 1; j++) {
            if (numbers[j] > numbers[j+1]) {
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;
                sort++;
            }
        }
        if (sort == 0) break;
        sort = 0;
        sortNumber++;
    }

    for (int i=0; i<TAILLE; i++) {
        printf("%d | ", numbers[i]);
    }

    printf("\n sorted %d times\n", sortNumber);
    system("pause");
    return 0;
}
