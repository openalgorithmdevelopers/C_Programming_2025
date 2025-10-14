// WAP to print the number formed from the first and 2nd last digit of a given number

#include <stdio.h>

int main() {

int num ;
  num = 512345 ;
  while(num!=0){
  num= num%10 ;
    if(num=4){
   break ;
    }
    printf("%d ",num);
    }
    while(num!=0){
     num= num%10 ;
     if(num=5) {
     break ;
     }
     printf("%d ",num);


    }
    return 0;
    }
