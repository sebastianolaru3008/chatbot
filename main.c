#include <stdio.h>

int main() {

    char userSalute[20];
    char userInput[20];
    char name[20];
    int age;

    //delog 1
    printf("C: Let's chat\n");
    printf("U:");
    gets(userSalute);

    //delog 2
    printf("C: %s to you too. I am Hal. What's your name?\n", userSalute);
    printf("U:");
    gets(name);

    //delog 3
    printf("C: Oh hi, %s! What's your age?\n",name);
    printf("U:");
    scanf("%d", &age);

    //delog 4
    printf("C: Wow, %d is quite somethhing!\n",age);
    printf("U:");
    gets(userInput); gets(userInput);

    //delog 5
    printf("C: I'm sorry, not sure what this \"%s\" means. Gotta go. Bby",userInput);



    return 0;
}