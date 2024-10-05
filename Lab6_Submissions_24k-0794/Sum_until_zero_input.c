//While loop is the best option for user input.
#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		sum+=a;
		printf("Sum:%d\n",sum);
		printf("Enter a number:");
	    scanf("%d",&a);
	}
	printf("User entered 0");
}