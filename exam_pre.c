#include <stdio.h>
#include <string.h>

//fun of 4

// void findTwosComplement(char binary[]) {
//     int length = strlen(binary);
//     int i;
//     int foundOne = 0;

//     for (i = length - 1; i >= 0; i--) {
//         if (foundOne) {
        
//             if (binary[i] == '0') {
//                 binary[i] = '1';
//             } else {
//                 binary[i] = '0';
//             }
//         } else if (binary[i] == '1') {
//             foundOne = 1; 
//         }
//     }
// }

//till this 4




// fun of 5
int romanToDecimal(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; 
    }
}

int convertRomanToDecimal(char roman[]) {
    int length = strlen(roman);
    int total = 0;

    for (int i = 0; i < length; i++) {
        int current = romanToDecimal(roman[i]);

        int next;
        if (i + 1 < length) {
            next = romanToDecimal(roman[i + 1]);
        } else {
            next = 0;
        }

   
        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }

    return total;
}

// till this 5












void main()
{

//ans of 2

//   int a;
//   int K;
//   printf("enter the value of k: ");
//   scanf("%d",&K);
//   printf("how many num you have to enter in array 1: ");
//   scanf("%d",&a);
// int b;

//     int i[a],r,j,t;
//     for(r=0;r<a;r++)
//     {
//       printf("\n enter the no: ");
//       scanf("%d",&i[r]);

//     }


//     for(r=0;r<=a;r++)
//     {
//       for(j=r+1;j<a;j++){
//         if(i[r]>i[j])
//         {
//           t=i[r];
//           i[r]=i[j];
//           i[j]=t;
//         }
//       }
//     }

//   printf("how many num you have to enter in array 2: ");
//   scanf("%d",&b);
//   int w[b];

//     for(r=0;r<b;r++)
//     {
//       printf("\n enter the no: ");
//       scanf("%d",&w[r]);

//     }


//     for(r=0;r<=b;r++)
//     {
//       for(j=r+1;j<b;j++){
//         if(w[r]>w[j])
//         {
//           t=w[r];
//           w[r]=w[j];
//           w[j]=t;
//         }
//       }
//     }


// int fi[a+b];


//       for(r=0;r<a;r++)
//     {
//       fi[r]=i[r];
//     }
//     int p=0;
//     for(int q=a;q<a+b;q++){
      
//       fi[q]=w[p];
//       p++;
//     }
//     for(r=0;r<=a+b;r++)
//     {
//       for(j=r+1;j<a+b;j++){
//         if(fi[r]>fi[j])
//         {
//           t=fi[r];
//           fi[r]=fi[j];
//           fi[j]=t;
//         }
//       }
//     }



//       printf("the value at k= %d is %d",K,fi[K]);































//ans of 1

// int a;
// printf("how many num you have to enter in array: ");
// scanf("%d",&a);

// int arr[a], D;


// while(1){
//   printf("enter the value of D: ");
//   scanf("%d",&D);
//     if(D<0){
//      printf("\nEnter the positive value\n");
//      continue;}
//     else{
//      break;
//     }
//     }

// for (int i=0;i<a;i++)
// {
//    printf("\n enter the no: ");
//    scanf("%d",&arr[i]);

// }
// int ar[a];
// int q=a-D;
// for (int i=0;i<D;i++)
//   { 
//     ar[i]=arr[q];
//     q++;
//   }
//   int w=0;
// for(int i=D;i<a;i++){
// ar[i]=arr[w];
// w++;
// }
// for (int i=0;i<a;i++){
//   arr[i]=ar[i];

// }
// for (int i=0;i<a;i++){
//   printf("%d ",arr[i]);
  
// }


























// ans of 3

    // float u, a, t_interval, t, distance;
    // int n_intervals, repeat;

    // do {
    //     printf("Enter the initial velocity (u) in m/s: ");
    //     scanf("%f", &u);
    //     printf("Enter the acceleration (a) in m/s: ");
    //     scanf("%f", &a);
    //     printf("Enter the time interval (in seconds): ");
    //     scanf("%f", &t_interval);
    //     printf("Enter the number of intervals: ");
    //     scanf("%d", &n_intervals);

    //     printf("\nDistance traveled at each interval:\n");
    //     printf("Time (s)   Distance (m)\n");
    //     printf("------------------------\n");

    //     for (int i = 1; i <= n_intervals; i++) {
    //         t = i * t_interval;
    //         distance = u * t + 0.5 * a * t; 
    //         printf("%f   %f\n", t, distance);
    //     }

    //     printf("\nDo you want to calculate for different values? (1 for Yes, 0 for No): ");
    //     scanf("%d", &repeat);

    // } while (repeat == 1);

    // printf("Program ended\n");
  






//ans of 4


    // char binary[100];

    // printf("Enter a binary number: ");
    // scanf("%s", binary);


    // findTwosComplement(binary);


    // printf("2's complement: %s\n", binary);







// ans of 5



   char roman[100];

 
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

  
    int decimal = convertRomanToDecimal(roman);
    printf("The decimal equivalent of %s is %d\n", roman, decimal);

  





  }
