#include<stdio.h>
void main()
{
    int n,R;
    printf("enter n =");
    scanf("%d",&n);
     int q=n;
        R=n%10;
        while(q>9){
                q=q/10;
                
        }
        printf("%d\n",q);


    printf("%d",R);
}