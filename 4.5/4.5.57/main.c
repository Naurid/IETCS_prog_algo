//  Calculer la racine carrée de y grâce à la formule de Newton. Les calculs stopperont quand la valeur absolue
// de la différence entre les deux dernières valeurs calculées sera inférieure à 10-6
// . Pour rappel, la formule de
// Newton est :
// X0 = y/2
// Xi = (y/2xi-1) + (xi-1/2)

#include <stdio.h>
#include <stdlib.h>

int main() {
    float y;

    printf("Entrez la valeur de y : ");
    scanf("%f", &y);

    if (y < 0) {
        printf("Impossible de calculer la racine carrée d'un nombre négatif.\n");
        return 0;
    }

    if (y == 0) {
        printf("La racine carrée de 0 est 0\n");
        return 0;
    }

    float xPrevious = y / 2.0f;
    float xCurrent;
    float diff = 1.0f;

    while (diff > 1e-6f) {
        xCurrent = (y / (2.0f * xPrevious)) + (xPrevious / 2.0f);

        diff = xCurrent - xPrevious;

        if (diff < 0) {
            diff = -diff;
        }

        xPrevious = xCurrent;
    }

    printf("La racine carr%ce de %f est environ %.6f\n",130, y, xCurrent);

    system("pause");
    return 0;
}
