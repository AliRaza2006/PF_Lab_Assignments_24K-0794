#include<stdio.h>
int main()
{
    int start;
    printf("Enter starting range: ");
    scanf("%d",&start);
    for(int i=start;i<1;i-=2)
    {
        for(int j=i;j<1;j-=2)
        printf("%d",j);
        printf("\n");
    }
}