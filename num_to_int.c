# include<stdio.h>
void main(){
    int space=0;
    char arr[20][20];
    char num[50];
    scanf("%[^\n]s",&num);
    int i=0,j=0,k=0;
    while(num[i]!='\0'){
        if(num[i]!=' '){
            arr[j][k]=num[i];
            i++;
            k++;
        }
        else if(num[i]==' '){
            j++;
            i++;
            k++;
        }
    }
    printf("%s",arr[0]);
    
}