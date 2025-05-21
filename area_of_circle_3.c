# include <stdio.h>
void main()
{

    float radius;
    float answer=0;
    while (answer == 0) 
{
        printf("\nenter the radius of your circle ");
        scanf("%f",&radius);
        answer=radius*radius;
        printf("answer is %f",answer);
}
}