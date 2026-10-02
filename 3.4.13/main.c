//
// Created by vilic on 02/10/2026.
// Écrivez un programme qui demande à l’utilisateur d’entrer 2 nombres entiers en cours d’exécution de programme.
// Le premier nombre doit correspondre au jour de sa naissance tandis que le deuxième nombre doit correspondre au
// mois de sa naissance. Ainsi, si l’utilisateur est né le 5 mars, le premier nombre devra valoir 5 tandis que le
// deuxième nombre devra valoir 3. Le programme doit vérifier si le premier nombre introduit est compatible avec le
// nombre maximum de jours du mois correspondant au deuxième nombre introduit par l’utilisateur. Le programme
// doit également afficher un message adéquat si le deuxième nombre introduit ne correspond pas à un mois de
// l’année (nombre non compris entre 1 et 12)

#include <stdio.h>
#include <stdlib.h>

int main() {
    int day, month, maxDays;

    printf("Introduisez le mois de votre naissance: \n");
    scanf("%d", &month);

    if (month > 12) {
        printf(" Y a que 12 moi dans une annee ow");
        return 0;
    }
    if (month == 2) { maxDays = 28; }
    else if (month%2 == 0) { maxDays = 31; }
    else { maxDays = 30; }

    printf("Introduisez le jour de votre naissance: \n");
    scanf("%d", &day);

    if (day > maxDays) {
        printf("il n'y a que %d jours dans ce mois \n");
        return 0;
    }

    printf("t'es ne le %d/%d", day, month);
    system("pause");
    return 0;
}
