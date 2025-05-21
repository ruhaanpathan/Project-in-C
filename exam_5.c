# include<stdio.h>
void main(){
int p,c,b,m,total;
printf("enter marks of phy: ");
scanf("%d",&p);
printf("enter marks of chem: ");
scanf("%d",&c);
printf("enter marks of maths: ");
scanf("%d",&m);
printf("enter marks of bio: ");
scanf("%d",&b);
total=(p+c+m+b)/4;
if(total>=90){
    printf("GRADE A");
}
else if(total>=80){
    printf("GRADE B");
}
else if(total>=70){
    printf("GRADE C");
}
else if(total>=60){
    printf("GRADE D");
}
else if (total>=40)
{
    printf("GRADE E");
}
else{
    printf("GRADE F");
}

}