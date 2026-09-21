//
// Created by vilic on 21/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer la valeur (en m) du côté d’un cube après avoir
// effacé l'écran . Le programme doit afficher ensuite le volume (en m3
// ) du cube. Par exemple, si on entre 3 m
// comme longueur de côté du cube, le programme doit afficher 27 m³ comme valeur de surface.


#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float side;

    system("cls");
    printf("Veuillez entrer la longueur du cote du cube:\n");
    scanf("%f",&side);

    // ici on aurait pu faire pow(side,3) mais flemme
    printf("le volume du cube est %.2f\n", side*side*side);
    system("pause");
    return 0;
}