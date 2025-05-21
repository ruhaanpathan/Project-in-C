# include <stdio.h>
void main()
{
    float height;
    float base;
    float answer;
    printf("enter the height of triangle ");
    scanf("%f",&height);
    printf("enter the value of base of triangle ");
    scanf("%f",&base);
    answer=height*base/2;
    printf("the area of triengle is %f",answer);
}