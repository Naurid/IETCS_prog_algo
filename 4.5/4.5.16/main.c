// A l'aide d'une boucle "for" et en n'utilisant que 3 variables entières au maximum, demandez à l'utilisateur
// d'introduire 5 nombres entiers et affichez leur produit.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int product = 1;
    int current;

    for (int i = 0; i < 5; i++ ) {
        system("cls");

        printf("Produit actuel: %d \n", product);
        printf("Veuillez entrer un chiffre %c multiplier avec la somme (it%cration %d): \n", 133, 130, i+1);

        scanf("%d", &current);
        product *= current;

        // apparement c'est mieux de faire ca que fflush(stdin) source: Gemini
        while (getchar() != '\n');
    }

    printf("Produit final: %d \n", product);
    system("pause");
    return 0;
}