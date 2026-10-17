// Afficher tous les multiples de 7 compris entre 7 et 70 inclus (utiliser une boucle "for").

#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 7; i <= 70; i++) {
        if (i%7 == 0) printf("%d \n", i);
    }

    system("pause");
    return 0;
}