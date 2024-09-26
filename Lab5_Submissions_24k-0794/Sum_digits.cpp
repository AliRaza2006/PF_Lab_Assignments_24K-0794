#include<stdio.h>
int main()
{
	int num,sum=0,dig;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num!=0)
	{
		dig=num%10;
		sum+=dig;
		num/=10;
	}
	printf("Sum of the digits is %d",sum);
    return 0;
}
