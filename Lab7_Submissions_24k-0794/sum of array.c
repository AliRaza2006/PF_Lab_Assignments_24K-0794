#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d:",i+1);
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("Sum of %d elements is:%d",n,sum);
	return 0;
}
