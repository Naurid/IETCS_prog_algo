//
// Created by vilic on 19/09/2026.
// Connaissant les coordonnées de deux points du plan, écrivez un programme calculant le coefficient angulaire
// de la droite passant par ces deux points. Pour rappel, l’équation d'une droite passant par deux points de
// coordonnées (x1,y1) et (x2,y2) est donnée par la formule suivante :
// y-y1 = ((y2-y1)/(x2-x1))*(x-x1)
// ou (y2-y1)/(x2-x1) est la valeur du coefficient angulaire de la droite.
// L'utilisateur est invité à introduire les valeurs de x1, y1, x2 et y2 .
// Le programme calcule et affiche ensuite la valeur du coefficient angulaire de la droite.
// Testez le programme avec les valeurs 4, 1, 6 et 2 pour respectivement x1, y1, x2 et y2 . Le programme
// devrait afficher la valeur
// (2-1)/(6-4)=0.5


#include <stdio.h>
#include <stdlib.h>

int main() {
    float x1, y1, x2, y2;
    printf("Veuillez entrer x1:\n");
    scanf("%f",&x1);

    printf("Veuillez entrer y1:\n");
    scanf("%f",&y1);

    printf("Veuillez entrer x2:\n");
    scanf("%f",&x2);

    printf("Veuillez entrer y2:\n");
    scanf("%f",&y2);

    float angular_coeff = (y2-y1)/(x2-x1);
    printf("cos(a + b) = %.9f\n", angular_coeff);

    system("pause");
    return 0;
}
