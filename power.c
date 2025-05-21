#include <stdio.h>
void main()
{
    int a,b,d,e=1;
    char r;
    printf("enter: ");
    scanf("%d",&a);
for (b=1;b<=a;b++)
{
    if(e==1)
    {printf("\n%d",e);}

    d=2*e;
    printf("\n%d",d);
    e=d;
}
printf("\nenter char: ");
scanf("%c",&r);

if(r=='a'||r=='e'||r=='i'||r=='o'||r=='u')
{
    printf("\nvowel");
}
else{
    printf("\nnot vowel");
}

}