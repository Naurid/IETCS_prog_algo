// Lire deux nombres entiers NI et N2. Si un des nombres est nul, l'autre est le PGCD sinon, il faut soustraire
// le plus petit du plus grand et laisser le plus petit inchangé. Puis, recommencer ainsi avec la nouvelle paire
// jusqu'à ce qu’un des deux nombres soit nul. Dans ce cas, l'autre nombre est le PGCD

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

    while (n1 != 0 && n2 != 0) {
        if (n1 > n2) n1 -= n2;
        else n2 -= n1;
    }

    if (n1 != 0) pgcd = n1;
    else pgcd = n2;

    printf("Le PGCD de %d et %d est : %d\n", initialN1, initialN2, pgcd);
    system("pause");
    return 0;
}
