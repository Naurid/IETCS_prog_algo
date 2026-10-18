// A l'aide d'une boucle "do...while" et en n'utilisant que 3 variables entières au maximum, demandez à
// l'utilisateur d'introduire 8 nombres entiers et affichez leur somme.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int current;
    int i = 0;


     do {
        system("cls");

        printf("Somme actuelle: %d \n", sum);
        printf("Veuillez entrer un chiffre %c ajouter %c la somme (it%cration %d): \n", 133, 133, 130, i+1);

        scanf("%d", &current);
        sum += current;

        i++;
        while (getchar() != '\n');
    }while ( i <= 7);


    printf("Somme finale: %d \n", sum);
    system("pause");
    return 0;
}