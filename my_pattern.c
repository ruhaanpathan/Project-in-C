# include <stdio.h>
void main(){
    int a;
    printf("enter: ");
    scanf("%d",&a);
for(int i=0;i<a;i++){
    for(int j=a;j>i+1;j--){
        printf(" ");
    }
    for (int q=0;q<=i;q++){
        printf(" *");
    }
    printf("\n");
}
for(int i=0;i<a;i++){
    for (int j=0;j<=i;j++){
        printf(" ");
    }
    for(int q=a-1;q>i;q--)
{
    printf(" *");
}
printf("\n");
}


    // 4
    // 9 16
    // 16 25 36
    // 25 36 49 64
    // int a=2;
// for(int i=1;i<=4;i++){

// for (int j=1;j<=i;j++){
    
//     printf(" %d",((i+j)*(i+j)));
    
    
// }

// printf("\n");
// }





}