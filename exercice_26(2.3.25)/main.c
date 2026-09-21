//
// Created by vilic on 21/09/2026.
// A partir de l’équation « 2y + 4x = 8 », on vous demande d’écrire un programme qui demande à
// l'utilisateur d'entrer une valeur pour « x » après avoir effacé l'écran (Dans l’environnement WINDOWS : :
// en début de programme saisissez la ligne « #include <stdlib.h> » puis insérer dans le bloc main
// l'instruction « system("cls"); » à l’endroit désiré). Le programme doit calculer et afficher ensuite la valeur
// de « y » .Tester le bon fonctionnement de votre programme avec les valeurs suivantes pour x :
// 2, 4, et 1
// pour lesquelles vous devez obtenir pour « y » respectivement les valeurs
// 0, -4, et 2.

//(8-4x)/2

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float x;

    printf("Bienvenue dans le resolutiond'equationduseconddegre-inator\n");
    system("cls");
    printf("Veuillez entrer la valeur de x:\n");
    scanf("%f",&x);

    float y = (8-(4*x))/2;
    printf("la valeur de y est %.2f\n", y);
    system("pause");
    return 0;
}
