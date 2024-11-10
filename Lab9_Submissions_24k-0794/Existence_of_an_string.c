#include<stdio.h>
#include<string.h>
int main()
{
    char words[10][20]={"FAST","Pasta","Valorant","Assignments","Quizes","Mids","Programming","Gaming","Spotify"};
    char input[100];
    int ispresent=0;
    printf("Enter an input string: ");
    scanf("%99[^\n]",input);
    getchar();
    for(int i=0;i<10;i++)
    {
        if(strcmp(input,words[i])==0)
        {
        ispresent=1;
        break;
        }
    }
    if(ispresent==1)
        printf("%s is available in the intialized string",input);
    else
        printf("%s is not available in the initialized string",input);
}