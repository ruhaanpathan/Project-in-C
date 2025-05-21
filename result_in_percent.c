#include <stdio.h>
void main()
{
    int a=200;
    int b=200;
    int c=200;
    int d=200;
    int e=200;
    float f;

    while(a>100||a<0)
    {
    printf("\nenter the marks of first subject: ");
    scanf("%d",&a);
    
    if (a>100)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    else if(a<0)
    {
     printf("\nplease enter the marks in the range of 0 to 100");   
    }
    }
    while(b>100||b<0)
    {
    printf("\nenter the marks of second subject: ");
    scanf("%d",&b);
    
    if (b>100)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    else if(b<0)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    }
    while(c>100||b<0)
    {
    printf("\nenter the marks of third subject: ");
    scanf("%d",&c);
    
    if (c>100)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    else if(c<0)
    {
        printf("\nplease enter the marks in the range of 0 to 100");

    }
    }
    while(d>100||d<0)
    {
    printf("\nenter the marks of forth subject: ");
    scanf("%d",&d);
    
    if (d>100)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    else if(d<0)
    {
    printf("\nplease enter the marks in the range of 0 to 100");
    }
    }
    while(e>100||e<0)
    {
    printf("\nenter the marks of fifth subject: ");
    scanf("%d",&e);
    
    if (e>100)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    else if(e<0)
    {
        printf("\nplease enter the marks in the range of 0 to 100");
    }
    }
    f=a+b+c+d+e;
    f=f/500;
    f=f*100;
    printf("\n\n\n%f percent",f);
    if(f>=70)
    {
        printf("\nGrade: A+\nPASSSS");
    }
    else if(f<=69&&f>=60)
    {
      printf("\nGrade: A\nPASSSS");
    }
    else if (f<=59&&f>=50)
    {
          printf("\nGrade: B\nPASSS");
    }
    else if(f<=49&&f>=40)
    {
          printf("\nGrade: C\nPASS");
    }
    else
    {
        printf("\nGrade: F\nBETTER LUCK NEXT TIME, SORRY BRO");
    }
}