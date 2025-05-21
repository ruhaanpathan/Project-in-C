#include <stdio.h>
void main()
{
    float length;
    float bregth;
    float answer; 
    printf("enter the lenght of rectangle  ");
    scanf("%f",&length);
    printf("enter the bregth of rectangle  ");
    scanf("%f",&bregth);
    answer=length*bregth;
    printf("the area of rectangle is %f",answer);    
}