#include<stdio.h>
#include<stdlib.h>
int main()
{
	float attendance,exam,assignments;
	printf("Enter attendance percentage:");
	scanf("%f",&attendance);
	printf("Enter exam score:");
	scanf("%f",&exam);
	printf("Enter assignment marks:");
	scanf("%f",&assignments);
	if(exam<0 || exam>90 || assignments<0 || assignments>10 || attendance<0 || attendance>100)
	{
	printf("invalid values!");
	exit(0);
    }
    float total=assignments+exam;
    if(total>=90)
    {
    	if(attendance>75)
    	printf("A+ Grade");
    	else
    	printf("A- Grade");
	}
        else if(total>=75 && total<90)
    {
    	if(attendance>70 && attendance<=75)
    	printf("B+ Grade");
    	else
    	printf("B- Grade");
	}
	    else if(total>=60 && total<75)
    {
    	if(attendance>65 && attendance<=70)
    	printf("C+ Grade");
    	else
    	printf("D Grade");
	}
	    else
	    printf("F grade");
    return 0;
}
