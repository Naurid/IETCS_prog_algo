//
// Created by vilic on 18/09/2026.
//Ecrire un programme qui demande à l'utilisateur d'entrer, pour un trapèze,
//  - la longueur (en m) de la petite base,
//  - la longueur (en m) de la grande base
//  - la longueur (en m) de la hauteur.
// Le programme calcule et affiche ensuite la valeur de la surface du trapèze. Pour rappel, la surface du trapèze vaut ((B + b) * h)/2
// où b représente la valeur (en m) de la petite base, B représente la valeur (en m) de la grande base et h représente la valeur (en
// m) de la hauteur. Par exemple, si on entre 1,5 m pour B, 1 m pour b et 4 m pour h, le programme doit afficher 5 m² de surface.


#include <stdio.h>
#include <stdlib.h>

int main() {
    float b, B, h;
    printf("Veuillez entrer la longueur de la petite base en m:\n");
    scanf("%f",&b);

    printf("Veuillez entrer la longueur de la grande base en m:\n");
    scanf("%f",&B);

    printf("Veuillez entrer la longueur de la hauteur en m:\n");
    scanf("%f",&h);

    printf("voici la surface: %.2f m2\n", ((B + b) * h)/2);

    system("pause");
    return 0;
}
