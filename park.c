# include <stdio.h>
void main()
{
    float height;
    float weight;
    printf("welcome to water park\n");
    printf("enter your height in cm: \n");
    scanf ("%f",&height);
    printf("enter your weight in kg: ");
    scanf("%f",&weight);
    if(height>=150&&weight>=50)
    {
        printf("you can enter");
    }
    else{
        printf("please increase your height and weight");
    }





}