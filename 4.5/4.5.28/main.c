 // Lire un nombre entier et déterminer s'il est premier (utiliser une boucle "do...while")

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, dividers;

    printf("Veuillez entrer un nombre entier pour savoir si il est premier: \n");
    scanf("%d", &number);
    int divider = number;

    do{
        if (number % divider == 0) {
            dividers++;
        }
        divider--;
    }while (divider > 0) ;

    if (dividers == 2) {
        printf("le nombre introduit (%d) est un nombre premier! \n", number);
    }
    else {
        printf("le nombre introduit (%d) n'est pas un nombre premier! \n", number);
    }

    system("pause");
    return 0;
}