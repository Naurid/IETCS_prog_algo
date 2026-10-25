//  Lire un nombre entier n et effectuer les divisions entières successives par 8 en affichant systématiquement
// les restes. Vous ne pouvez utiliser que les deux variables de type « int » suivantes : n et reste.
// Par exemple, si l’utilisateur introduit le nombre 6429, le programme affiche successivement les valeurs 5
// (car 6429 = 8 x 803 + 5), 3 (car 803 = 8 x 100 + 3), 4 (car 100 = 8 x 12 + 4), 4 (car 12 = 8 x 1 +4) et enfin
// 1 (car 1 = 8 x 0 + 1).

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, reste;

    printf("Entrez un nombre entier : \n");
    scanf("%d", &n);

    while (n > 0) {
        reste = n % 8;
        printf("%d\n", reste);
        n = n / 8;
    }

    system("pause");
    return 0;
}
