
//
// Created by vilic on 03/10/2026.
//Écrivez un programme permettant à l'utilisateur d'entrer deux valeurs binaires d'un bit. Votre programme doit
// calculer un « OU exclusif » entre ces deux valeurs et afficher le résultat sous la forme binaire. Pour rappel, si A
// et B sont les deux entrées d’un OU exclusif, on a :

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a, b, resultat;

    printf("Entrez la valeur de A (0 ou 1) : ");
    scanf("%d", &a);
    printf("Entrez la valeur de B (0 ou 1) : ");
    scanf("%d", &b);

    if ((a != 0 && a != 1) || (b != 0 && b != 1)) {
        printf("Erreur : les valeurs doivent etre 0 ou 1.\n");
        return 1;
    }

    if (a == 0 && b == 0) {
        resultat = 0;
    }
    if (a == 1 && b == 0) {
        resultat = 1;
    }
    if (a == 0 && b == 1) {
        resultat = 1;
    }
    if (a == 1 && b == 1) {
        resultat = 0;
    }

    // if (a != b)
    //     resultat = 1;
    // if (a == b)
    //     resultat = 0;

    printf("A OU exclusif B = %d\n", resultat);

    system("pause");
    return 0;
}
