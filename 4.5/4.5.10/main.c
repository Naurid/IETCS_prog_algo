// Déterminez tous les diviseurs de 60 et affichez les (utiliser une boucle "for")

#include <stdio.h>
#include <stdlib.h>

int main() {

    for (int i = 1; i <= 60; i++) {
        if (60%i == 0) printf("%d \n", i);
    }

    system("pause");
    return 0;
}
