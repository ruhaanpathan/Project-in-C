# include<stdio.h>
void main()
{
int i=1;
while(i<=10)
{
    printf("\n%d",i);
    i=i+2;
}
char password[13];
char ip[13];
password="myskillisbig";
printf(" enter: ");
scanf("%f",ip);
if(ip==password)
{
    printf("hii");
}
else{
    printf("hello");
}
}