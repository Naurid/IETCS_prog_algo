//
// Created by vilic on 02/10/2026.
// Lisez deux nombres entiers, soustrayez le plus petit du plus grand et affichez le résultat.


#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;

    printf("Introduis le premier chiffre: \n");
    scanf("%d", &a);

    printf("Introduis le second chiffre: \n");
    scanf("%d", &b);

    if (a < b) {
        printf("%d - %d = %d \n", b, a, b-a);
    }else {
        printf("%d - %d = %d \n", a, b, a-b);
    }
    system("pause");
    return 0;
}
