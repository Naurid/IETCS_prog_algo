//
// Created by vilic on 21/09/2026.
//

/* L'expression 3 ( 1000/3 - 333 ) – 1 est-elle égale à 0 ? */
#include <stdio.h>
int main()
{
    float x, y, z ;
    x = 1000.0 / 3.0 ;
    y = x - 333 ;
    z = 3 * y - 1 ;
    printf("Valeur de z : %f\n", z);
}