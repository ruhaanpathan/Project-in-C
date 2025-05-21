# include<stdio.h>
int hello(int a){
    printf("1");
    return 0;
}
char hello(char a){
    printf("2");
    return 's';
}
float hello(float a){
    printf("3");
    return 1.1;
}
int main(){
hello(1);
return 0;
}