//Q6: Write a program to swap two numbers using a third variable.

/*
Sample Test Cases:
Input 1:
3 5
Output 1:
After swap: 5 3

Input 2:
-1 1
Output 2:
After swap: 1 -1

*/

#include<stdio.h>
#include<math.h>
int main()
	{
		int a,b,temp;
		printf("Enter 1st and 2nd number = ");
		 scanf("%d%d",&a,&b);
		temp=a;
		a=b;
		b=temp;
		printf(" 1st No. = %d\n",a);
		printf(" 2nd No. = %d\n",b);
	}
