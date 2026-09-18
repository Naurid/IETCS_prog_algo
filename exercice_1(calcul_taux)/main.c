#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
//
// Created by vilic on 18/09/2026.
// le programme est sense prendre une somme de base et un taux d'interet et rendre un interet et la valuer acquise
//
int main() {
    float base_sum;
    float interest_perc;

    printf("Veuillez introduire la somme initiale:\n");
    scanf("%f", &base_sum);

    printf("Veuillez introduire le taux d'interet (example: introduire 3 pour 3%):\n");
    scanf("%f", &interest_perc);

    float interest = (interest_perc/100) * base_sum;
    float acquired_sum = interest + base_sum;

    printf("interet = %.2f euros\n", interest);
    printf("valeur acquise = %.2f euros\n", acquired_sum);

    system("pause");
    return 0;
}