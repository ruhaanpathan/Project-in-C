# include <stdio.h>

void main()
{
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
    switch(input)
    {
    case'+':
    {
        result=number1+number2;
        printf("\nthe answer of addition of two number is %f\n",result);
        break;
    }
    case'-':
    {
        result=number1-number2;
        printf("\nthe answer of subtraction of two number is %f\n",result);
        break;
    }
    case'*':
    {
        result=number1*number2;
        printf("\nthe answer of multiplication of two number is %f\n",result);
        break;
    }
    case'/':
    {
        result=number1/number2;
        printf("\nthe answer of divition of two number is %f\n",result);
        break;
    }
    default:
    {
        printf("enter valid sign");
    }
    }
}