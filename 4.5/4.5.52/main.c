// Ecrire un programme qui compte le nombre de couples « LE » d’une phrase terminée par un point. Le
// programme n'utilisera que des variables de type "char" ou de type "int". La phrase est introduite
// "caractère" par caractère" en ce sens que l'utilisateur appuie sur ENTER après chaque caractère de la
// phrase. Le programme détecte la fin de la phrase lorsque l'utilisateur a introduit le caractère « . » .

#include <stdio.h>
#include <stdlib.h>
#define POINT '.'

int main() {
    int numberOfLe = 0;
    int lPrecedent = 0;
    char current;

    while (current != POINT) {
        system("cls");

        printf("nombre de couples 'LE': %d \n", numberOfLe);
        printf("Entrez votre phrase caractere par caractere :\n");

        scanf(" %c", &current);
        if (current != POINT) {
            if (lPrecedent == 1 && current == 'e' || current == 'E') {
                numberOfLe++ ;
                lPrecedent = 0 ;
            }
            if (current == 'l' || current == 'L') lPrecedent = 1;
        }
    }

    if (numberOfLe == 0) {
        printf("Vous n'avez introduis aucun caractere \n");
    } else {
        printf("Le nombre de couples 'LE' est de %d \n", numberOfLe);
    }

    system("pause");
    return 0;
}