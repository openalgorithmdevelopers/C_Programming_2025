#include<stdio.h>
int main(){
int num,rem,a=1,ori,b,c,d,e;
printf("enter an odd num:");
scanf("%d",&num);
ori = num;
while(num!=0){
a=a+1;
num=num/10;
}
c=a;
while(a>0){
rem=ori%10;
ori=ori/10;
a=a-1;
if(a==c/2)
b=rem;
if(a==1)
d=rem;
}
e=10*d+b;
printf("%d",e);
return 0;
}

