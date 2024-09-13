#include<stdio.h>
int main()
{
int cost; 
float discount;
printf("Enter the cost of the item:");
scanf("%d",&cost);
if(cost>=500 && cost<2000)
discount=5;
else if(cost>=2000 && cost<4000)
discount=10;
else if(cost>=4000 && cost<=6000)
discount=20;
else if(cost>6000)
discount=35;
else
discount=0;
printf("Bill:\nAmount without discount:%d\nDiscount:%.2f\nAmount with discount=%.2f",cost,cost*(discount/100),cost-cost*(discount/100));
}