#include <stdio.h>
int main()
{
    int t1=1,t2=2,mult;
    printf("%d %d ",t1,t2);
    //The loop runs until 8 because after that, the integer limit is exceeded.
    for(int i=1;i<8;i++)
    {
        mult=t1*t2;
        printf("%d ",mult);
        t1=t2;
        t2=mult;
    }
}