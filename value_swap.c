# include<stdio.h>
void main()
{
    int a,b;
    a=5;
    b=10;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d",a);
    printf("\n%d",b);
}