//
// Created by vilic on 07/10/2026.
// En supposant que l'on code les quatre opérations usuelles par des chiffres :
// + 1
// - 2
// * 3
// / 4
// Lisez deux nombres et un code, d'après la valeur du code effectuez l'opération correspondante sur les deux
// nombres et affichez le résultat. Si le code lu n'est pas un des quatre codes connus, imprimez le message « code
// non reconnu ».

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b, choice;

    printf("Entrez la valeur du premier chiffre : \n");
    scanf("%d", &a);

    printf("Entrez la valeur du deuxieme chiffre : \n");
    scanf("%d", &b);

    printf("Pour faire une addition, Entrez 1 \n"
           "Pour faire une soustraction, Entrez 2\n"
           "Pour faire une multiplication, Entrez 3\n"
           "Pour faire une division, Entrez 4\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("%d + %d = %d", a, b, a+b);
            break;
        case 2:
            printf("%d - %d = %d", a, b, a-b);
            break;
        case 3:
            printf("%d * %d = %d", a, b, a*b);
            break;
        case 4:
            printf("%d / %d = %.2f", a, b, (float)a/(float)b);
            break;
        default:
            printf("Veuillez entrer un choix correct \n");
            break;
    }

    system("pause");
    return 0;
}
