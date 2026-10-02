//
// Created by vilic on 03/10/2026.
// Écrivez un programme demandant à l'utilisateur d'entrer deux nombres entiers a et n . Le programme doit
// ensuite calculer et afficher, si c’est possible, la valeur de a exposant (1/n). Le programme ne peut pas utiliser la
// fonction « pow » mais uniquement les fonctions « log » et « exp ». Ainsi,
//  si n est impair et si a est strictement positif, on affiche la valeur de l’expression « exp(1.0 / n * log(a)) » ;
//  si n est un nombre pair non nul et si a est strictement négatif, on affiche « Le calcul est impossible. » ;
//  si n est un nombre pair non nul et si a est strictement positif, on affiche la valeur de l’expression
// « exp(1.0 / n * log(a)) » ;
//  si n est nul, on affichera « Calcul impossible » ;
//  si a est nul et si n est > 0, on affiche 0 ;
//  si a est nul et si n est < 0, on affiche « Le calcul est impossible : division par 0. » ;
//  si n est impair et si a est négatif, on affiche la valeur de l’expression « -exp(1.0 / n * log(-a)) » ;


#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    int a, n;

    printf("Entrez la valeur de a : ");
    scanf("%d", &a);
    printf("Entrez la valeur de n : ");
    scanf("%d", &n);

    if (n % 2 != 0 && a > 0)
    {
        printf("%f\n", exp(1.0 / n * log(a)));
    }

    if (n % 2 == 0 && n != 0 && a < 0)
    {
        printf("Le calcul est impossible.\n");
    }

    if (n % 2 == 0 && n != 0 && a > 0)
    {
        printf("%f\n", exp(1.0 / n * log(a)));
    }

    if (n == 0)
    {
        printf("Calcul impossible\n");
    }

    if (a == 0 && n > 0)
    {
        printf("0\n");
    }

    if (a == 0 && n < 0)
    {
        printf("Le calcul est impossible : division par 0.\n");
    }

    if (n % 2 != 0 && a < 0)
    {
        printf("%f\n", -exp(1.0 / n * log(-a)));
    }


    system("pause");
    return 0;
}
