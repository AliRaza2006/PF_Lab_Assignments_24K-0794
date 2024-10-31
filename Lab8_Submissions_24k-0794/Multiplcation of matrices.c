#include<stdio.h>
int main()
{
    int arr1[3][3],arr2[3][3],result[3][3]={0};
    int i,j,k;
    printf("Enter the first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&arr1[i][j]);
    }
    printf("Enter the second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        scanf("%d",&arr2[i][j]);
    }
    printf("Multiplication of two matrices is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                result[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf("Product:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d ",result[i][j]);
        printf("\n");
    }
}