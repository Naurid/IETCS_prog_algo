//
// Created by vilic on 02/10/2026.
// Lisez deux nombres et un code. D'après la valeur du code, effectuez l'opération correspondante sur les deux
// nombres et affichez le résultat. Si le code lu n'est pas un des quatre codes connus, imprimez le message « code
// non reconnu »

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, operationCode;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    int c; // Variable pour vider le tampon

    do {
        printf("Introduis 1 pour +, 2 pour -, 3 pour * et 4 pour /: \n");

        // Si scanf ne renvoie pas 1, cela signifie que la saisie n'est pas un entier valide
        if (scanf("%d", &operationCode) != 1) {
            printf("Erreur : Ce n'est pas un nombre valide.\n");

            // CORRECTION : On vide le tampon manuellement jusqu'au saut de ligne
            while ((c = getchar()) != '\n' && c != EOF);

            // On force une valeur invalide pour rester dans la boucle
            operationCode = 0;
        }
    } while (operationCode < 1 || operationCode > 4);

    if (operationCode == 1) {
        printf("%d + %d = %d \n", a, b, a+b);
    }
    else if (operationCode == 2) {
        printf("%d - %d = %d \n", a, b, a-b);
    }
    else if (operationCode == 3) {
        printf("%d * %d = %d \n", a, b, a*b);
    }
    else if (operationCode == 4) {
        printf("%d / %d = %.2f \n", a, b, (float)a/(float)b);
    }
    system("pause");
    return 0;
}
