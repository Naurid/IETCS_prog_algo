//
// Created by vilic on 18/09/2026.
// Affichez la moyenne arithmétique de trois nombres lus à partir d'une saisie-clavier.
// Par exemple, si on entre 7, 8 et 6, le programme doit afficher 7

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float firstNumber, secondNumber, thirdNumber;
    printf("Bienvenue dans le moyennator. Ce programme sert juste a vous donner la moyenne de trois nombres\n");
    printf("introduisez le premier chiffre:");
    scanf("%f", &firstNumber);
    printf("introduisez le second chiffre:");
    scanf("%f", &secondNumber);
    printf("introduisez le troisieme chiffre:");
    scanf("%f", &thirdNumber);

    printf("La moyenne des trois nombres est %.2f\n", (firstNumber + secondNumber + thirdNumber)/3);

    system("pause");
    return 0;
}
