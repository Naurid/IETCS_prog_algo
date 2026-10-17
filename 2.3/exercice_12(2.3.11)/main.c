//
// Created by vilic on 18/09/2026.
// Écrivez un programme calculant la somme des carrés des n premiers entiers où n est entré au clavier. Pour rappel la formule est :
// s = (n.(n+1)(2n+1))/6
// Par exemple, si on entre 4 pour n, le programme doit afficher 30 (30 = 1²+2²+3²+4²)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int number;
    printf("donnez un nombre entier: \n");
    scanf("%d", &number);

    int sum = (number * (number+1) * (2*number+1)/6);

    printf("la somme des carres des %d premiers nombres est: %d\n", number, sum);

    system("pause");
    return 0;
}
