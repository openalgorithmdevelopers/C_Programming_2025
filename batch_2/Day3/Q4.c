//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		float r;
		printf("Enter radius of circle = ");
 		 scanf("%f",&r);
		printf("Area = %f square units\n",(3.14*r*r));
		printf("Circumference = %f units\n",(2*3.14*r));
	}
