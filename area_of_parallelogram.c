#include <stdio.h>
void main()
{
    float base;
    float height;
    float answer;
    printf("enter the base of your parallelogram  ");
    scanf("%f",&base);
    printf("enter the height of your parallelogram  ");
    scanf("%f",&height);
    answer = base*height;
    printf("the area of your parallelogram is %f",answer);
}