#include<stdio.h>
void checkprime(int arr[],int size)
{
    int isprime;
    for(int i=0;i<size;i++)
    {
        isprime=1;
        if(arr[i]<=1)
        printf("%d is neither prime nor composite!\n",arr[i]);
        else
        {
        for(int j=2;j<=arr[i]/2;j++)
        {
            if(arr[i]%j==0)
            {
                isprime=0;
                break;
            }
        }
        if(isprime)
        printf("%d is a prime number\n",arr[i]);
        else if(!isprime)
        printf("%d is a composite number\n",arr[i]);
        }
    }
}
int main()
{
    int n;
    printf("How many numbers do you want to enter: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter an array of numbers:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    checkprime(a,n);
}