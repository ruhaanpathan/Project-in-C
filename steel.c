# include <stdio.h>
void main()
{
    int a;
    printf("Enter the hardness of metal: ");
    scanf("%d",&a);
    float b;
    printf("Enter the content of carbon: ");
    scanf("%f",&b);
    int c;
    printf("Enter the content of Tensile: ");
    scanf("%d",&c);
    char w;
    if(a>50&&b<0.7&&c>5500)
    {
        w='A';
    }
    
    else if(a>50&&b<0.7)
     {
        w='B';
     }
     
   else if(b<0.7&&c>5500)
      {
        w='C';
      }
    
   else if(a>50&&c>5500)
    {
        w='D';
    }
   else if(a>50||b<0.7||c>5500)
    {
        w='E';
    }
    else
    {
        w='F';
    }
    switch(w)
    {
        case 'A':
        {
            printf("GRADE A");
            break;
        }
        case 'B':
        {
            printf("GRADE B");
            break;
        }
        case 'C':
        {
            printf("GRADE C");
            break;
        }
        case 'D':
        {
            printf("GRADE D");
            break;
        }
        case 'E':
        {
            printf("GRADE E");
            break;
        }
        case 'F':
        {
            printf("GRADE F");
            break;
        }
    }
}