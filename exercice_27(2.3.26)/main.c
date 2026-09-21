//
// Created by vilic on 21/09/2026.
//Ecrire un programme calculant la longueur (en mètre) de l’hypoténuse c d’un triangle rectangle à partir de la
// connaissance de la longueur (en mètre) des deux autres côtés a et b du triangle. Pour rappel, dans un triangle
// rectangle, le carré de l’hypoténuse est égal à la somme des carrés des deux autres côtés
// c’est à dire c2 = a2 + b2.
// Tester la validité de votre programme avec les valeurs respectives suivantes pour a et b : 4 mètres et 3
// mètres. Le programme doit afficher dans ce cas 5 mètres comme valeur de l’hypoténuse.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float a, b;

    printf("Bienvenue dans le calculdel'hypothenuse-inator\n");
    printf("Veuillez entrer a:\n");
    scanf("%f",&a);

    printf("Veuillez entrer la hauteur du cylindre en m:\n");
    scanf("%f",&b);

    float c = sqrt(pow(a, 2) + pow(b, 2));

    printf("la longueur de l'hypothenuse est %.2f\n", c);
    system("pause");
    return 0;
}
