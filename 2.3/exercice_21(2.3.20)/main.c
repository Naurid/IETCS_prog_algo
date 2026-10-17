//
// Created by vilic on 18/09/2026.
//Écrivez un programme recevant de l'utilisateur les valeurs du sinus et du cosinus de deux angles (cos a, cos
// b, sin a, sin b). Le programme doit calculer cos (a+b), cos(a-b), sin(a+b), sin (a-b).
// Pour rappel, les formules d'addition et de soustraction des angles sont :
//  cos(a + b) = cosa cosb - sina sinb
//  cos(a - b) = cosa cosb + sina sinb
//  sin(a + b) = sina cosb + sinb cosa
//  sin(a - b) = sina cosb - sinb cosa
// Testez le programme avec les valeurs suivantes :
// sin a = 0.5 , cos a = 0.866025403 , sin b = 0.866025403 et cos b = 0.5
// Le programme devrait afficher les valeurs 0, 0.866025403, 1 et – 0.5 pour respectivement cos(a + b),
// cos(a - b), sin(a + b) et sin(a - b) .

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    float cosa, cosb, sina, sinb;
    printf("Veuillez entrer cos a:\n");
    scanf("%f",&cosa);

    printf("Veuillez entrer cos b:\n");
    scanf("%f",&cosb);

    printf("Veuillez entrer sin a:\n");
    scanf("%f",&sina);

    printf("Veuillez entrer sin b:\n");
    scanf("%f",&sinb);

    printf("cos(a + b) = %.9f\n", cosa * cosb - sina * sinb);
    printf("cos(a - b) = %.9f\n", cosa * cosb + sina * sinb);
    printf("sin(a + b) = %.9f\n", sina * cosb + sinb * cosa);
    printf("sin(a - b) = %.9f\n", sina * cosb - sinb * cosa);

    system("pause");
    return 0;
}