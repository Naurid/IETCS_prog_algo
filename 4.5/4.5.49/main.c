// Écrivez un programme calculant la moyenne d'une série de valeurs terminée par -1.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 0;
    int current = 0;
    double mean = 0;

    while (current != -1) {
        printf("Entrez une serie de valeurs (entrez -1 pour terminer) :\n");

        scanf("%d", &current);
        if (current != -1) {
            mean += current;
            i++;
        }
    }

    if (i > 0) {
        printf("La moyenne des %d valeurs est de : %.2f\n", i, mean / i);
    } else {
        printf("Aucune valeur n'a ete saisie.\n");
    }
    system("pause");
    return 0;
}
