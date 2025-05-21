// 1 (1)+0
// 3 2 (2)+1
// 6 5 4  (3)+3
// 10 9 8 7 (4)+6
// 15 14 13 12 11 (5)+10

# include <stdio.h>

void main()
{
    int num = 1;
    for(int i=1; i<=5; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            // printf("%d ", i-j+num);
            printf("%d ", i-j+num - a+1);
            // i - j + num - a
            // 1 - 1 + 1 - 1
            // 2 - 1 + 2 - 1
            a++;
            num++;
        }
        printf("\n");
    }
}