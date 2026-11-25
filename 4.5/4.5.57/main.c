//  Calculer la racine carrée de y grâce à la formule de Newton. Les calculs stopperont quand la valeur absolue
// de la différence entre les deux dernières valeurs calculées sera inférieure à 10-6
// Pour rappel, la formule de Newton est :
// X0 = y/2
// X2 = (y/2x1) + (x1/2)

#include <stdio.h>
#include <stdlib.h>
#define EPSILON 1e-6 //precision

int main() {
    float y, x2, diff;
    float x1 = y / 2.0f;

    printf("Entrez la valeur de y : ");
    scanf("%f", &y);

    if (y < 0) {
        printf("Impossible de calculer la racine carr%ce d'un nombre n%cgatif.\n", 130, 130);
        return 0;
    }

    if (y == 0) {
        printf("La racine carr%ce de 0 est 0\n", 130);
        return 0;
    }

    do{
        x2 = (y / (2.0f * x1)) + (x1 / 2.0f);

        diff = x2 - x1;

        if (diff < 0) {
            diff = -diff;
        }

        x1 = x2;

    } while (diff > EPSILON);

    printf("La racine carr%ce de %f est environ %.6f\n",130, y, x2);

    system("pause");
    return 0;
}
