// A l'aide d'une boucle "for" et en n'utilisant que 3 variables entières au maximum, écrire un programme qui
// demande à l'utilisateur d'introduire 6 nombres entiers. Le programme affiche ensuite le nombre de fois que
// nombre 50 est apparu dans la séquence des 6 nombres entiers introduits.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int current, fifty = 0;
    int i = 0;

    while ( i < 6 ) {
        system("cls");

        printf("Veuillez introduire un nombre entier positif:\n");
        scanf("%d", &current);

        if (current == 50) fifty++;

        i++;
    }

    if (fifty) printf("Le 50 %ctait pr%csent %d fois dans la suite de nombres que vous avez rentr%c \n", 130, 130, fifty, 130);
    else printf("Le 50 n'%ctait pas pr%csent dans la suite de nombres entr%cs \n", 130, 130, 130);

    system ("pause");
    return 0;
}