//  Écrire un programme utilisant une boucle "while" dans laquelle on demande à l'utilisateur d'entrer une lettre
// (que l'on stockera dans une variable de type "char" nommée "car") parmi les 26 lettres de l'alphabet. Si le
// caractère introduit est une des 26 lettres de l'alphabet (en majuscule ou en minuscule), le programme quitte la
// boucle; sinon on recommence l'opération de saisie jusq'au moment où l'utilisateur a bien entré une des 26
// lettres de l'alphabet, ce qui a pour effet de sortir de la boucle et d'arrêter le programme.
// On utilisera l'instruction "fflush(stdin)" avant chaque instruction de saisie de caractère.
// Le code ASCII des lettres "a, b, c, ..., z" s'étend de 97 à 122 tandis que le code ASCII des lettres
// "A,B, C, ..., Z" s'étend de 65 à 90.
// L'expression " (int) car "permet d'obtenir le code ASCII du caractère contenu dans la variable "car"

#include <stdio.h>
#include <stdlib.h>

int main () {
    char car = '1';

    while (!(car >= 'a' && car <= 'z') && !(car >= 'A' && car <= 'Z')) {
        printf("Veuillez introduire une lettre de l'alphabet: \n");

        scanf(" %c", &car);
    }

    printf("yay\n");
    system("pause");
    return 0;
}
