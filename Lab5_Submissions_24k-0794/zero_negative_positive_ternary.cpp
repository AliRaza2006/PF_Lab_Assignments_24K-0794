//2. Use the ternary operator to check if a number is positive, negative, or zero.
#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	n>0?printf("%d is a positive number",n):n<0?printf("%d is a negative number",n):printf("%d is zero",n);
	return 0;
}
