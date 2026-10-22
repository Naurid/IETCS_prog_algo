// Lire deux nombres entiers NI et N2. Assigner à N1 la valeur de N2 et à N2 la valeur du reste de la division
// de N1 par N2. Puis recommencer jusqu'à ce que le reste de la division soit nul. À ce moment, N1 contient le
// PGCD

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2, pgcd;

    printf("Entrez N1: \n");
    scanf("%d", &n1);

    printf("Entrez N2: \n");
    scanf("%d", &n2);

    int initialN1 = n1;
    int initialN2 = n2;

    int rest = n1%n2;

    while (rest != 0) {
        n1 = n2;
        n2 = rest;
        rest = n1%n2;
    }


    printf("Le PGCD de %d et %d est : %d\n", initialN1, initialN2, n1);
    system("pause");
    return 0;
}
