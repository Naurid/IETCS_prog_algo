//
// Created by vilic on 18/09/2026.
// Écrivez un programme de résolution de l'équation du premier degré (aX+b=c). Vous supposerez que le coefficient de x ( a )
// n'est jamais nul. L’utilisateur doit, dans un premier temps, entrer les valeurs de a, b et c puis le programme doit calculer,
// dans un deuxième temps, la valeur de X. Par exemple, si l’utilisateur entre 2 pour a, -1 pour b et 4 pour c, le programme doit
// afficher 2.5 pour X.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    printf("Bienvenue dans le resolveur de second degre (aX+b=c):\n");
    printf("Veuillez entrer la valeur de a:\n");
    scanf("%f",&a);

    printf("Veuillez entrer la valeur de b:\n");
    scanf("%f",&b);

    printf("Veuillez entrer la valeur de c:\n");
    scanf("%f",&c);

    printf("voici la valeur de X: %.2f\n", (c-b)/a);

    system("pause");
    return 0;
}