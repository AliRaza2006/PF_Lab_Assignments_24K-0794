#include<stdio.h>
#define MAX_TEMP 100
int check()
{
    static int count=0;
    count++;
    return count;
}
int main()
{

    int n,i,store=0;
    printf("How many temperatures do you want to enter?: ");
    scanf("%d",&n);
    float arr[n];
    printf("Enter temps:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&arr[i]);
        if(arr[i]>MAX_TEMP)
        {
            store=check();
        }
    }
    printf("\n%d times temperature exceeded the max temperature",store);
    return 0;
}
