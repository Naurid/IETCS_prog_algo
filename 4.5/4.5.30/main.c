// Lire un nombre entier et déterminer tous ses diviseurs (utiliser une boucle "do...while")

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, dividers;

    printf("Veuillez entrer un nombre entier pour connaitre ses diviseurs: \n");
    scanf("%d", &number);
    int divider = number;

     do{
         if (number % divider == 0) {
             printf("%d est un diviseur de  %d \n", divider, number);
         }
         divider--;
    }while (divider > 0);

    system("pause");
    return 0;
}