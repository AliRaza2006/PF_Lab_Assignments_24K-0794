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
    printf("Reversed order:\n");
    int count=n;
    for(i=n-1;i>=0;i--)
	{
		
		printf("number%d:%d\n",count--,a[i]);
    }
}
