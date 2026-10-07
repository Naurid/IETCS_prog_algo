//
// Created by vilic on 07/10/2026.
// Demander et lire les valeurs de R en Ohms, I en Ampères et t en secondes. Déterminez un algorithme qui
// proposerait de calculer la différence de potentiel (U = R . I) , la puissance (P = R . I2 ) ainsi que l'énergie (E = R
// . I2. t ).

//pas testé

#include <stdio.h>
#include <stdlib.h>

int main() {
    int ohms, t, choice;
    float amperes;

    printf("Entrez la valeur de R en Ohms : \n");
    scanf("%d", &ohms);

    printf("Entrez la valeur de t en secondes : \n");
    scanf("%d", &t);

    printf("Entrez la valeur de I en amperes : \n");
    scanf("%f", &amperes);

    printf("Pour connaitre la difference de potentiel, Entrez 1 \n"
           "Pour connaitre la puissance, Entrez 2\n"
           "Pour connaitre l'energie, Entrez 3\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("La valeur de la difference de potentiel est %.2f \n", (float)ohms * amperes);
            break;
        case 2:
            printf("La valeur de la puissance est de %d \n", ohms*(amperes*amperes));
            break;
        case 3:
            printf("La valeur de la energie est de %d \n", ohms*(amperes*amperes)*t);
            break;
        default:
            printf("Veuillez entrer un choix correct \n");
    }

    system("pause");
    return 0;
}
