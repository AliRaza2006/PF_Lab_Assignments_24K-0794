#include<stdio.h>
int main()
{
    int arr[2][3][3]=
    {
    {{1,2,3},{4,5,6},{7,8,9}},
    {{10,11,12},{13,14,15},{16,17,18}}
    };
    int sum;
    for(int i=0;i<2;i++)
    {
        sum=0;
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                sum+=arr[i][j][k];
            }
        }
        printf("sum of elements on page %d is: %d\n",i+1,sum);
    }
}