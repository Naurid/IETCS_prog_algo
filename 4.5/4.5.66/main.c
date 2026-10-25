//  Ecrire un programme qui affiche la représentation d’un nombre entier dans le système décimal à partir de sa
// représentation dans le système octal (base 8) ; la représentation dans le système octal1
// étant introduite par
// l’utilisateur.
// Par exemple, si l’utilisateur entre la représentation octale suivante :
// 4 1 5 6 ,
// le programme affiche alors 2158
// car 6 x 80 + 5 x 81 + 1 x 82 + 4 x 83 = 6 + 40 + 64 + 4 x 512 = 2158
//
// Par contre, si l’utilisateur entre la représentation octale suivante :
// 4 1 8 6 ,
// le programme affiche alors un message d’erreur et doit inviter l’utilisateur à introduire une nouvelle saisie.

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    long octal, temp;
    long decimal = 0;
    long power = 1;
    int isValid = 0;
    int chiffre;

    while (!isValid) {
        printf("Entrez un nombre en representation octale : \n");
        scanf("%ld", &octal);

        temp = octal;
        isValid = 1;

        while (temp > 0) {
            chiffre = temp % 10;
            if (chiffre >= 8) {
                isValid = 0;
                break;
            }
            temp /= 10;
        }

        if (!isValid) {
            printf("Erreur : La representation octale ne peut contenir que des chiffres entre 0 et 7.\n");
            system("pause");
        }
    }

    temp = octal;
    while (temp > 0) {
        chiffre = temp % 10;
        decimal += chiffre * power;
        power *= 8;
        temp /= 10;
    }

    printf("Valeur en decimal : %ld\n", decimal);

    system("pause");
    return 0;
}
