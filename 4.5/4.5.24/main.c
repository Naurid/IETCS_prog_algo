// A l'aide d'une boucle "for" et en n'utilisant que 3 variables entières au maximum,calculez la factorielle d'un
// nombre entier donné par l'utilisateur.

#include <stdio.h>
#include <stdlib.h>

int main() {


    int current ;
    printf("Veuillez entrer un chiffre afin d'en recevoir la factorielle: \n");
    scanf("%d", &current);

    for (int i = current; i > 1; i--) {
        //printf("%d * %d : %d \n", current, i - 1, current * (i - 1));
        current = current * (i-1);
    }

    system("pause");
    system("cls");
    printf("Factorielle: %d \n", current);
    system("pause");
    return 0;
}