#include <stdio.h>
int main() 
{
    int s,e,i,j,count=0,isprime;
    printf("Enter Range:\n");
    printf("Start:");
    scanf("%d",&s);
    printf("End:");
    scanf("%d",&e);
    for(i=s;i<=e;i++)
    {
        isprime=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime==1)
        {
            printf("%d is a prime number\n",i);
            count++;
        }
    }
    if(count==0)
    printf("No prime numbers found!");
    return 0;
}