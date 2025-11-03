#include<stdio.h>

int main() {
int num;

printf("Enter a number: ");
scanf("%d",&num);

if (num<0)
num=-num;

while (num>=10){
num=num/10;}

printf("The first significant number is: %d\n",num);
return 0;
} 
