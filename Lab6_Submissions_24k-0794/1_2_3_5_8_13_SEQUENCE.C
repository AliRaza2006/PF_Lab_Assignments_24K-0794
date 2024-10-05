#include <stdio.h>
int main()
{
    int t1=1,t2=2,sum,n;
    printf("Enter how many terms do you want to print:");
    scanf("%d",&n);
    printf("%d %d ",t1,t2);
    for(int i=1;i<n;i++)
    {
        sum=t1+t2;
        printf("%d ",sum);
        t1=t2;
        t2=sum;
    }
}