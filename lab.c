# include <stdio.h>
void main()
{
    int i[10], w ,sum=0;
    for (w=0;w<=9;w++)
    {
    printf("ENTER THE NUM ");
    scanf("%d",&i[w]);
    if(i[w]<0)
    {
        continue;
    }
    else{
       sum= sum + i[w];
    }
    
    }
    
    printf("%d",sum);

}