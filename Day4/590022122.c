#include<stdio.h>
int factorial(int);
int factorial(int num)
{
int ans=1;
while(num>0)
{
ans*=num;
num--;
}
return ans;
}
int power(int,int);
int power(int n1,int n2)
{
int ans=1;
while(n2>0)
{
ans*=n1;
n2--;
}
return ans;
}
int main()
{
int num=5;
int n1=2;int n2=3;
int fac=factorial(num);
int pow=power(n1,n2);
printf("Factorial of the number is:%d\nPower of the given number is:%d\n",fac,pow);
return 0;
}
