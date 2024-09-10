# include<stdio.h>
void main()
{
    int i[10],r,j,t;
    for(r=0;r<=9;r++)
    {
      printf("\n enter the no: ");
      scanf("%d",&i[r]);

    }
    printf("list:");

    for(r=0;r<=9;r++)
    {
      for(j=r+1;j<10;j++){
        if(i[r]>i[j])
        {
          t=i[r];
          i[r]=i[j];
          i[j]=t;
        }

      }
    }
     printf("\nThe ascending order of the 10 numbers is:");
    for(r=0;r<10;r++)
    {
      printf("\n%d",i[r]);
    }
    for(r=0;r<=9;r++)
    {
      for(j=r+1;j<10;j++){
        if(i[r]<i[j])
        {
          t=i[r];
          i[r]=i[j];
          i[j]=t;
        }

      }
    }
    printf("\nThe descending order of the 10 numbers is:");
    for(r=0;r<10;r++)
    {
      printf("\n%d",i[r]);
    }
}