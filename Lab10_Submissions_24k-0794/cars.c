#include<stdio.h>
#include<string.h>
#define maxind 100
typedef struct cars
{
    char make[30];
    char model[30];
    int year;
    float price;
    float mileage;
}cars;
void add(cars* c1,int* i)
{
    if(*i>maxind)
    {
        printf("Maximum cars added!");
    }
    else
    {
    printf("Enter make of the car: ");
    scanf(" %[^\n]",c1->make);
    printf("Enter model of the car: ");
    scanf(" %[^\n]",c1->model);
    printf("Enter release year: ");
    scanf("%d",&c1->year);
    printf("Enter price in usd: ");
    scanf("%f",&c1->price);
    printf("Enter mileage: ");
    scanf("%f",&c1->mileage);
    (*i)++;
    }
}
void display(cars* c1,int ind)
{
    int i;
    for(i=0;i<ind;i++)
    {
    printf("\nCar %d data\n",i+1);
    printf("make of the car: %s\n",c1[i].make);
    printf("model of the car:%s\n",c1[i].model);
    printf("release year:%d\n",c1[i].year);
    printf("price in usd:%.3f\n",c1[i].price);
    printf("mileage:%.3f\n",c1[i].mileage);
    }
}
void search(cars* c1,int ind,int ch)
{
    int found=0,i;
    if(ch==1)
    {
        char mk[30];
        printf("\nEnter make: ");
        scanf(" %[^\n]",mk);
        for(i=0;i<ind;i++)
        {
            if(strcmp(c1[i].make,mk)==0)
            {
                found=1;
            }
            if(found)
            {
                printf("Car %d data\n",i+1);
                printf("make of the car: %s\n",c1[i].make);
                printf("model of the car:%s\n",c1[i].model);
                printf("release year:%d\n",c1[i].year);
                printf("price in usd:%.3f\n",c1[i].price);
                printf("mileage:%.3f\n",c1[i].mileage);
            }
        }
        if(!found)
        {
            printf("Make not found!\n");
        }
    }
    else if(ch==2)
    {
        found=0;
        char mod[30];
        printf("\nEnter model: ");
        scanf(" %[^\n]",mod);
        for(i=0;i<ind;i++)
        {
            if(strcmp(c1[i].model,mod)==0)
            {
                found=1;
            }
            if(found)
            {
                printf("Car %d data\n",i+1);
                printf("make of the car: %s\n",c1[i].make);
                printf("model of the car:%s\n",c1[i].model);
                printf("release year:%d\n",c1[i].year);
                printf("price in usd:%.3f\n",c1[i].price);
                printf("mileage:%.3f \n",c1[i].mileage);
            }
        }
        if(!found)
        {
            printf("Model not found!\n");
        }
    }
    else
    printf("Invalid choice!\n");
}
int main()
{
    cars c[maxind];
    int i=0;
    while(1)
    {
    printf("\nEnter your choice from following:\n");
    printf("1. Add a record\n");
    printf("2. Display Record\n");
    printf("3. Search by make or model\n");
    printf("Any other button to exit");
    printf("\nChoice: ");
    int choice;
    scanf("%d",&choice);
    if(choice<1 || choice>3)
    return 0;
    switch(choice)
    {
        case 1:
        add(c,&i);
        break;
        case 2:
        display(c,i);
        break;
        case 3:
        printf("\nSearch by\n1.Make\n2.Model\nChoice: ");
        scanf("%d",&choice);
        search(c,i,choice);
    }
    }
    return 0;
}