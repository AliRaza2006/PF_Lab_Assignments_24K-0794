#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d %d",&a,&b);
	a>b?printf("%d is the greatest number",a):printf("%d is the greatest number",b);
	return 0;
}
