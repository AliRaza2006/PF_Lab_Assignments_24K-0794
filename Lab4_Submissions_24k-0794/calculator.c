#include<stdio.h>
int main()
{
char op;
float num1,num2;
printf("Enter the first number:");
scanf(" %f",&num1);
printf("Enter the second number:");
scanf(" %f",&num2);
printf("Enter an operator:");
scanf(" %c",&op);
switch(op)
{
case '+':
printf("sum:%.2f",num1+num2);    
break;

case '-':
printf("subtraction of num2 - num1 :%.2f \nsubtraction of num1 - num2: %.2f",num2-num1, num1-num2);
break;

case '*':
printf("product:%.2f",num1*num2);
break;

case '/':
if(num2!=0)
printf("division of num1/num2:%.2f \ndivision of num2/num1=%.2f",num1/num2,num2/num1);
else
printf("division by zero is not allowed");
break;

default:
printf("invalid operator");
}
return 0;
}