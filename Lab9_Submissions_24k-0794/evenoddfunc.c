#include<stdio.h>
void evenodd(int x)
{
    if(x%2==0)
    printf("%d is even",x);
    else
    printf("%d is odd",x);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    evenodd(n);
}