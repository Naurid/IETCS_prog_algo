#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, maxDays, year, bissextile;

    printf("introduisez une annee superieure a 1582: \n");
    scanf("%d", &year);

    if (year < 1582) {
        printf("Annee non valide");
        return 0;
    }

    if (year%400 == 0 || (year%4 == 0 && year % 100 != 0)) {
        bissextile = 1;
    }
    else {
        bissextile = 0;
    }

    printf("introduisez un nombre dans l'intervalle [1;12]: \n");
    scanf("%d", &month);

    if (month > 12 || month < 1) {
        printf("Chiffre entre invalide (entre 1 et 12 compris)");
        return 0;
    }

    printf("introduisez un nombre dans l'intervalle [1;31] pour le jour: \n");
    scanf("%d", &day);

    if (day < 1 || day > 31) {
        printf("Chiffre entre invalide (entre 1 et 31 compris)");
        return 0;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day == 31) {
            printf("Ce mois ne compte que 30 jours et non 31 !\n");
            return 0;
        }
    } else if (month == 2) {
        if (day > 29) {
            printf("Ce mois ne compte que 28 ou 29 jours !\n");
            return 0;
        } else if (day == 29 && bissextile == 0) {
            printf("L'annee saisie n'est pas bissextile et le mois de fevrier ne contient donc que 28 jours.\n");
            return 0;
        }
    }

    printf("votre date est le %d/%d/%d", day, month, year);
    system("pause");
    return 0;
}
