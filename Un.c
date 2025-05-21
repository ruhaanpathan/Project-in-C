# include<stdio.h>
void main()
{
    /* 
    4
    9 16
    16 25 36
    25 36 49 64
    */
    float rupees;
    float dollar;
    float difference = 83.88; // difference of money between rupees and dollar
    printf("\nconvertion of dollar to rupees");
    printf("\nenter the amount of money in rupees ");
    scanf("%f",&rupees);
    dollar=rupees/difference;
    printf("\nthe amount of money in dollar is %f\n",dollar);
}