// Sans utiliser la librairie "math.h" et à l'aide d'une boucle "for" , calculez et affichez la valeur de an
// où a et n
// sont deux nombres entiers introduits par l'utilisateur. Pour rappel, on obtient la valeur de an
// en multipliant n
// fois consécutivement a par lui-même.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, n;

    printf("Veuillez entrer la base (a) puis l'exposant (n, entier positif ou nul) :\n");
    scanf("%d %d", &a, &n);

    int result = 1;

    for (int i = 0; i < n; i++) {
        result *= a;
    }

    printf("%d \n", result);
    system("pause");
    return 0;
}
