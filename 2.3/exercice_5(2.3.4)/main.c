//
// Created by vilic on 18/09/2026.
//Affichez le résultat ainsi que reste de la division entière d'un nombre entier a par un nombre entier b
//(les deux nombres entiers a et b sont lus à partir d'une saisie-clavier).
//Par exemple, si on entre 7 pour a et 5 pour b, le programme affiche 1 comme résultat
//et 2 comme reste (7 = 5 x 1 + 2).


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int divided;
    int diviser;
    printf("Bienvenue dans le divisor . Ce programme sert juste a vous donner le resultat de la division et le reste\n");
    printf("introduisez le chiffre a diviser:");
    scanf("%d", &divided);
    printf("introduisez le diviseur:");
    scanf("%d", &diviser);

    int result = divided / diviser;
    int rest = divided % diviser;

    printf("le resultat de la division est %d et le reste est %d\n", result, rest);
    system("pause");
    return 0;
}
