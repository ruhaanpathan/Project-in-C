#include<stdio.h>
void main()
{
    int r;
    r=1;
    int n;
    n=1;
   
    while(n!=0)
    {
         scanf("%d",&r);
    printf("%d",r);
    int n=r;
        if(n%10==1 || n%10==2 || n%10==3 || n%10==3 || n%10==4 || n%10==4 || n%10==5 || n%10==6 || n%10==7 || n%10==8 || n%10==9 || n%10==0)
        {
            n=n/10;
            continue;
        }
        else{
            printf("invalid number");
        }
    }
}