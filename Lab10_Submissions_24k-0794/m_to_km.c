#include<stdio.h>
#include<string.h>
#define conv 0.001
int mkm(int meter)
{
    static int count=0;
    if(meter!=0)
    {
    printf("Kilometers: %.3f\n",meter*conv);
    count++;
    }
    return count;
}
int main()
{
    int ch;
    int m,km;
    while (1)
    {
        printf("Choose from following: \n");
        printf("1. Meters to kilometers\n");
        printf("Any other key to exit\n");
        printf("Choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("Enter distance in meters: ");
            scanf("%d",&m);
            mkm(m);
            break;
            default:
            printf("Function was called %d times",mkm(0));
            return 0;
        }
    }
    printf("Function was called %d times",mkm(0));    
    return 0;
}