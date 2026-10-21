//  A l'aide d'une boucle "do...while" et en n'utilisant que 4 variables entières au maximum, écrire un programme
// qui demande à l'utilisateur d'introduire 7 nombres entiers. Le programme affiche ensuite les nombres de fois
// que les nombres 2 et 20 sont apparus dans la séquence des 7 nombres entiers introduits

#include <stdio.h>
#include <stdlib.h>

int main () {
    int current, two, twenty = 0;
    int i = 0;

   do{
        system("cls");

        printf("Veuillez introduire un nombre entier positif:\n");
        scanf("%d", &current);

        if (current == 2) two++;
        if (current == 20) twenty++;

        i++;
    } while ( i < 7 );

    if (two > 0 || twenty > 0) printf("Le 2 %ctait pr%csent %d fois et le 20 %ctait pr%csent %d fois dans la suite de nombres que vous avez rentr%c. \n", 130, 130, two, 130, 130, twenty, 130);
    else printf("Ni le 2 ni le 20 n'%ctaient pr%csents dans la suite de nombres entr%cs \n", 130, 130, 130);

    system ("pause");
    return 0;
}