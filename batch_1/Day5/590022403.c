#include<stdio.h>
int main()
{
int num=0;
printf("num");
scanf("%d",&num);
while(num>=100){

num=num/10;
}
printf("%d",num%10);
return 0;
}
