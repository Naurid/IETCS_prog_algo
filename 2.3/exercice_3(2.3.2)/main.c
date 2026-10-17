//
// Created by vilic on 18/09/2026.
//Affichez le produit de deux nombres lus à partir d'une saisie-clavier.
//Par exemple si on entre 4 et 3, le programme doit afficher 12
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float firstNumber;
    float secondNumber;
    printf("Bienvenue dans le multiplicator. Ce programme sert juste a vous donner le produit de deux nombres\n");
    printf("introduisez le premier chiffre:");
    scanf("%f", &firstNumber);
    printf("introduisez le second chiffre:");
    scanf("%f", &secondNumber);
    printf("la somme des deux chiffres est %.3f\n", firstNumber * secondNumber);
    system("pause");
    return 0;
}

