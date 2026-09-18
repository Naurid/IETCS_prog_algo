//
// Created by vilic on 18/09/2026.
//On vous demande de corriger les erreurs se trouvant dans le programme suivant afin que ce dernier puisse fonctionner correctement
/* ce programme demande à l'utilisateur d'introduire deux nombres réels a */
/* et b puis affiche la valeur de a exposant b */

#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* permet d'utiliser la fonction pow */

int main()
{
    float a, b;

    system("cls"); /* permet d'effacer l'écran (Windows) */
    printf("Veuillez entrer une valeur réelle pour a\n");
    scanf("%f",&a);
    system("cls"); /* permet d'effacer l'écran (Windows) */
    printf("Veuillez entrer une valeur réelle pour b\n");
    scanf("%f",&b);
    float result = pow(a,b); /* la fonction pow renvoie le résultat de a exposant b */
    system("cls"); /* permet d'effacer l'écran (Windows) */
    printf("La valeur de %f exposant %f vaut : %f\n",a,b,result);
    system("pause");

    return 0;

}