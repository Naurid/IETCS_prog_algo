// Ecrire un programme qui demande à l'utilisateur d'entrer son âge (nombre entier). L'utilisateur a ensuite la
// possibilité de confirmer sa saisie ou de l'annuler (auquel cas il est invité à réintroduire une nouvelle valeur
// pour son âge). Le programme affiche ensuite l'âge de la personne dans 10 ans.
// Vous utiliserez uniquement deux variables : l'une de type "short" et l'autre de type "char".

#include <stdio.h>
#include <stdlib.h>

int main () {
    short age;
    char answer;

    while (answer != 'y') {
        system("cls");
        printf("Enter your age: ");
        scanf("%d", &age);

        printf("Proceed with this age? (%d) \nType 'y' for yes and 'n' for no \n", age);
        scanf(" %c", &answer);
    }

    printf("You will be %d years old in 10 years \n", age + 10);
    system ("pause");
    return 0;
}