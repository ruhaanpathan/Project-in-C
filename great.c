# include <stdio.h>

void main()
{
int a,b,c;
printf("enter a: ");
scanf("%d",&a);
printf("enter b: ");
scanf("%d",&b);
printf("enter c: ");
scanf("%d",&c);

if(a>=b&&a>=c)
{
    printf("greatest is a having value %d",a);
    if(a==b)
    {
        printf("\na and b both having value %d are greater ",a);
    }
    else if(a==c)
    {
        printf("\na and c both having value %d are greater ",a);
    }
    

}
else if (b>=a&&b>=c)
{
    printf("greatest is b having value %d",b);
    if(b==a)
    {
        printf("\na and b both having value %d are greater ",b);
    }
    else if(b==c)
    {
        printf("\n%d b and c both having value %d are greater ",b);
    }
    
}
else if (c>=a&&c>=b)
{
    printf("greatest is c having value %d",c);
    if(c==b)
    {
        printf("\n%d c and b both having value %d are greater ",c);
    }
    else if(c==a)
    {
        printf("\na and c both having value %d are greater ",c);
    }
    
}
}