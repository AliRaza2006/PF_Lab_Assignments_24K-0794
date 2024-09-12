#include<stdio.h>
int main()
{
const int dis=1207;
float fuel_avg;
printf("Enter fuel average in km per liter:");
scanf("%f",&fuel_avg);
if(fuel_avg>0)
{
int forward_trip_price=118, returning_trip_price=123;
float fuel_consumed=(dis*2.0)/fuel_avg;
float total_cost=fuel_consumed*(forward_trip_price + returning_trip_price);
printf("fuel cost=%.2f\n",total_cost);
printf("fuel consumed=%.2f",fuel_consumed);
}
else
printf("enter positve value for fuel average!");
return 0;
}