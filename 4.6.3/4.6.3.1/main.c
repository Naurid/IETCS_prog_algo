// Écrivez un programme qui stocke dans un tableau les 10 premiers multiples de 7. Le programme doit
// afficher ensuite ces 10 valeurs par ordre croissant c-à-d afficher les valeurs suivantes : 7, 14, 21, 28, 35, 42,
// 49, 56, 63, 70.

#include <stdio.h>
#include <stdlib.h>
#define TAILLE 10

int main() {
    int multiples [TAILLE];
    int multipleCount = 0;
    int currentNumber = 1;

    while (multipleCount < TAILLE) {
        if (currentNumber%7 == 0) {
            multiples[multipleCount] = currentNumber;
            multipleCount++;
        }
        currentNumber++;
    }

    for (int i = 0; i < TAILLE; i++) {
        printf("%d \n",multiples[i]);
    }

    system("pause");
    return 0;
}
