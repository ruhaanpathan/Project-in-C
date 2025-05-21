/* 5*4 array  */
# include <stdio.h>
void main()
{
int x[2][7];

for(int i =0;i<2;i++)
{
     if(i==0)
     {
        printf("enter temp of rajkot");
     }
    else if (i==1)
    {
        printf("enter temp of ahmedabad");
    }
    for (int j=0;j<7;j++)
    {
        int k=j;
        printf("\nday %d= ",k+1);
        scanf("%d",&x[i][j]);
        
       
    }
    printf("\n");
}
    for(int i =0;i<2;i++)
{
    if(i==0)
    {
        printf("rajkot   ");
    }
    else if (i==1)
    {
    printf("ahmedabad");
    }
    for (int j=0;j<7;j++)
    {
           int k=j;
            printf(" | day %d=%d",k+1,x[i][j]);
   
    }
    printf("\n");
}
int w=0;
for(int i=0;i<2;i++){
    for(int j=0;j<7;j++)
    {
        
        w+=x[i][j];
    }
}
printf("%d",w);

}