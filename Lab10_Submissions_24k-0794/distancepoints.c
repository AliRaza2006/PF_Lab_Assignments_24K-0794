#include<stdio.h>
#include<string.h>
#include<math.h>
typedef struct points
{
    float x;
    float y;
}points;
float distance(points p1,points p2)
{
    float dist=sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2));
    return dist;
}
void check(points test,points bottom,points top)
{
    float xmax,xmin;
    float ymax,ymin;
    if(bottom.x>=top.x)
    {
        xmax=bottom.x;
        xmin=top.x;
    }
    else if(bottom.x<=top.x)
    {
        xmin=bottom.x;
        xmax=top.x;
    }

    if(bottom.y>=top.y)
    {
        ymax=bottom.y;
        ymin=top.y;
    }
    else if(bottom.y<=top.y)
    {
        ymin=bottom.y;
        ymax=top.y;
    }

    if((test.x>=xmin && test.x<=xmax)&&(test.y>=ymin && test.y<=ymax))
    {
        printf("point (%.2f,%.2f) lies in the rectangular boundary\n",test.x,test.y);
    }
    else
    {
        printf("point (%.2f,%.2f) does not lies in the rectangular boundary\n",test.x,test.y);
    }
    
}
int main()
{
    points p1,p2;
    points test,bottom,top;
    printf("Enter coordinates of x and y for point 1: ");
    scanf("%f %f",&p1.x,&p1.y);
    printf("Enter coordinates of x and y for point 2: ");
    scanf("%f %f",&p2.x,&p2.y);
    printf("Distance: %f\n",distance(p1,p2));
    printf("Enter test point(x,y): ");
    scanf("%f %f",&test.x,&test.y);
    printf("Enter bottom left (x,y): ");
    scanf("%f %f",&bottom.x,&bottom.y);
    printf("Enter top right (x,y): ");
    scanf("%f %f",&top.x,&top.y);
    check(test,bottom,top);
}