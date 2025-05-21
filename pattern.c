#include <stdio.h>
void printDiamond(int n)
{
    int spaces = n - 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        spaces--;
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    spaces = 1;
    for (int i = 1; i <= n - 1; i++)
    {
        for (int j = 1; j <= spaces; j++)
        {
            printf(" ");
        }
        spaces++;
        for (int j = 1; j <= 2 * (n - i) - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void main()
{
    // 4
    // 9 16
    // 16 25 36
    // 25 36 49 64

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", (i + j) * (i + j));
    //     }
    //     printf("\n");
    // }

    // 1
    // 2 4
    // 3 6 9
    // 4 8 12 16

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%d ", (i * j));
    //     }
    //     printf("\n");
    // }

    // 1
    // 1 0
    // 1 0 1
    // 1 0 1 0

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if (j == 1 || j == 3 || j == 5)
    //         {
    //             printf("1");
    //         }
    //         else
    //         {
    //             printf("0");
    //         }
    //     }
    //     printf("\n");
    // }

    // 1
    // 0 1
    // 1 0 1
    // 0 1 0 1

    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i + j) % 2 == 0)
    //         {
    //             printf("1 ");
    //         }
    //         else
    //         {
    //             printf("0 ");
    //         }
    //     }
    //     printf("\n");
    // }

    // A
    // B B
    // C C C
    // D D D D

    // char p = 'A';
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%c ", p);
    //     }
    //     printf("\n");
    //     p++;
    // }

    // @
    // ? ?
    // > > >
    // = = = =

    // char a = '@';
    // for (int i = 1; i <= 4; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         printf("%c ", a);
    //     }
    //     printf("\n");
    //     a--;
    // }

    int n;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    printDiamond(n);
    /*
                1
              2 3 2
            3 4 5 4 3
          4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5
      6 7 8 9 10 11 10 9 8 7 6

*/
/*
    int rows = 6;
    for (int i = 1; i <= rows; i++){
        int num = i;
        for (int j = rows; j >= i; j--)
        {
            printf("  ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("%d ", num);
            num++;
        }
        for (int k = 0; k < i-1; k++)
        {
            num--;
            printf("%d ", num-1);
        }
        printf("\n");
    }
    */

   // 0 0 0 0 0 36
   // 0 0 0 0 25 36 25
   // 0 0 0 16 25 36 25 16
   // 0 0 9 16 25 36 25 16 9
   // 0 4 9 16 25 36 25 16 9 4
   // 1 4 9 16 25 36 25 16 9 4 1
 
// int a,b,c;
// printf("enter: ");
// scanf("%d",&a);
// b=a%10;
// a=a/10;
// while(a>9){
// a=a/10;

// }

//  printf("first ch=%d lasst ch =%d",a,b);
}

// (1,1) (1,2) (1,3) (1,4) (1,5) //
// (2,1) (2,2) (2,3) (2,4) (2,5) //
// (3,1) (3,2) (3,3) (3,4) (3,5) //
// (4,1) (4,2) (4,3) (4,4) (4,5) //
// (5,1) (5,2) (5,3) (5,4) (5,5) //












/*
        



*/