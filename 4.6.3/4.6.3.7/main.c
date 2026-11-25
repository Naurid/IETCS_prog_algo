// Lire une chaîne de caractères et compter le nombre de fois que la lettre « E » apparaît.

#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100
int main() {
    char message [TAILLE];
    int i, eCount = 0;

    printf("Veuillez entrer un message: \n");
    gets(message);

    while (message[i] != '\0') {
        // ici on est strict mais si on veut etre laxe on peut mettre un 'or'
        // juste que je le trouve pas sur ce clavier
        // et ca me csc donc voila tu fais ce que tu veux
        if (message[i] == 'E') eCount++;
    }

    printf("%d", eCount);
    system("pause");
    return 0;
}