//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		float l,b;
		printf("Enter lentgh and breadth of rec. = ");
		 scanf("%f%f",&l,&b);
		printf("Area of rec. = %f square units\n",(l*b));
		printf("Perimeter of rec. = %f units\n",(2*(l+b)));
	}
