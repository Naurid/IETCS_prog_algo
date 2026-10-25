//  Lire un nombre entier n et effectuer les divisions entières successives par 16 en affichant systématiquement
// les restes. Vous ne pouvez utiliser que les deux variables de type « int » suivantes : n et reste.
// Par exemple, si l’utilisateur introduit le nombre 6241, le programme affiche successivement les valeurs 1 (car
// 6241 = 16 x 390 +1), 6 (car 390 = 16 x 24 + 6), 8 (car 24 = 16 x 1 + 8) et enfin 1 (car 1 = 16 x 0 + 1)

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, reste;

    printf("Entrez un nombre entier : \n");
    scanf("%d", &n);

    while (n > 0) {
        reste = n % 16;
        printf("%d\n", reste);
        n = n / 16;
    }
    system("pause");
    return 0;
}
