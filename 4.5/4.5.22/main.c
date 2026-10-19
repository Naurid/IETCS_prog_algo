// A l'aide d'une boucle "while" et en n'utilisant que 3 variables entières au maximum,
// la factorielle d'un
// nombre entier donné par l'utilisateur.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    printf("Veuillez entrer un chiffre afin d'en recevoir la factorielle: \n");
    scanf("%d", &i);
    int current = i;

    while (i > 1) {
        //printf("%d * %d : %d \n", current, i - 1, current * (i - 1));
        current = current * (i-1);
        i--;
    }

    system("pause");
    system("cls");
    printf("Factorielle: %d \n", current);
    system("pause");
    return 0;
}