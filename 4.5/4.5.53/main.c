// Ecrire un programme qui compte le nombre de mots d'une phrase terminée par un point. Le programme
// n'utilisera que des variables de type "char" ou de type "int". La phrase est introduite "caractère" par
// caractère" en ce sens que l'utilisateur appuie sur ENTER après chaque caractère de la phrase. Le
// programme détecte la fin de la phrase lorsque l'utilisateur a introduit le caractère « . » .

#include <stdio.h>
#include <stdlib.h>
#define POINT '.'
#define ESPACE ' '

int main() {
    int numberOfWords = 0;
    char current;

    while (current != POINT) {
        system("cls");

        printf("nombre de mots: %d \n", numberOfWords);
        printf("Entrez votre phrase caractere par caractere (appuyez sur enter apres chaque caractere):\n");

        fflush(stdin);
        scanf("%c", &current);

        if (current == ESPACE || current == POINT) numberOfWords++;
    }

    system("cls");
    if (numberOfWords == 0) {
        printf("Vous n'avez introduis aucun caractere \n");
    } else {
        printf("Le nombre de mots est de %d \n", numberOfWords);
    }

    system("pause");
    return 0;
}