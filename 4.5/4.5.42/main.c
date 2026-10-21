//  A l'aide d'une boucle "while" et en n'utilisant que 4 variables entières au maximum, écrire un programme qui
// demande à l'utilisateur d'introduire 10 nombres entiers. Le programme affiche ensuite les nombres de fois que
// les nombres 50 et 21 sont apparus dans la séquence des 10 nombres entiers introduits.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int current, fifty, twentyOne = 0;
    int i = 0;

    while ( i < 10 ) {
        system("cls");

        printf("Veuillez introduire un nombre entier positif:\n");
        scanf("%d", &current);

        if (current == 50) fifty++;
        if (current == 21) twentyOne++;

        i++;
    }

    if (fifty > 0 || twentyOne > 0) printf("Le 50 %ctait pr%csent %d fois et le 21 %ctait pr%csent %d fois dans la suite de nombres que vous avez rentr%c. \n", 130, 130, fifty, 130, 130, twentyOne, 130);
    else printf("Ni le 50 ni le 21 n'%ctaient pr%csents dans la suite de nombres entr%cs \n", 130, 130, 130);

    system ("pause");
    return 0;
}