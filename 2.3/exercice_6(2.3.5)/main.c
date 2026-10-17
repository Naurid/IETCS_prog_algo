//
// Created by vilic on 18/09/2026.
//Affichez la moyenne arithmétique de deux nombres lus à partir d'une saisie-clavier.
//Par exemple, si on entre 7 et 6, le programme doit afficher 6.5


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    float firstNumber, secondNumber;
    printf("Bienvenue dans le moyennator. Ce programme sert juste a vous donner la moyenne de deux nombres\n");
    printf("introduisez le premier chiffre:");
    scanf("%f", &firstNumber);
    printf("introduisez le second chiffre:");
    scanf("%f", &secondNumber);

    printf("La moyenne des deux nombres est %.2f", (firstNumber + secondNumber)/2);

    system("pause");
    return 0;
}
