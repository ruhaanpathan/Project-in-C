#include <stdio.h>
int count(int num){
int counter=num;
int count=0;
if(num==0){
return count=0;
}
while(counter>0){
counter=counter/10;
count++;}
return count;
}
void main(){
int number;
scanf("%d",&number);
int counter=count(number);
int complement;
while(counter>0){
complement=complement+(7*(10**counter));
counter--;
}
printf("%d",complement);

}