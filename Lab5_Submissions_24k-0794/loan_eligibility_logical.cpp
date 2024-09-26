#include<stdio.h>
int main()
{
	int cred,age,income;
	printf("Enter Age:");
	scanf("%d",&age);
	printf("Enter income:");
	scanf("%d",&income);
	printf("Enter credit score:");
	scanf("%d",&cred);
	if(age>=18 && income<=100000 && cred>=70)
	    printf("Eligible for loan");
	else
	    printf("Ineligible for loan");
    return 0;
    
}
