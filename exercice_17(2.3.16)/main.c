//
// Created by vilic on 18/09/2026.
// Affichez la moyenne géométrique de deux nombres positifs lus à partir d'une saisie-clavier. Pour rappel, la
// moyenne géométrique de 2 nombres positifs a et b vaut
// root(a.b)
// L'instruction "res = sqrt(n) ;" permet de stocker
// dans la variable "res" de type float ( ou double) la valeur de la racine carrée du nombre positif contenu dans la
// variable n et ce grâce à l'utilisation de la fonction "sqrt". Pour pouvoir utiliser la fonction "sqrt", il est
// nécessaire d'ajouter l'instruction " #include <math.h> " en début de programme. Testez votre programme
// avec respectivement les valeurs 9 pour a et 0.25 pour b qui donnent dans ce cas une moyenne géométrique de 1.5


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b;
    printf("Veuillez entrer un nombre:\n");
    scanf("%f",&a);

    printf("Veuillez entrer un autre nombre:\n");
    scanf("%f",&b);

    printf("voici la moyenne arythmetique: %.2f\n", sqrt(a*b));

    system("pause");
    return 0;
}
