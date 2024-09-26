#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number:");
	scanf("%d %d",&a,&b);
	a>b?printf("%d is greatest",a):printf("%d is greatest",b);
	return 0;
}
