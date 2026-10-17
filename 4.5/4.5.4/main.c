// Afficher tous les multiples de 7 compris entre 7 et 70 inclus (utiliser une boucle "while")

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 7;

    while (number <= 70) {
        if (number%7 == 0) printf("%d \n", number);

        number++;
    }

    system("pause");
    return 0;
}
