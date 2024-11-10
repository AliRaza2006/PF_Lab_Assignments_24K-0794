#include<stdio.h>
void prod(int x,int y)
{
    printf("%d",x*y);
}
int main()
{
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    prod(a,b);
}