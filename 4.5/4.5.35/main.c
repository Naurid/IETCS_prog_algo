// Sans utiliser la librairie "math.h" et à l'aide d'une boucle "while" , calculez et affichez la valeur de a
// n
// où a
// et n sont deux nombres entiers introduits par l'utilisateur. Pour rappel, on obtient la valeur de a
// n
// en
// multipliant n fois consécutivement a par lui-même.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, n, result = 1, i = 0;

    printf("Veuillez entrer la base (a) puis l'exposant (n, entier positif ou nul) :\n");
    scanf("%d %d", &a, &n);

    while ( i < n ){
        result *= a;
        i++;
    }

    printf("%d \n", result);
    system("pause");
    return 0;
}