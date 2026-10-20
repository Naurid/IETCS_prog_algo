 // Lire un nombre entier et déterminer tous ses diviseurs (utiliser une boucle "for").

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Veuillez entrer un nombre entier pour connaitre ses diviseurs: \n");
    scanf("%d", &number);


    for (int divider = number; divider > 0;  divider--){
        if (number % divider == 0) {
            printf("%d est un diviseur de  %d \n", divider, number);
        }
    }

    system("pause");
    return 0;
}