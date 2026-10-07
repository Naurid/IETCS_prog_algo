//
// Created by vilic on 07/10/2026.
// Écrivez un programme de calcul d'un prix TTC à partir des données suivantes :
//  prix hors taxe,
//  code TVA : lettre majuscule : A 6%, B 21% et C 25%
// Le programme affichera la valeur du taux de TVA et le prix TTC correspondant. Dans le cas où 1'utilisateur
// fournit un code incorrect, le programme proposera B comme réponse par défaut et il affichera un message
// précisant cette décision


#include <stdio.h>
#include <stdlib.h>

int main () {
    float price;
    char tvaCode;

    printf("Veuillez entrer le prix hors taxes: \n");
    scanf("%f", &price);

    printf("Veuillez entrer le taux de TVA, A pour 6%, B pour 21\% \et C pour 25%  \n");

    fflush(stdin);
    scanf("%c", &tvaCode);

    switch (tvaCode) {
        case 'A':
            printf("Le prix TTC  est de %.3f \n", price+(price*0.06));
            break;
        case 'B':
            printf("Le prix TTC  est de %.3f \n", price+(price*0.21));
            break;
        case 'C':
            printf("Le prix TTC  est de %.3f \n", price+(price*0.25));
            break;
        default:
            printf("Le prix TTC est de %.3f $(le taux de 21% a ete applique par defaut)\n", price+(price*0.21));
    }

    system("pause");
    return 0;
}
