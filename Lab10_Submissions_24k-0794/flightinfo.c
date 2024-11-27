#include<stdio.h>
#include<string.h>
typedef struct flight
{
    int flight_number;
    char dest[30];
    char dep[30];
    char date[30];
    int seats;
}flight;
int book_a_seat(flight* f)
{
    if(f->seats==0)
    {
    printf("All seats are booked");
    return 0;
    }
    else
    {
    printf("Enter flight number: ");
    scanf("%d",&f->flight_number);
    printf("Enter destination city: ");
    scanf(" %[^\n]",f->dest);
    printf("Enter departure city: ");
    scanf(" %[^\n]",f->dep);
    printf("Enter date : ");
    scanf(" %[^\n]",f->date);
    printf("Flight booked succesfully!\n\n");
    f->seats-=1;
    return 1;
    }
}
void display(flight f)
{
    printf("Flight Number: %d\n",f.flight_number);
    printf("Destination City: %s\n",f.dest);
    printf("Departure City: %s\n",f.dep);
    printf("Date:%s \n",f.date);
    printf("Seats available: %d",f.seats);
}
int main()
{
    flight f1;
    printf("How many seats are available?: ");
    scanf("%d",&f1.seats);
    if(book_a_seat(&f1)!=0)
    {
        display(f1);
    }
    return 0;
}