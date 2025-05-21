#include <stdio.h>

void main()
{
  char a[11];
  scanf("%s", &a);

    char b;
     printf("\nenter ");
  scanf(" %c", &b);
  int v=0;
  for(int i=0;i<11;i++){
if(b==a[i]){
  v+=1;
}
  }
  printf("\n%d",v);

}