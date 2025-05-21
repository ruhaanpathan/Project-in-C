# include<stdio.h>
void main(){
int a;
printf("enter the num of month: ");
scanf("%d",&a);
switch (a){
    case 1:case 3:case 5:case 7:case 8: case 10: case 12:
        printf("31");
        break;
    case 2:
        printf("28");
        break;
    case 4: case 6: case 9: case 11:
        printf("29");
        break;
    default:
        printf("enter valid num");
}

}
/*
PS C:\Users\Ruhaan Pathan\ruhaan\Python\Practice\.vscode> gcc .\exam_3.c
PS C:\Users\Ruhaan Pathan\ruhaan\Python\Practice\.vscode> .\a.exe       
enter the num of month: 2
28
PS C:\Users\Ruhaan Pathan\ruhaan\Python\Practice\.vscode> .\a.exe
enter the num of month: 3
31
*/