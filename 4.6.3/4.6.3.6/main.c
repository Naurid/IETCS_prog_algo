// Lire une chaîne de caractères et la mettre en majuscules. Pour rappel, la chaîne de caractères se termine
// lorsque l’on rencontre le caractère ‘\0’ (code ASCII 0). Utilisez la fonction « gets1
// » si la chaîne de
// caractères comporte un espace (code ASCII 32).

#include <stdio.h>
#include <stdlib.h>
#define TAILLE 100

int main() {
    char message [TAILLE];
    int i = 0;

    printf("Veuillez entrer votre message: \n");
    gets(message);

    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] -= 32;
        }
        i++;
    }

    printf("Message: %s \n", message);
    system("pause");
    return 0;
}