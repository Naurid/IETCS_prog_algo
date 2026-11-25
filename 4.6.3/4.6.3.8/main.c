// Lire une chaîne de caractères et remplacer les voyelles (« a », « o », « i », « e », « u », « y ») par le caractère
// ‘*’.

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
        if (message[i] == 'A' || message[i] == 'a' ||
            message[i] == 'E' || message[i] == 'e' ||
            message[i] == 'I' || message[i] == 'i' ||
            message[i] == 'O' || message[i] == 'o' ||
            message[i] == 'U' || message[i] == 'u' ) message[i] = '*';
    }

    printf("%s", message);
    system("pause");
    return 0;
}