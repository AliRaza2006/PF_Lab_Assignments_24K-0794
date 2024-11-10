#include<stdio.h>
#include<string.h>
void rev(char str[100])
{
    char reversed[100];
    for(int i=0;i<strlen(str);i++)
    {
        reversed[i]=str[strlen(str)-i-1];
    }
    printf("%s",reversed);
}
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]",str);
    rev(str);
}