#include<stdio.h>
int main()
{
	int age;
	printf("Enter age:");
	scanf("%d",&age);
	if(age>=0 && age<=19)
	{
		if(age<=12)
		printf("child");
		else
		printf("teenager");
	}
	else
	{
		if(age<=64)
		printf("adult");
		else
		printf("senior");
	}
	return 0;
}
