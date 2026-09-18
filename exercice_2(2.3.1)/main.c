#include <stdio.h>
#include <stdlib.h>
//
// Created by vilic on 18/09/2026.
//Affichez la somme de deux nombres lus à partir d'une saisie-clavier.
//Par exemple si on entre 4 et 3, le programme doit afficher 7.
//
int main() {
    float firstNumber;
    float secondNumber;
    printf("Bienvenue dans le somminator. Ce programme sert juste a vous donner la somme de deux nombres\n");
    printf("introduisez le premier chiffre:");
    scanf("%f", &firstNumber);
    printf("introduisez le second chiffre:");
    scanf("%f", &secondNumber);
    printf("la somme des deux chiffres est %f\n", firstNumber + secondNumber);
    system("pause");
    return 0;
}