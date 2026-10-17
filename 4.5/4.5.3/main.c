// Afficher 5 fois la première lettre de votre nom (utiliser une boucle "do...while").

#include <stdio.h>
#include <stdlib.h>

int main() {
    char firstLetter;
    printf("Veuillez entrer la premi%cre lettre de votre nom: \n", 138);
    scanf("%c", &firstLetter);

    int i = 0;

    do{
        printf("%c \n", firstLetter);
        i++;
    }while (i < 5);

    system("pause");
    return 0;
}