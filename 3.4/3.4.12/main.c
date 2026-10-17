//
// Created by vilic on 02/10/2026.
// Écrivez un programme permettant de signaler à l’utilisateur si une année postérieure à 1849 (nombre entier
// supérieur à 1849 saisi par l’utilisateur en cours d’exécution de programme) est bissextile ou pas. Pour rappel, une
// année est bissextile si elle est divisible par 400 ou bien si elle est divisible par 4 et dans le même temps non
// divisible par 100. Par exemple, 2000 et 1980 sont des années bissextiles mais 1900 et 2011 ne le sont pas. Testez
// votre programme avec les valeurs suivantes : 1937, 2012, 2000, 1905, 1904, 2032 et 1900

#include <iso646.h>
#include <stdio.h>

int main() {
    int annee;

    printf("introduisez une annee superieure a 1849: \n");
    scanf("%d", &annee);

    if (annee <= 1849) {
        printf("j'ai dit apres 1849 zebi");
        return 0;
    }

    if (annee%400 == 0 || (annee%4 == 0 && annee % 100 != 0)) {
        printf("c'est une annee bissextile");
    }
    else {
        printf("c'est pas une annee bissextile");
    }
    return 0;
}
