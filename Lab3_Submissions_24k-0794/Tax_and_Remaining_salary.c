#include<stdio.h>
int main()
{
int sal;
float tax_rate;
printf("Enter your salary:");
scanf("%d",&sal);
printf("Enter tax rate:");
scanf("%f",&tax_rate);
float tax=sal*tax_rate/100;
float remaining_sal=sal-tax;
printf("Tax:%.2f\n",tax);
printf("Salary after paying the tax:%.2f",remaining_sal);
return 0;
}