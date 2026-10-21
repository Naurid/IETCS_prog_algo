// Comptez le nombre de nombres entiers pairs positifs dans une séquence terminée par –1.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int pair = 0;
    int i = 0;
    int current = 1;

    while (current != -1) {
        system("cls");

        printf("Entrez une serie de valeurs entieres (entrez -1 pour terminer) :\n");

        scanf("%d", &current);
        if (current != -1) {
            if (current%2 == 0 && current >= 0) pair++;

            i++;
        }
    }

    if (i == 0) {
        printf("Vous n'avez introduis aucun chiffre \n");
    } else {
        printf("Le nombre de chiffres pairs positifs introduis est de %d \n", pair);
    }

    system("pause");
    return 0;
}