#include <stdio.h>

void exo1() {
    char name[20];
    printf("enter your name\n");
    scanf("%s",name);
    printf("Hello %s!\n",name);
}

int main(void) {
    exo1();
    return 0;
}

