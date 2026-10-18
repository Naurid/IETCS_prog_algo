// Déterminez tous les diviseurs de 60 et affichez les (utiliser une boucle "do...while").

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 1;
    do{
        if (60%i == 0) printf("%d \n", i);
        i++;
    } while (i <= 60);

    system("pause");
    return 0;
}