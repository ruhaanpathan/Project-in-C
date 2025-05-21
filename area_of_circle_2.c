# include <stdio.h>
void main()
{

    int radius;
    int answer=0;
    char e;
    while (answer == 0) {
        printf("\nenter the radius of your circle ");
        scanf("%d",&radius);
        scanf("%c",&e);
        answer=radius*radius;
        printf("answer is %d",answer);
    }
}