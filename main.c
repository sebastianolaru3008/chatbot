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
    printf("I'm sorry, not sure what this \"%s\" means. Do you want to see a magic trick? [y/n]\n",userInput);
    scanf("%c",&answer);

    //delog 6
    if(answer=='y')
        printf("Ok. I will guess your zodiac sign, but in roumanian ('cause it's easier). Tell me when you're ready.\n");
    else
        printf("I will do it anyway. I will guess your zodiac sign, but in roumanian ('cause it's easier). Tell me when you're ready.\n");
    scanf("%s",dummy);

    //delog 6
    printf("Ok %s, think intensly of your zodiac... Ok, I see... I see a vowel. Is there any \"a\" in your zodiac. [y/n]\n",name);
    fflush(stdin);
    scanf("%c",&answer);

    if(answer=='y')// there is A
    {
        printf("Ok... I see another vowel... is it an \"o\" in there? [y/n]\n");
        fflush(stdin);
        scanf("%c",&answer);
        if(answer=='y')// there is A,O
        {
            printf("I am close.. I see another vowel... is an \"i\" in your sign? [y/n]\n");
            fflush(stdin);
            scanf("%c",&answer);
            if(answer=='y')// there is A,O,I
            {
                printf("I almost got it... I see a consonant... is a \"p\" in your sign? [y/n]\n");
                fflush(stdin);
                scanf("%c",&answer);
                if(answer=='y')// there is A,O,I,P
                    printf("Of course! Because \"Capricorn\" is spelled with a \"p\". :)\n");
                else if(answer=='n')// there is A,O,I,/P
                    printf("Of course! Because there is no \"p\" in \"Fecioara\". :)\n");
            }
            else if(answer=='n')// there is A,O,/I
            {
                printf("Oh.. Ok, it happens...But...I see a consonant... is a \"g\" in your sign? [y/n]\n");
                fflush(stdin);
                scanf("%c",&answer);
                if(answer=='y')// there is A,O,/I,G
                    printf("Of course! Because \"Sagetator\" is spelled with a \"g\" and no \"i\" :)\n");
                else if(answer=='n')// there is A,O,/I,/G
                    printf("Of course! Because there is no \"g\" in \"Varsator\". :)\n");
            }
        }
        else if(answer=='n')// there is A,/O
        {
            printf("Oh.. Ok, it happens...But...I see a consonant... is a \"r\" in your sign? [y/n]\n");
            fflush(stdin);
            scanf("%c",&answer);
            if(answer=='y')// there is A,/O,R
            {
                printf("I almost got it... I see the last vowel... is a \"u\" in your zodiac? [y/n]\n");
                fflush(stdin);
                scanf("%c",&answer);
                if(answer=='y')// there is A,/O,R,U
                    printf("Of course! Because \"Taur\" is spelled with a \"u\" and an \"o\". :)\n");
                else if(answer=='n')// there is A,/O,R,/U
                    printf("Of course! Because there is no \"u\" in \"Rac\". :)\n");
            }
            else if(answer=='n')// there is A,/O,/R
                printf("Of course! Because there is no \"r\" in \"Balanta\". :)\n");
        }
    }
    else if(answer=='n')// there is /A
    {
        printf("Oh.. Ok, it happens...But... No no... It was an \"e\" not an \"a\".. is an \"e\" in your sign? [y/n]\n");
        fflush(stdin);
        scanf("%c",&answer);
        if(answer=='y')// there is /A,E
        {
            printf("Ok... I see another letter but is blurry...The last letter... is it a vowel? [y/n]\n");
            fflush(stdin);
            scanf("%c",&answer);
            if(answer=='y')// there is /A,E,LV
            {
                printf("I am close.. Now I see... Is an \"i\" the last letter in your sign? [y/n]\n");
                fflush(stdin);
                scanf("%c",&answer);
                if(answer='y')// there is /A,E,LV,I
                {
                    printf("I almost got it... I see a consonant... is a \"n\" in your sign? [y/n]\n");
                    fflush(stdin);
                    scanf("%c",&answer);
                    if(answer='y')// there is /A,E,LV,I,N
                        printf("Of course! \"Gemeni\" is spelled with an \"n\" and no \"a\". :)\n");
                    else if(answer=='n')// there is /A,E,LV,I,/N
                        printf("Of course! Because there is no \"n\" in \"Pesti\". :)\n");
                }
                else if(answer=='n')// there is /A,E,LV,/I
                    printf("Of course! Because there is no \"i\" in \"Leu\". :)\n");
            }
            else if(answer=='n')// there is /A,E,/LV
                printf("Of course! Because there is no last vowel in \"Berbec\". :)\n");
        }
        else if(answer=='n')// there is /A,/E
            printf("Of course! Because there is no \"a\" or \"e\" in \"Scorpion\". :)\n");
    }

    scanf("%s",dummy);

    return 0;
}