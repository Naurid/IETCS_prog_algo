//  Même question que la question n°36 si ce n'est que vous devez utiliser une boucle "do...while" en lieu et
// place de la boucle "while" .

#include <stdio.h>
#include <stdlib.h>

int main () {
    char car = '1';

     do{
        printf("Veuillez introduire une lettre de l'alphabet: \n");

        scanf(" %c", &car);
    }while (!(car >= 'a' && car <= 'z') && !(car >= 'A' && car <= 'Z'));

    printf("yay\n");
    system("pause");
    return 0;
}