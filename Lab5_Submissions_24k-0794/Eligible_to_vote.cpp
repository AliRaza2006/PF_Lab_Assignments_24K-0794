#include<stdio.h>
#include<string.h>
int main()
{
	int age;
	char citizenship[25];
	printf("Enter age:");
	scanf("%d",&age);
	printf("Enter citizenship:");
	scanf("%s",citizenship);
	if(age>=18 && strcmp(citizenship,"Pakistan")==0)
	printf("Eligible for voting");
	else
	printf("Ineligible for voting");
}
