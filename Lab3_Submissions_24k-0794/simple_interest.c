#include<stdio.h>
int main()
{
int principle, time;
float interest_rate,interest;
printf("enter principle value(100-1000000):");
scanf("%d",&principle);
if(principle>=100 && principle<=1000000)
{
printf("Enter rate of interest(5%% - 10%%):");
scanf("%f",&interest_rate);
if(interest_rate>=5 && interest_rate<=10)
{
printf("Enter time period(1 year-10 years):");
scanf("%d",&time);
if(time>=1 && time<=10)
{
interest=principle*interest_rate*time/100;
printf("simple interest:%.2f",interest);
}
else
printf("you entered wrong value for time");
}
else
printf("interest rate value is wrong");
}
else
printf("principle value is wrong");
}