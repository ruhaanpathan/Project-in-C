// 4
// 9 16
// 16 25 36
// 25 36 49 64

# include <stdio.h>
void main()
{
    for (int i=1;i<=4;i++)
    {
        for(int j=1;j<=i;j++)
        {            
            printf("%d ", (i+j)*(i+j));
        }
        printf("\n");
    }
}