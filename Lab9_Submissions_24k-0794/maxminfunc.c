#include<stdio.h>
void maxmin(int a[],int n)
{
    int min=a[0];
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
        else if(min>a[i])
        min=a[i];
    }
    printf("max:%d\nmin:%d",max,min);
}
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int a[n];
    printf("Enter values:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    maxmin(a,n);
}