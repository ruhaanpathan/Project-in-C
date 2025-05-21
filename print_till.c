# include <stdio.h>
void main()
{
int a,b,c=1,d,e=1;
printf("enter the last number: ");
scanf("%d",&a);
for(b=1;b<=a;b++)
{
    printf("\n %d",b);
}
for(b=1;b<=a;b++)
{
   if(b%2==0)
   printf("\neven num %d",b);
}
for(a;a>=c;a--)
{
    printf("\n %d",a);
}
}