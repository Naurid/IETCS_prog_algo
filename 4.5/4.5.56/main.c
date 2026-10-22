//  Lire un entier N positif et non nul. Écrire un algorithme qui calcule le Nème
// nombre de la suite de Fibonacci.
// Pour rappel, les nombres de Fibonacci se calculent de la manière suivante :
// F0 =0
// F1 =1
// Fi =Fi-1 +Fi-2 pour tout i >1
// On n'utilisera que 5 variables entières au maximum

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Veuillez entrer un nombre entier positif et non nul:\n");
    scanf("%d", &n);

    int previous = 0;
    int current = 1;

    for (int i = 2; i <= n; i++) {
        int next = previous + current;
        previous = current;
        current = next;
    }

    printf("Fibonacci(%d) = %d\n", n, current);

    system("pause");
    return 0;
}
