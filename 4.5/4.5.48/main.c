//Entrez N nombres formant un vecteur U.
//Calculez la norme de ce vecteur.
//Pour rappel, la norme d'un vecteur se calcule de la manière suivante :
//||U|| = sqrt( sum( u_i^2 ) )
//Si N vaut 3 et que U est le vecteur (2, 1, 1.5) alors la norme de U vaut : sqrt(2^2 + 1^2 + 1.5^2) = 2.69

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    double vec = 0;

    while (n <= 0) {
        system("cls");

        printf("Entrez la dimension N du vecteur : \n");
        scanf("%d", &n);

        if (n <= 0) {
            printf("Veuillez entrer un nombre positif!\n");
        }
    }

    for (int i = 0; i < n; i++) {

        double current = -1;

        while (current <= 0) {
            system("cls");

            printf("Entrez la valeur %d du vecteur: \n", i + 1);
            scanf("%lf", &current);

            if (current <= 0) {
                printf("Veuillez entrer un nombre positif!\n");
            }

            vec += (double)pow(current, 2);
        }
    }

    printf("la norme de U vaut %.2lf \n", sqrt(vec));
    system("pause");
    return 0;
}