#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a,iterate=0;
	bool prime=true;
	printf("Enter a number:");
	scanf("%d",&a);
	int temp=a;
	while(a!=0)
	{
		a=a/10;
		iterate+=1;
	}
	if(iterate==1 || temp==0)
		printf("%d is a single digit number\n",temp);
	else
	    printf("%d is %d digit number\n",temp,iterate);
	for(int i=2;i<=temp/2;i++)
	{
		if(temp%i==0)
	    {
		prime=false;
		break;
	    }
	}
	if(temp<2)
	printf("%d is neither prime nor composite",temp);
	else if(prime==true)
	printf("%d is a prime number",temp);
	else if(prime==false)
	printf("%d is a composite number",temp);
}