#include<stdio.h>
#include<math.h>
float triangle(float,float);
int main()
{
int area ;
float b,h;
    printf("enter the base of triangle \n");
    scanf("%f",&b);
    printf("enter the height of the triangle \n");
    scanf("%f",&h);
 triangle(b,h);
   area=triangle(b,h);
   printf("the area of triangle of given base and height is %d",area);
return 0;
}
(float triangle(float b,float h);
{
    float area;
    area=0.5*b*h;
return area;
}
