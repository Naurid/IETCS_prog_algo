//
// Created by vilic on 21/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer le volume (en m3) ainsi que la hauteur ( en m)
// d’une cuve cylindrique. Le programme doit calculer et afficher la valeur (en m) du diamètre de la cuve.
// Pour rappel, le volume d’une cuve vaut :
//  hauteur . ((3.1416 * diametre^2)/4)
// Par exemple si on entre 50 m³ comme valeur de volume et 2 m comme valeur de hauteur, le programme doit
// afficher 5.6 m comme valeur de diamètre


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float volume, height;

    printf("Veuillez entrer le volume du cylindre en m3:\n");
    scanf("%f",&volume);

    printf("Veuillez entrer la hauteur du cylindre en m:\n");
    scanf("%f",&height);

    float diameter = sqrt(((volume/height)*4)/3.1416);

    printf("le diametre du cylindre est %.2f\n", diameter);
    system("pause");
    return 0;
}
