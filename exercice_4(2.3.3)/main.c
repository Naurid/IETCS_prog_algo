//
// Created by vilic on 18/09/2026.
//Affichez le produit de trois nombres lus à partir d'une saisie-clavier.
//Par exemple si on entre 2, 3 et 4, le programme doit afficher 24
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float firstNumber;
    float secondNumber;
    float thirdNumber;
    printf("Bienvenue dans le multiplicator 2.0. Ce programme sert juste a vous donner le produit de trois nombres\n");
    printf("introduisez le premier chiffre:");
    scanf("%f", &firstNumber);
    printf("introduisez le second chiffre:");
    scanf("%f", &secondNumber);
    printf("introduisez le troisieme chiffre:");
    scanf("%f", &thirdNumber);
    printf("le produit des trois chiffres est %f\n", firstNumber * secondNumber * thirdNumber);
    system("pause");
    return 0;
}

