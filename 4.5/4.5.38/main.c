// A l'aide d'une boucle "for" et en n'utilisant que 3 variables entières au maximum, écrire un programme qui
// demande à l'utilisateur d'introduire 5 nombres entiers. Le programme signale ensuite à l'utilisateur si le
// nombre 50 était .présent dans la séquence des 5 nombres entiers introduits

#include <stdio.h>
#include <stdlib.h>

int main () {
    int current, isFifty = 0;

    for (int i = 0; i < 5; i++) {
        printf("Veuillez introduire un nombre entier positif:\n");
        scanf("%d", &current);

        if (current == 50) isFifty = 1;
    }

    if (isFifty) printf("Le 50 %ctait pr%csent dans la suite de nombres que vous avez rentr%c \n", 130, 130, 130);
    else printf("Le 50 n'%ctait pas pr%csent dans la suite de nombres entr%cs \n", 130, 130, 130);

    system ("pause");
    return 0;
}
