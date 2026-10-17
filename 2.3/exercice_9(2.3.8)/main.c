//
// Created by vilic on 18/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'introduire deux valeurs entières qu'il stockera dans deux
// variables nommées "a" et "b" (par exemple l’utilisateur stocke la valeur 5 dans a et la valeur 2 dans b).
// Le programme affiche ensuite le contenu de chacune des variables "a" et "b" (dans notre exemple la valeur 5 pour a
// et la valeur 2 pour b).
// Après cette opération, le programme permute le contenu des variables "a" et "b" puis affiche le contenu de chacune des variables "a" et "b"
// (dans notre exemple la valeur 2 pour a et la valeur 5 pour b).
// Pour effectuer la permutation, on utilisera une troisième variable nommée "temp".

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;

    printf("give me a whole number (will be stored in a): \n");
    scanf("%d", &a);

    printf("give me another whole number (will be stored in b): \n");
    scanf("%d", &b);

    printf("a = %d\nb= %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("the swap has been made\n");
    printf("a = %d\nb = %d\n", a, b);

    system("pause");
    return 0;
}
