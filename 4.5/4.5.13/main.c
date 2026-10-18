// A l'aide d'une boucle "for" et en n'utilisant que 3 variables entières au maximum, demandez à l'utilisateur
// d'introduire 7 nombres entiers et affichez leur somme

#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    int current;
    
    for (int i = 0; i < 7; i++) {
        system("cls");

        printf("Somme actuelle: %d \n", sum);
        printf("Veuillez entrer un chiffre %c ajouter %c la somme (it%cration %d): \n", 133, 133, 130, i+1);

        scanf("%d", &current);
        sum += current;

        while (getchar() != '\n');
    }

    system("pause");
    return 0;
}