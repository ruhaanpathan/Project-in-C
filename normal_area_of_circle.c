# include <stdio.h>
void main()
{

    float radius;
    float answer=0;
    char e;
    while (answer == 0) {
        printf("\nenter the radius of your circle ");
        scanf("%f",&radius);
        scanf("%c",&e);
        answer=3.14*radius*radius;
        printf("answer is %f",answer);
    }
}