#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(i=1;i<n;i++)
    {
    	if(max<a[i])
    	max=a[i];
        if(min>a[i])
    	min=a[i];
	}
	printf("Maximum:%d\nMinimum:%d",max,min);
}
