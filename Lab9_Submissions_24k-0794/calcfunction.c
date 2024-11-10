#include<stdio.h>
int choice;
void printoptions()
{
    printf("Choose from the options given below:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Other number to Exit\n");
}
void sum(int x,int y)
{
printf("sum: %d\n",x+y);
}

void subtraction(int x,int y)
{
    if(choice==1)
    printf("difference: %d\n",x-y);
    else if(choice==2)
    printf("difference: %d\n",y-x);
}
void product(int x,int y)
{
    printf("Product: %d\n",x*y);
}
void division(int x,int y)
{
    if(choice==1)
    {
    if(y!=0)
    printf("division: %f\n",(float)x/y);
    else
    printf("Division not possible\n");
    }
    else if(choice==2)
    {
    if(x!=0)
    printf("division: %f\n",(float)y/x);
    else
    printf("Division not possible\n");
    }
}
int main()
{
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    while(1)
    {
    int opt;
    printoptions();
    printf("option: ");
    scanf("%d",&opt);
    switch(opt)
    {
        case 1:
        sum(a,b);
        break;
        case 2:
        printf("Choose from the following:\n");
        printf("1. a-b\n");
        printf("2. b-a\n");
        printf("option: ");
        scanf("%d",&choice);
        subtraction(a,b);
        break;
        case 3:
        product(a,b);
        break;
        case 4:
        printf("Choose from the following:\n");
        printf("1. a/b\n");
        printf("2. b/a\n");
        printf("option: ");
        scanf("%d",&choice);
        division(a,b);
        break;
        default:
        return 0;
    }
    }
}