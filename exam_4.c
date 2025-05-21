# include<stdio.h>
void main(){
    int a;
    printf("enter the num: ");
    scanf("%d",&a);
    int b=1;
    while(b<=10){
        printf("%d x %d = %d",a,b,a*b);
        printf("\n");
        b++;
    }
}
/*
PS C:\Users\Ruhaan Pathan\ruhaan\Python\Practice\.vscode> gcc .\exam_4.c
PS C:\Users\Ruhaan Pathan\ruhaan\Python\Practice\.vscode> .\a.exe       
enter the num: 10
10 x 1 = 10
10 x 2 = 20
10 x 3 = 30
10 x 4 = 40
10 x 5 = 50
10 x 6 = 60
10 x 7 = 70
10 x 8 = 80
10 x 9 = 90
10 x 10 = 100*/