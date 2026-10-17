//
// Created by vilic on 18/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer la longueur (en m) du diamètre d'un cercle. Le programme
// calcule et affiche la valeur de la surface ainsi que celle de la circonférence du cercle. Pour rappel, la surface du cercle
// vaut pi.d^2/4 où d représente la valeur (en m) du diamètre du cercle et pi une constante valant 3.1416 . La longueur de la
// circonférence vaut quant à elle pi.d où d représente la valeur (en m) du diamètre du cercle et pi une constante valant
// 3.1416 . Par exemple, si on entre 2.5 m comme longueur du diamètre, le programme doit afficher 7.85 m comme valeur
// de circonférence et 4.91 m² comme valeur de surface.


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float diameter;
    const float PI = 3.1416;
    printf("Veuillez entrer le diametre du cercle en m:\n");
    scanf("%f",&diameter);

    printf("voici le perimetre: %.2f m\n", PI * diameter );
    printf("voici la surface: %.2f metres carre\n", (PI * pow(diameter,2)/ 4));

    system("pause");
    return 0;
}
