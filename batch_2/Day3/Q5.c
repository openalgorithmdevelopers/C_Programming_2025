//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/

#include<math.h>
#include<stdio.h>
int main()
    {
        float C,F;
        printf("Enter the temperature (in F) = ");
         scanf("%f",&F);
        C=(F-32)*5/9;
        printf("Temperature in Centigrades   = %f degree Centigrades\n",C);
    }
