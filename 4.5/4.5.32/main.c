//  Ecrire un programme affichant les n (n est un nombre entier > 1 introduit par l’utilisateur) premiers nombres
// premiers.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,count = 0;
    int number = 2;

    printf("Veuillez entrer un nombre entier n au dessus de 1 pour connaitre les n premiers nombres premiers: \n");
    scanf("%d", &n);
    printf("\nLes %d premiers nombres premiers sont :\n", n);

    while (count < n) {
        int dividers = 0;

        for (int divider = 1; divider <= number; divider++) {
            if (number % divider == 0) dividers++;
        }

        if (dividers == 2) {
            printf("%d ", number);
            count++;
        }
        number++;
    }

    printf("\n");
    system("pause");
    return 0;
}