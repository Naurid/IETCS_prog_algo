// Déterminez tous les diviseurs de 60 et affichez les (utiliser une boucle "while")

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    while ( i <= 60 ) {
        if (60%i == 0) printf("%d \n", i);
        i++;
    }

    system("pause");
    return 0;
}