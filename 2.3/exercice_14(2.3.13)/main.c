//
// Created by vilic on 18/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer la longueur (en m) d’un côté d'un carré. Le programme calcule et
// affiche la valeur de la surface ainsi que celle du périmètre du carré. Pour rappel, la surface du carré se calcule en multipliant la
// valeur du côté du carré par elle même (côté x côté) tandis que le périmètre du carré vaut 4 fois la longueur du côté. Par
// exemple, si on entre 1.5 m comme longueur d’un côté, le programme doit afficher 6 m comme valeur du périmètre et 2.25 m²
// comme valeur de la surface


#include <stdio.h>
#include <stdlib.h>

int main() {
    float length;
    printf("Veuillez entrer la longueur du carre en m:\n");
    scanf("%f",&length);

    printf("voici le perimetre: %.2f\n", length * 4);
    printf("voici la surface: %.2f\n", length * length);

    system("pause");
    return 0;
}
