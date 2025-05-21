#include<stdio.h>
void  main()
{
 char s[20];
 char q[20];
 char a[20];
 int len;
 printf("enter string: ");
 scanf("%s",&s);
 scanf("%s",&a);
 printf("%s",a);
   len = sizeof(s)/sizeof(s[0]);
   int leng = sizeof(q)/sizeof(q[0]);
for (int i=0;i<len;i++)
 {
   q[i]=s[i];
 }
 for (int i=1;i<leng+len;i++){
   for (int j=1;i<leng;i++){
  q[i]=a[j];
 }
 }

}