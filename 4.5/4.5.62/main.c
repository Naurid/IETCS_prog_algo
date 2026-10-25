// 62. (flemme de copier coller avec tous les signes chiants)
// fabs donne juste la valeur absolue (fabs(terme))

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
    double x;
    double somme = 1.0;
    double terme = 1.0;
    int i = 1;

    printf("Entrez la valeur de x : \n");
    scanf("%lf", &x);

    do {
        terme = terme * x / i;
        somme += terme;
        i++;
    } while (fabs(terme) >= 1e-6);

    printf("e^%f = %.6f\n", x, somme);

    system("pause");
    return 0;
}
