//
// Created by vilic on 18/09/2026.
//Écrivez un programme lisant la longueur (en mètres) des trois côtés a, b et c d'un triangle et calculant la surface du
// même triangle au moyen de la formule suivante :
// s=sqrt(p*(p-a)*(p-b)*(p-c))
// où p est le demi-périmètre du triangle c’est-à-dire p = (a+b+c)/2.
// Testez votre programme avec les valeurs suivantes :
// Si a = 3 m, b = 2 m et c = 1 m alors la surface vaut 0 m².
// Si a = 3 m, b = 4 m et c = 5 m alors la surface vaut 6 m²

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("Bienvenue dans le calculateur de surface d'un  triangle avec les cotes a, b et c:\n");
    printf("Veuillez entrer la valeur de a:\n");
    scanf("%f",&a);

    printf("Veuillez entrer la valeur de b:\n");
    scanf("%f",&b);

    printf("Veuillez entrer la valeur de c:\n");
    scanf("%f",&c);

    float p = (a+b+c)/2;
    printf("voici la valeur de la surface: %.2f\n", sqrt(p*(p-a)*(p-b)*(p-c)));

    system("pause");
    return 0;
}