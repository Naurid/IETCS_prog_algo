// Lire un nombre entier et déterminer le nombre de chiffre(s) que comporte ce nombre (par exemple si le
// nombre entré est 45967, le nombre de chiffres vaut 5).

#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, compte = 0;

    printf("Entrez un nombre entier : \n");
    scanf("%d", &number);

    if (number < 0) {
        number = -number;
    }

    do {
        compte++;
        number /= 10;
    } while (number > 0);

    printf("Le nombre de chiffres est : %d\n", compte);

    system("pause");
    return 0;
}
