// Ecrire un programme qui demande à l'utilisateur d'entrer un nombre entier que le programme stocke dans une
// variable de type short1
// nommée "n". Si la valeur contenue dans "n" est négative, le programme s'arrête; sinon
// le programme affiche la factorielle de cette valeur puis demande à l'utilisateur de réintroduire une nouvelle
// valeur entière (qu'il stocke à nouveau dans "n") et recommence le processus jusqu'au moment où l'utilisateur
// introduit une valeur entière négative qui a pour effet d'arrêter le programme.

#include <stdio.h>
#include <stdlib.h>

int main() {
    short n;

    printf("Veuillez entrer un chiffre afin d'en recevoir la factorielle: \n");
    scanf("%d", &n);

    while (n >= 0) {

        int i = n;
        int current = n;
        while (i > 1) {
            printf("%d * %d : %d \n", current, i - 1, current * (i - 1));
            current = current * (i-1);
            i--;
        }
        printf("Factorielle: %d \n", current);
        system("pause");

        system("cls");
        printf("Veuillez entrer un chiffre afin d'en recevoir la factorielle: \n");
        scanf("%d", &n);
    }

    system("pause");

    system("cls");
    printf("Vous avez introduis un chiffre negatif. Bye bye! \n");

    system("pause");
    return 0;
}