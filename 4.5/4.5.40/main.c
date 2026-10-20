// A l'aide d'une boucle "do...while" et en n'utilisant que 3 variables entières au maximum, écrire un programme
// qui demande à l'utilisateur d'introduire 10 nombres entiers. Le programme signale ensuite à l'utilisateur si le
// nombre 8 était .présent dans la séquence des 10 nombres entiers introduits.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int current, isFifty = 0;
    int i = 0;

    while ( i < 10 ) {
        system("cls");

        printf("Veuillez introduire un nombre entier positif:\n");
        scanf("%d", &current);

        if (current == 8) isFifty = 1;

        i++;
    }

    if (isFifty) printf("Le 8 %ctait pr%csent dans la suite de nombres que vous avez rentr%c \n", 130, 130, 130);
    else printf("Le 8 n'%ctait pas pr%csent dans la suite de nombres entr%cs \n", 130, 130, 130);

    system ("pause");
    return 0;
}