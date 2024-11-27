#include<stdio.h>
#include<string.h>
#define maxind 100
typedef struct travel
{
    char name[30];
    char dest[30];
    float duration;
    float cost;
    int seats;
}travel;
void add(travel* t,int* i)
{
    if(*i>maxind)
    {
        printf("\nMaximum cars added!");
    }
    else
    {
    printf("\nEnter name of the package: ");
    scanf(" %[^\n]",t->name);
    printf("Enter destination: ");
    scanf(" %[^\n]",t->dest);
    printf("Enter duration: ");
    scanf("%f",&t->duration);
    printf("Enter cost in usd: ");
    scanf("%f",&t->cost);
    printf("Enter seats available: ");
    scanf("%d",&t->seats);
    (*i)++;
    }
}
void display(travel* t,int i)
{
    int ind;
    for(ind=0;ind<i;ind++)
    {
    printf("\nPackage %d\n",ind+1);
    printf("Name of the package: %s\n",t[ind].name);
    printf("Destination: %s\n",t[ind].dest);
    printf("Duration: %f\n",t[ind].duration);
    printf("Cost in usd: %f\n",t[ind].cost);
    printf("Seats available: %d\n",t[ind].seats);
    }
}
void book(travel* t,int ind)
{
    char name[30];
    int i,found;
    printf("\nEnter the name of package to book: ");
    scanf(" %[^\n]",name);
    for(i=0;i<ind;i++)
    {
        if(strcmp(t->name,name)==0)
        {
            found=1;
            break;
        }
    }
    if(found)
    {
    if(t[i].seats==0)
    {
        printf("Max seats booked!\n");
    }
    else
    {
        t->seats-=1;
        printf("Package \"%s\" booked\n",t[i].name);      
    }
    }
}
int main()
{
    travel t1[maxind];
    int index=0;
    int choice;
    while(1)
    {
        printf("\nChoose from the following:\n");
        printf("1. Add records\n");
        printf("2. Display all Records\n");
        printf("3. Book a package\n");
        printf("Other key to exit\n");
        printf("Choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            add(t1,&index);
            break;
            case 2:
            display(t1,index);
            break;
            case 3:
            book(t1,index);
            break;
            default:
            return 0;
        }
    }
    return 0;
}