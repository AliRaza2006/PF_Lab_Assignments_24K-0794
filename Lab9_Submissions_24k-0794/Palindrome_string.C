#include<string.h>
#include<stdio.h>
int main()
{
    char words[5][20];
    int ispalindrome;
    printf("Enter words:\n");
    for(int k=0;k<5;k++)
        {
        scanf("%[^\n]",words[k]);
        getchar();
        }
    printf("\n");
    for(int i=0;i<5;i++)
    {
        ispalindrome=1;
        for(int j=0;j<strlen(words[i]);j++)
        {
            ispalindrome=0;
            if(words[i][j]==words[i][strlen(words[i])-j-1])
                ispalindrome=1;
            else
                {
                ispalindrome=0;
                break;
                }
        }
        if(ispalindrome==1)
        {
            printf("%s is a palindrome string\n",words[i]);
        }
    }
}