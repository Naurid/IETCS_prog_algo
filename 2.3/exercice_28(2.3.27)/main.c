//
// Created by vilic on 21/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer la distance D (en kilomètres) parcourue par un train
// ainsi que le temps T ( en minutes) mis par le train pour parcourir cette distance D. Le programme doit
// ensuite calculer et afficher la valeur (en km/h) de la vitesse V du train. Pour rappel :
// V (km/min) = D/T ou D*60/T
// Par exemple si la distance D est de 50 km et que le temps mis par le train pour parcourir cette distance est de 30 min
// alors le programme doit afficher une vitesse de 100 km/h


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float distance, time;

    printf("Bienvenue dans le vitessedutrain-inator\n");
    printf("Veuillez entrer la distance parcourue en km:\n");
    scanf("%f",&distance);

    printf("Veuillez entrer le temps mis en minutes:\n");
    scanf("%f",&time);

    float speed = distance * 60 / time;

    printf("la vitesse du train est %.2fkm/h\n", speed);
    system("pause");
    return 0;
}
