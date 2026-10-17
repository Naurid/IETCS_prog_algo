//
// Created by vilic on 18/09/2026.
// Écrivez un programme calculant la somme des n premiers entiers où n est entré au clavier. Pour rappel la formule est :
// s = (n.(n + 1))/2
// Par exemple, si on entre 4 pour n, le programme doit afficher 10 (10 = 1+2+3+4)


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int number;
    printf("donnez un nombre entier: \n");
    scanf("%d", &number);

    int sum = (number*(number+1)/2);

    printf("la somme des %d premiers nombres est: %d\n", number, sum);

    system("pause");
    return 0;
}
