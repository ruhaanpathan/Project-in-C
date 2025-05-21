# include <stdio.h>
void main()
{ // 1
    float rupees;
    float dollar;
    float difference = 83.88; // difference of money between rupees and dollar
    printf("\nconvertion of dollar to rupees");
    printf("\nenter the amount of money in rupees ");
    scanf("%f",&rupees);
    dollar=rupees/difference;
    printf("\nthe amount of money in dollar is %f\n",dollar);
//2

    float number1;
    float number2;
    float result;
    
    printf("\ncalculator");
    printf("\nenter the value of your first number ");
    scanf("%f",&number1);
    printf("\nenter the value of second number ");
    scanf("%f",&number2);
    char input;
    scanf("%c",&input);

    printf ("\nselect the sign \naddition(+) = +\nsubtraction(-) = -\nmultipication(*) = *\ndivision(/) = / \n");
    scanf("%c",&input);
    if (input=='+')
    {
        result=number1+number2;
        printf("\nthe answer of addition of two number is %f\n",result);
    }
    else if(input=='-')
    {
        result=number1-number2;
        printf("\nthe answer of subtraction of two number is %f\n",result);
    }
    else if(input=='*')
    {
        result=number1*number2;
        printf("\nthe answer of multiplication of two number is %f\n",result);
    }
    else if(input=='/')
    {
        result=number1/number2;
        printf("\nthe answer of divition of two number is %f\n",result);
    }
    else
    {
        printf("please select the correct number\n");
    }

//3

   float x;
   float k;
   float a;
   printf("\nverifiation of formula x=((k-4)*(a*4))/100");
   printf("\nenter the value of k: ");
   scanf("%f",&k);
   printf("\nenter the value of a: ");
   scanf("%f",&a);
   x=((k-4)*(a*4))/100;
   printf("the ans of formula is %f\n",x);

//4

   float t;
   float v;
   float s;
   float l;
   float m;
   printf("\nverification of second formula t=((v+s)+(l-m)*l)");
   printf("\nenter the value of v: ");
   scanf("%f",&v);
   printf("\nenter the value of s: ");
   scanf("%f",&s);
   printf("\nenter the value of l: ");
   scanf("%f",&l);
   printf("\nenter the value of m: ");
   scanf("%f",&m);
   t=((v+s)+(l-m)*l);
   printf("\nthe ans of formula t=((v+s)+(l-m)*l) is %f\n",t);

//5


   float ans;
   float p;
   float r;
   float n;
   printf("\nverification of third formula a=p*(1+(r/100)/n)-p");
   printf("\nenter the value of p: ");
   scanf("%f",&p);
   printf("\nenter the value of r: ");
   scanf("%f",&r);
   printf("\nenter the value of n: ");
   scanf("%f",&n);
   ans=p*(1+(r/100)/n)-p;
   printf("\nthe ans of formula t=((v+s)+(l-m)*l) is %f\n",ans);

///6

   float u;
   float q;
   float g;
   float c;
   printf("\nverification of forth formula s=((4*q+c)-2*q*g)/100");
   printf("\nenter the value of p: ");
   scanf("%f",&q);
   printf("\nenter the value of r: ");
   scanf("%f",&g);
   printf("\nenter the value of n: ");
   scanf("%f",&c);
   u=((4*q+c)-2*q*g)/100;
   printf("\nthe ans of formula s=((4*q+c)-2*q*g)/100 is %f\n",u);

//7
    int year;
    int months;
    int day;
    int num;
    int i;

    printf("\nenter the no of days: ");
    scanf("%d",&num);
    i=num/365;
    printf("\n%d YEARS",i);
    months=(num-(i*365))/30;
    printf(" %d months",months);
    day=(((num-(i*365))-(months*30)));
    printf(" %d days",day);

//8

   float area;
   float base;
   float height;
   printf("\nenter the base of your triangle: ");
   scanf("%f",&base);
   printf("\nenter the height of your triangle: ");
   scanf("%f",&height);
   area=(base*height)/2;
   printf("\nthe area of triangle is %f",area);
//9
   int num1;
   printf("\nEnter the number to check even or odd: ");
   scanf("%d",&num1);
   if(num1%2==0)
   {
    printf("\nthe  number is even\n");
   }
   else{
    printf("\nnum is odd\n");
   }
//10
   int integer1;
   int interger2;
   printf("\nenter num to shift bit wise: ");
   scanf("%d",&integer1);
   interger2= integer1>>3;
   printf("\nthe value coming after lefts shift by 3 is %d",interger2);
   interger2= integer1<<3;
   printf("\nthe value coming after right shift by 3 is %d",interger2);
 }