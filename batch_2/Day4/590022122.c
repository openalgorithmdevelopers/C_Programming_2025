#include<stdio.h>
int len(int);
int len(int a)
{
int cnt=0;
while(a!=0)
{
cnt++;
a=a/10;
}
return cnt;
}
int main()
{
int n;
printf("Enter the number:");
scanf("%d",&n);
int l=len(n);
int first=0;
int second=0;
while(n>0)
{
second=n%10;
n=n/10;
if(n==0 && l%2!=0) 
{
printf("%d",second);
printf("%d",first);
break;
}
else
{
first=n%10;
n=n/10;
}
}
if(l%2==0)
{
printf("%d",first);
printf("%d",second);
}
return 0;
}

