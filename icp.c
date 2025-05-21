#include <stdio.h>
void main() {
int sal;
printf("Enter the current salary: ");
scanf("%d",&sal);
printf("Enter the performance evaluation score (from 1 to 5): ");
int per;
scanf("%d",&per);
float bon;
bon=sal/100;
switch(per){
case 1:case 2:
   bon=bon*5;
   printf("%f",bon+sal);
   break;
case 3:
   bon=bon*10;
   printf("%f",bon+sal);
   break;
case 4:
   bon=bon*15;
   printf("%f",bon+sal);
   break;
case 5:
   bon=bon*50;
   printf("%f",bon+sal);
   break;
default:
printf("invalid num");
}
}






/*
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> gcc icp.c 
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe  
Enter the current salary: 100
Enter the performance evaluation score (from 1 to 5): 2
105.000000
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
Enter the current salary: 100
Enter the performance evaluation score (from 1 to 5): 1
105.000000
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
Enter the current salary: 100 
Enter the performance evaluation score (from 1 to 5): 5
150.000000
PS C:\Users\Ruhaan Pathan\Ruhaan\Python\Practice\.vscode> .\a.exe
Enter the current salary: 6
Enter the performance evaluation score (from 1 to 5): 6
invalid num*/