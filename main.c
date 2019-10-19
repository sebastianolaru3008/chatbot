#include <stdio.h>

int main() {

    char dummy[200];
    char userSalute[20];
    char userInput[20];
    char name[20];
    char answer;
    int age;

    //delog 1
    printf("Let's chat\n");
    gets(userSalute);

    //delog 2
    printf("%s to you too. I am Hal. What's your name?\n", userSalute);
    gets(name);

    //delog 3
    printf("Oh hi, %s! What's your age?\n",name);
    scanf("%d", &age);

    //delog 4
    printf("Wow, %d is quite somethhing!\n",age);
    gets(userInput); gets(userInput);

    //delog 5
    printf("I'm sorry, not sure what this \"%s\" means.Do you want to see a magic trick? [y/n]\n",userInput);
    scanf("%c",&answer);

    if(answer=='y')
        printf("Ok. I will guess what zodiac sign you are in roumanian 'cause it's easier. Tell me when you're ready.\n");
    else
        printf("I will do it anyway. I will guess what zodiac sign you are in roumanian 'cause it's easier. Tell me when you're ready.\n");








    return 0;
}