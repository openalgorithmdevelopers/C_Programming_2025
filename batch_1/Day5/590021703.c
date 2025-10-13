#include<stdio.h>
int main(){
int n;
printf("Enter a number:");
scanf("%d",&n);
while(1){
if(n<=99){
int a=n%10;
printf("%d",a);
break;}
else{
n=n/10;}}
return 0;}
