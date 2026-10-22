// L'ordinateur « choisit » un nombre entier compris entre 0 et 100. Un joueur essaie de le deviner. Lors de
// chaque essai, l'ordinateur affiche la « fourchette » dans laquelle se trouve le nombre qu'il a choisi.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int current = 0;
    int guess = -1;
    char quit = 'n';
    srand(time(NULL));


    while (quit == 'n') {
        current = rand()%101;
        while (guess != current) {
            printf("Devinez le chiffre entre 0 et 100 compris: \n");
            scanf("%d", &guess);

            system("cls");

            if (guess < current) {
                printf("C'est plus que %d!\n", guess);
            }
            else if (guess > current) {
                printf("C'est moins que %d!\n", guess);
            }
        }
        printf("Bien joue! Si tu veux quitter,\nintroduis la lettre 'y',\nsinon tape la lettre 'n':\n");
        scanf(" %c", &quit);
    }

    system("pause");
    return 0;
}
