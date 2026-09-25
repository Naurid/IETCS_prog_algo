//
// Created by vilic on 25/09/2026.
// nbr de sec -> nbr de jours

#include <stdio.h>
#include <stdlib.h>

int main() {
    int seconds;

    printf("donne les secondes ow\n");
    scanf("%d", &seconds);

    int days = seconds / 86400;
    int hours = (seconds % 86400) / 3600;
    int minutes = (seconds % 3600) / 60;

    printf("%d days %d hours %d minutes\n", days, hours, minutes);

    system("pause");
    return 0;
}
