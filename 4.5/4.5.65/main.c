// Lire un nombre entier n et effectuer les divisions entières successives par 2 en affichant systématiquement
// les restes. Vous ne pouvez utiliser que les deux variables de type « int » suivantes : n et reste.
// Par exemple, si l’utilisateur introduit le nombre 97, le programme affiche successivement les valeurs 1 (car
// 97 = 2 x 48 + 1), 0 (car 48 = 2 x 24 + 0), 0 (car 24 = 2 x 12 + 0), 0 (car 12 = 2 x 6 +0), 0 (car 6 = 2 x 3 +
// 0), 1 (car 3 = 2 x 1 +1) et enfin 1 (car 1 = 2 x 0 + 1).

#include <stdio.h>

int main(void) {
    int n, reste;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    while (n > 0) {
        reste = n % 2;
        printf("%d\n", reste);
        n = n / 2;
    }

    return 0;
}