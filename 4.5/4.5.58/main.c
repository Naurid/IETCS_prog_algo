// Rédigez un algorithme qui réalise le jeu suivant :
//  à tour de rôle, l'ordinateur et le joueur choisissent un nombre qui ne peut prendre que 3 valeurs :
// 0, 1 ou 2;
//  si la différence entre les nombres choisis vaut :
//  2, le joueur qui a proposé le plus grand nombre gagne un point ;
//  1, le joueur qui a proposé le plus petit nombre gagne un point ;
//  0, aucun point n'est marqué.
//  le jeu se termine quand un des deux joueurs (l'ordinateur ou le joueur humain) totalise 10 points
// ou quand l'être humain introduit un nombre négatif qui indique sa volonté d'arrêter de jouer.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int computer = 0;
    int guest = 0;
    int guestScore = 0;
    int computerScore = 0;
    srand(time(NULL));


    while (guest != -1 && guestScore < 10 && computerScore < 10) {
        computer = rand() % 3;
        printf("Scores:\nOrdinateur: %d | Joueur: %d\n",computerScore,guestScore);
        printf("Entrez un chiffre entre 0 et 2 compris: \n");
        scanf("%d", &guest);

        int difference = guest - computer;
        if (difference < 0) difference = -difference;

        switch (difference) {
            case 2:
                if (computer > guest) computerScore++;
                else guestScore++;
                break;
            case 1:
                if (computer < guestScore) computerScore++;
                else guestScore++;
                break;
        }

        system("cls");
    }

    system("pause");
    return 0;
}
