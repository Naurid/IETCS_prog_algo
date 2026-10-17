// Afficher 5 fois la première lettre de votre nom (utiliser une boucle "for").

#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstLetter;

    printf("Veuillez entrer la premi%cre lettre de votre nom: \n", 138);
    scanf("%c", &firstLetter);

    for (int i = 0; i < 5; i++) {
        printf("%c \n", firstLetter);
    }

    system("pause");
    return 0;
}
