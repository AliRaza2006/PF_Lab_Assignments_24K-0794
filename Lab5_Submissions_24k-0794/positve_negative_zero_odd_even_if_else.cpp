#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	if(n>0)
	{
		printf("%d a positive number\n",n);
		if(n%2==0)
	    printf("%d is also an even number",n);
        else
		printf("%d is also an odd number",n);	
	}
	else if(n==0)
	printf("%d is zero",n);
	else
	printf("%d a negative number\n",n);
}
