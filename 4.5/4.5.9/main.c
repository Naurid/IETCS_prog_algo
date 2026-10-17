// Demander à l’utilisateur de saisir 2 nombres entiers positifs inf et sup tels que sup > inf . Afficher tous les
// nombres (compris entre inf et sup) qui sont à la fois multiples de 6 et de 8 (utiliser une boucle "while").

#include <stdio.h>
#include <stdlib.h>

int main() {
    int inf, supp;

    printf("Veuillez entrer la limite inf%crieure (nombre entier positif) et la limite sup%crieure (nombre entier positif > %c la limite inf%crieure): \n", 130, 130, 133, 130);
    scanf("%d %d", &inf, &supp);

    printf("Voici les nombres entre %d et %d multiples %c la fois de 6 et de 8: \n", inf, supp, 133);

    while (inf <= supp) {
        if (inf%6 == 0 && inf%8 == 0) printf("%d \n", inf);

        inf++;
    }

    system("pause");
    return 0;
}
