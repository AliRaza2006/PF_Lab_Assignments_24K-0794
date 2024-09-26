#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,rem,count=0;
	int store[64],i=0;
	printf("Enter a number in decimal:");
	scanf("%d",&n);
	int num=n;
	while(n!=0)
	{
		rem=n%2;
		n/=2;
		store[i++]=rem;
		if(rem==1)
		{
			count+=1;
		}
	}
	printf("Binary:");
	for(int j=i-1;j>=0;j--)
	{
		printf("%d",store[j]);
	}
	printf("\nnumber of 1s Binary form of %d is %d",num,count);
}
