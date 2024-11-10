#include<stdio.h>
void swap(int x,int y)
{
    x+=y;
    y=x-y;
    x-=y;
    printf("After swapping:\n");
    printf("First number: %d\n",x);
    printf("Second number: %d",y);
}
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    swap(a,b);
}