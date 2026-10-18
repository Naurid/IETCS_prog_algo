// A l'aide d'une boucle "do...while" et en n'utilisant que 3 variables entières au maximum, demandez à
// l'utilisateur d'introduire 4 nombres entiers et affichez leur moyenne.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int current;
    int i = 0;

    do {
        system("cls");

        if (i != 0) printf("Moyenne actuelle: %.1f \n", ((float) sum / (float) (i)));
        printf("Veuillez entrer un chiffre %c ajouter %c la somme (it%cration %d): \n", 133, 133, 130, i + 1);

        scanf("%d", &current);
        sum += current;
        i++;
        while (getchar() != '\n');
    } while (i < 4);

    system("cls");
    printf("Moyenne finale: %.1f \n", (float) sum / (float) 5);
    system("pause");
    return 0;
}
