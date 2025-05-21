#include <stdio.h>
void main()
{
    int x[3][3];

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            printf("\nenter:");
            scanf("%d", &x[i][j]);
        }
    }
    // for (int i = 0; i < 3; i++)
    // // {

    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("%d", x[i][j]);
    //     }
    //     printf("\n");
    // }
    // int q, r, s;
    // q = x[0][0] * ((x[1][1] * x[2][2]) - (x[1][2] * x[2][1]));
    // r = x[0][1] * ((x[1][0] * x[2][2]) - (x[1][2] * x[2][0]));
    // s = x[0][2] * ((x[1][0] * x[2][1]) - (x[1][1] * x[2][0]));

    // printf("%d", ((q - r) + s));

    int a, b, c, d, e, f;
    d = x[0][0] + x[0][1] + x[0][2];
    e = x[1][0] + x[1][1] + x[1][2];
    f = x[2][0] + x[2][1] + x[2][2];

    a = x[0][0] + x[1][0] + x[2][0];
    b = x[0][1] + x[1][1] + x[2][1];
    c = x[0][2] + x[1][2] + x[2][2];

    int g[2][3] = {{a, b, c}, {d, e, f}};

    for (int i = 0; i < 2; i++)
    {
      for(int j=0;j<3;j++)
      {
        printf("%d  ",g[i][j]);
      }
      printf("\n");
    }
}