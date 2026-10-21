// Écrivez un programme calculant le maximum et le minimum d'une série de valeurs terminée par zéro.

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int min = INT_MAX;
    int max = INT_MIN;
    int current = 1;
    int i = 0;

    while (current != 0) {
        printf("Entrez une serie de valeurs entieres (entrez 0 pour terminer) :\n");

        scanf("%d", &current);
        if (current != 0) {
            if (current < min) min = current;
            if (current > max) max = current;
            i++;
        }
    }

    if (i == 0) {
        printf("Vous n'avez introduis aucun chiffre \n");
    } else {
        printf("Le max est %d et le min est %d \n", max, min);
    }

    system("pause");
    return 0;
}
