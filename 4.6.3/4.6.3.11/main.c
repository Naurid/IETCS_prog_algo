// Écrire un programme qui demande à l’utilisateur d’introduire 10 nombres entiers. Le programme doit
// afficher ensuite le nombre de fois qu’un nombre entier introduit par l’utilisateur apparaît dans la séquence
// des 10 nombres entiers préalablement saisis par l’utilisateur.

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

#include "utils.h"

int main () {
    int numbers [10];
    int temp, sort,sortNumber;
    for (int i = 0; i < 10; i++) {
        numbers[i] = getInt("Veuillez entrer un nombre entier", INT_MIN, INT_MAX);
    }

    for (int i = 0; i<10; i++) {
        for (int j=0; j<10 - 1; j++) {
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
    int count, current = numbers[0];
    for (int i = 0; i<10; i++) {
        if (numbers[i] == current) count++;
        else {
            printf("%d | %d \n", current, count);
            current = numbers[i];
            count = 1;
        }
    }

    system("pause");
    return 0;
}
