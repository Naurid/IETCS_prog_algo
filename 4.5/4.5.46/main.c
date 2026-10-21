// Ecrire un programme qui demande à l'utilisateur d'entrer les 5 cotes (nombres entiers) sur 20 obtenues par
// l'utilisateur lors des 5 interrogations de mathématique du mois précédent. Tant qu'une cote introduite par
// l'utilisateur est "farfelue" (c-à-d non comprise entre 0 et 20 inclus), un message d'erreur est affiché et le
// programme invite alors l'utilisateur à réintroduire une nouvelle cote. Si la cote saisie est correcte, le programme
// l’affiche. Une fois les 5 cotes introduites, le programme affiche la moyenne (en %) de ces 5 cotes.

#include <stdio.h>
#include <stdlib.h>

int main () {
    int mean = 0;

    for (int i = 0; i < 5; i++) {
        int currentGrade = -1;
        while (currentGrade > 20 || currentGrade < 0){
            printf("Cote %d: \n", i + 1);
            printf("Veuillez introduire une cote sur 20 (un chiffre entre 0 et 20 compris): \n");
            scanf("%d", &currentGrade);

            if (currentGrade > 20 || currentGrade < 0) {
                printf("Le chiffre introduit est invalide!\n");
                system ("pause");
            }
            system ("cls");
        }
        mean += currentGrade;
    }

    printf("Cote finale: %d %% \n", mean);
    system("pause");
    return 0;
}