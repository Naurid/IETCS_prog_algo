// A l'aide d'une boucle "do...while" , écrire un programme qui demande à l'utilisateur d'entrer une cote
// (nombre entier) sur 20. Tant que la cote introduite par l'utilisateur est "farfelue" (c-à-d non comprise entre 0
// et 20 inclus), un message d'erreur est affiché et le programme invite alors l'utilisateur à réintroduire une
// nouvelle cote. Une fois que la cote introduite est cohérente, le programme affiche cette cote avec un
// commentaire (échec ou réussite).

#include <stdio.h>
#include <stdlib.h>

int main () {
    int grade = -1;

     do{
        printf("Veuillez introduire une cote sur 20 (un chiffre entre 0 et 20 compris): \n");
        scanf("%d", &grade);

        if (grade > 20 || grade < 0) {
            printf("Le chiffre introduit est invalide!\n");
            system ("pause");
        }
        system ("cls");
    }while (grade > 20 || grade < 0);

    if (grade >=10) {
        printf("Avec une note de %d/20, vous avez r%cussi \n", grade, 130);
    }
    else {
        printf("Avec une note de %d/20, vous avez rat%c \n", grade, 130);
    }
    system("pause");
    return 0;
}