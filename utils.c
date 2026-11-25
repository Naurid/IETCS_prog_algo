//
// Created by vilic on 25/11/2026.
//

#include "utils.h"

#include <limits.h>
#include <stdio.h>

int getInt(const char *message, int min, int max) {
    int nombre;
    printf(message);
    while (scanf("%d", &nombre) != 1 || nombre < min || nombre > max) {
        while (getchar() != '\n'); // Vide le buffer (supprime la saisie invalide)
        if (nombre < min)
            printf("Invalide en dessous de %d\n. %s", min, message);
        else if (nombre > max)
            printf("Invalide au dessus de %d\n. %s", max, message);
        else
            printf("Invalide. %s \n ", message);
    }

    return nombre;
}
