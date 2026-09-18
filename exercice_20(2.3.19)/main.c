//
// Created by vilic on 18/09/2026.
// Écrivez un programme qui calcule le périmètre et l'aire d'un cercle dont le rayon est entré au clavier (surface = pi.rayon2
// et périmètre = 2. pi.rayon) . Par exemple, si on entre 1.25 m comme longueur du rayon, le programme doit afficher 7.85
// m comme valeur de circonférence et 4.91 m² comme valeur de surface.

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float rayon;
    const float PI = 3.1416;
    printf("Veuillez entrer le rayon du cercle en m:\n");
    scanf("%f",&rayon);

    printf("voici le perimetre: %.2f m\n", 2 * PI * rayon );
    printf("voici la surface: %.2f metres carre\n", PI * pow(rayon,2));

    system("pause");
    return 0;
}