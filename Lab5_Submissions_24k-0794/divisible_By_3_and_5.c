#include<stdio.h>
int main()
{
int n;
printf("Enter a number:");
scanf("%d",&n);
if(n%5==0 && n%3==0)
printf("%d is divisible by both 3 and 5",n);
else
printf("%d is not divisible by 3 and 5",n);	
}
