[# include <stdio.h>
void main()
{]
int i,q,year,months,days;
float w;
int a[]={31,59,90,120,151,181,212,243,273,304,334};
printf("enter no of months: ");
scanf("%d",&i);
year=i/12;
w=i%12;
if (w!=0)
{ 
q=i-(year*12);
months=a[q-1];
year=year*365;
days=year+months;
printf("no of days is %d",days);
}
else{
year=year*365;
printf("no of days %d",year);
}



}