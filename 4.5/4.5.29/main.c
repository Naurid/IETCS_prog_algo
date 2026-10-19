// Lire un nombre entier et déterminer tous ses diviseurs (utiliser une boucle "while")

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number;

    printf("Veuillez entrer un nombre entier pour connaitre ses diviseurs: \n");
    scanf("%d", &number);
    int divider = number;

    while (divider > 0) {
        if (number % divider == 0) {
            printf("%d est un diviseur de  %d \n", divider, number);
        }
        divider--;
    }

    system("pause");
    return 0;
}