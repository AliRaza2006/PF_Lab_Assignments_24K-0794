#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char src[50];
    char des[100];
    printf("Enter the value of n: ");
    scanf("%d",&n);
    getchar();
    printf("Source string: ");
    scanf("%[^\n]",src);
    getchar();
    printf("Destination string: ");
    scanf("%[^\n]",des);
    getchar();
    printf("concetanated: %s",strncat(des,src,n));
}