// Afficher tous les nombres (compris entre 9 et 121) qui sont à la fois multiples de 6 et de 8 (utiliser une boucle
// "do...while").

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number = 9;

     do {
        if (number%6 == 0 && number%8 == 0) printf("%d \n", number);

        number++;
     }while (number <= 121);

    system("pause");
    return 0;
}
