#include<stdio.h>
int main()
{
char customer_id[15],customer_name[50];
int units_consumed;
float charge_unit;
printf("Customer ID:");
scanf(" %s",&customer_id);
getchar();
printf("Customer Name:");
fgets(customer_name, 50, stdin);
printf("Units Consumed:");
scanf("%d",&units_consumed);
if(units_consumed>0 && units_consumed<=199)
charge_unit=16.20;
else if(units_consumed>=200 && units_consumed<300)
charge_unit=20.10;
else if(units_consumed>=300 && units_consumed<500)
charge_unit=27.10;
else if(units_consumed>=500)
charge_unit=35.90;
float amount=charge_unit*units_consumed;
float surcharge=0;
if(amount>18000)
{
surcharge=amount*(15.0/100);
printf("Amount Charges @Rs. %.2f per unit:%.2f\n",charge_unit,amount);
printf("Surcharge Amount:%.2f\n",surcharge);
printf("Net Amount Paid by the Customer:%.2f",surcharge+amount);
}
else
{
printf("Amount Charges @Rs. %.2f per unit:%.2f\n",charge_unit,amount);
printf("Surcharge Amount:%.2f\n",surcharge);
printf("Net Amount Paid by the Customer:%.2f",surcharge+amount);
}
return 0;
}