//
// Created by vilic on 18/09/2026.
//Ecrire un programme qui demande à l'utilisateur d'introduire son âge (nombre entier).
//Le programme calcule et affiche ensuite l'âge de l'utilisateur dans 10, 15 et 25 ans.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int age;
    printf("Veuillez introduire votre age\n");
    scanf("%d", &age);

    printf("Votre age dans 10 ans: %d\n"
           "Votre age dans 15 ans: %d\n"
           "Votre age dans 25 ans: %d\n", age+10, age+15, age+25);

    system("pause");
    return 0;
}
