// Ecrire un programme qui génère 10 nombres (compris entre 0 et 100) de manière aléatoire. Le programme
// doit indiquer si ces nombres sont pairs ou impairs. Le programme ne peut utiliser au maximum que 2
// variables de type « int ». Pour générer un nombre de manière aléatoire, il faut écrire les lignes « #include
// <time.h> » et « #include <stdlib.h> » en début de programme. L’instruction « srand(time(NULL)); » permet
// d'initialiser le générateur de nombre aléatoire. Cette instruction permet ainsi de ne pas générer le même
// nombre aléatoire à chaque exécution du programme. L’instruction « a = rand() ; » permet de stocker dans la
// variable nommée « a » de type « int » un nombre aléatoire compris entre 0 et 32767. L’instruction « a =
// rand() % N ; » permet de stocker dans la variable nommée « a » de type « int » un nombre aléatoire compris
// entre 0 et N-1.


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int current = 0;
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        current = rand()%101;
        if (current%2 == 0) printf("%d est pair! \n", current);
        else printf("%d est impair! \n", current);
    }

    system("pause");
    return 0;
}
