//
// Created by vilic on 19/09/2026.
// Ecrire un programme qui demande à l'utilisateur d'entrer un nombre entier n après avoir effacé l'écran (Dans
// l’environnement WINDOWS : en début de programme saisissez la ligne « #include <stdlib.h> » puis
// insérer dans le bloc main l'instruction « system("cls"); » à l’endroit désiré). Le programme doit afficher
// ensuite le résultat ainsi que le reste de la division entière de n par 16.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int number;
    printf("Veuillez entrer un nombre entier:\n");
    scanf("%d",&number);

    system("cls");

    int result = number/16;
    int rest = number%16;

    printf("resultat: %d\nreste %d\n",result, rest);
}
